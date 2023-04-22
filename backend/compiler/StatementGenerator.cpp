#include <string>
#include <vector>
#include <map>

#include "PascalBaseVisitor.h"
#include "antlr4-runtime.h"

#include "intermediate/symtab/Predefined.h"
#include "backend/compiler/Compiler.h"
#include "backend/compiler/StatementGenerator.h"

namespace backend { namespace compiler {

using namespace std;
using namespace intermediate;

string StatementGenerator::typeToString(Typespec *type){
    static std::map<Typespec*,string> typeMap= {
            {Predefined::integerType,"I"},
            {Predefined::charType,"C"},
            {Predefined::booleanType,"Z"},
            {Predefined::realType,"F"},
            {Predefined::stringType,"S"},
            {Predefined::undefinedType,"V"}
    };
    return typeMap[type];
}

void StatementGenerator::emitCast(Typespec* from, Typespec* to){
    //There's probably a better way to do this, but...
    if(from == Predefined::integerType){
        if(to == Predefined::realType){
            emit(Instruction::I2F);
        }
    }
}

void StatementGenerator::emitAssignment(PascalParser::AssignmentStatementContext *ctx)
{
    PascalParser::VariableContext *varCtx  = ctx->lhs()->variable();
    PascalParser::ExpressionContext *exprCtx = ctx->rhs()->expression();
    SymtabEntry *varId = varCtx->entry;
    Typespec *varType  = varCtx->type;
    Typespec *exprType = exprCtx->type;

    // The last modifier, if any, is the variable's last subscript or field.
    int modifierCount = varCtx->modifier().size();
    PascalParser::ModifierContext *lastModCtx = modifierCount == 0
                            ? nullptr : varCtx->modifier()[modifierCount - 1];

    // The target variable has subscripts and/or fields.
    if (modifierCount > 0)
    {
        lastModCtx = varCtx->modifier()[modifierCount - 1];
        compiler->visit(varCtx);
    }

    // Emit code to evaluate the expression.
    compiler->visit(exprCtx);

    // float variable := integer constant
    if (   (varType == Predefined::realType)
        && (exprType->baseType() == Predefined::integerType)) emit(I2F);

    // Emit code to store the expression value into the target variable.
    // The target variable has no subscripts or fields.
    if (lastModCtx == nullptr) emitStoreValue(varId, varId->getType());

    // The target variable is a field.
    else if (lastModCtx->field() != nullptr)
    {
        emitStoreValue(lastModCtx->field()->entry, lastModCtx->field()->type);
    }

    // The target variable is an array element.
    else
    {
        emitStoreValue(nullptr, varType);
    }
}

void StatementGenerator::emitIf(PascalParser::IfStatementContext *ctx)
{
    auto *falseLabel = new Label();
    auto *doneLabel = new Label();

    compiler->visitExpression(ctx->expression());

    emit(Instruction::ICONST_0);
    if (ctx->ELSE()) emit(Instruction::IF_ICMPEQ, falseLabel->getString());
    else emit(Instruction::IF_ICMPEQ, doneLabel->getString());

    compiler->visit(ctx->trueStatement());
    emit(Instruction::GOTO, doneLabel->getString());

    if (ctx->ELSE()) {
        emitLabel(falseLabel);
        compiler->visit(ctx->falseStatement());
    }

    emitLabel(doneLabel);
}

void StatementGenerator::emitCase(PascalParser::CaseStatementContext *ctx)
{
    std::vector<std::pair<PascalParser::CaseBranchContext *, Label *>> branchLabels;

    for (PascalParser::CaseBranchContext *branch: ctx->caseBranchList()->caseBranch())
        branchLabels.emplace_back(branch, new Label);
    auto *exitCase = new Label;

    compiler->visit(ctx->expression());

    emit(Instruction::LOOKUPSWITCH);

    std::set<std::pair<int, Label *>> labelSet;
    for (auto &branchLabel: branchLabels) {
        if (!branchLabel.first->caseConstantList()) {
            continue;
        }

        for (PascalParser::CaseConstantContext *constantCtx: branchLabel.first->caseConstantList()->caseConstant()) {
            labelSet.insert(std::make_pair(constantCtx->value, branchLabel.second));
        }
    }

    for (auto entry: labelSet) {
        emitLabel(entry.first, entry.second);
    }
    emitLabel("default", exitCase);

    for (auto entry: branchLabels) {
        emitLabel(entry.second);
        if (entry.first->statement() != nullptr) {
            compiler->visit(entry.first->statement());
        }
        emit(Instruction::GOTO, exitCase->getString());
    }

    emitLabel(exitCase);
}

void StatementGenerator::emitRepeat(PascalParser::RepeatStatementContext *ctx)
{
    Label *loopTopLabel  = new Label();
    Label *loopExitLabel = new Label();

    emitLabel(loopTopLabel);

    compiler->visit(ctx->statementList());
    compiler->visit(ctx->expression());
    emit(IFNE, loopExitLabel);
    emit(GOTO, loopTopLabel);

    emitLabel(loopExitLabel);
}

void StatementGenerator::emitWhile(PascalParser::WhileStatementContext *ctx)
{
    auto *topLabel = new Label();
    auto *exitLabel = new Label();

    emitLabel(topLabel);

    compiler->visitExpression(ctx->expression());

    emit(Instruction::ICONST_0);
    emit(Instruction::IF_ICMPEQ, exitLabel->getString());

    compiler->visit(ctx->statement());
    emit(Instruction::GOTO, topLabel->getString());

    emitLabel(exitLabel);
}

void StatementGenerator::emitFor(PascalParser::ForStatementContext *ctx)
{
    auto *topLabel = new Label();
    auto *exitLabel = new Label();

    compiler->visit(ctx->expression()[0]);
    emitStoreValue(ctx->variable()->entry, ctx->variable()->type);

    emitLabel(topLabel);

    compiler->visit(ctx->expression()[1]);
    emit(Instruction::ICONST_1);
    if (ctx->TO()) emit(Instruction::IADD);
    else emit(Instruction::ISUB);
    emitLoadValue(ctx->variable()->entry);

    emit(Instruction::IF_ICMPEQ, exitLabel->getString());

    compiler->visit(ctx->statement());

    emitLoadValue(ctx->variable()->entry);
    emit(Instruction::ICONST_1);
    if (ctx->TO()) emit(Instruction::IADD);
    else emit(Instruction::ISUB);
    emitStoreValue(ctx->variable()->entry, ctx->variable()->type);
    emit(Instruction::GOTO, topLabel->getString());

    emitLabel(exitLabel);
}

void StatementGenerator::emitProcedureCall(PascalParser::ProcedureCallStatementContext *ctx)
{
    emitCall(ctx->procedureName()->entry,ctx->argumentList());
}

void StatementGenerator::emitFunctionCall(PascalParser::FunctionCallContext *ctx)
{
    emitCall(ctx->functionName()->entry,ctx->argumentList());
}

void StatementGenerator::emitCall(SymtabEntry *routineId,
                                  PascalParser::ArgumentListContext *argListCtx)
{
    string argType;

    if (argListCtx) {
        std::vector<Typespec *> expectedArgType;
        expectedArgType.reserve(argListCtx->argument().size());
        for (auto argSymTabEntry: *routineId->getRoutineParameters()) {
            expectedArgType.push_back(argSymTabEntry->getType());
            argType += typeToString(argSymTabEntry->getType());
        }

        for (unsigned int i = 0; i < argListCtx->argument().size(); i++) {
            auto argCtx = argListCtx->argument(i);
            compiler->visit(argCtx->expression());
            if (argCtx->expression()->type != expectedArgType[i])
                emitCast(argCtx->expression()->type, expectedArgType[i]);
        }
    }

    // Only static functions
    string retType = typeToString(routineId->getType());
    string functionName =
            programName + "/" + routineId->getName() + "(" + argType + ")" + (retType.empty() ? "V" : retType);
    emit(Instruction::INVOKESTATIC, functionName);
}

void StatementGenerator::emitWrite(PascalParser::WriteStatementContext *ctx)
{
    emitWrite(ctx->writeArguments(), false);
}

void StatementGenerator::emitWriteln(PascalParser::WritelnStatementContext *ctx)
{
    emitWrite(ctx->writeArguments(), true);
}

void StatementGenerator::emitWrite(PascalParser::WriteArgumentsContext *argsCtx,
                      bool needLF)
{
    emit(GETSTATIC, "java/lang/System/out", "Ljava/io/PrintStream;");

    // WRITELN with no arguments.
    if (argsCtx == nullptr)
    {
        emit(INVOKEVIRTUAL, "java/io/PrintStream.println()V");
        localStack->decrease(1);
    }

    // Generate code for the arguments.
    else
    {
        string format;
        int exprCount = createWriteFormat(argsCtx, format, needLF);

        // Load the format string.
        emit(LDC, format);

        // Emit the arguments array.
       if (exprCount > 0)
        {
            emitArgumentsArray(argsCtx, exprCount);

            emit(INVOKEVIRTUAL,
                        string("java/io/PrintStream/printf(Ljava/lang/String;")
                      + string("[Ljava/lang/Object;)")
                      + string("Ljava/io/PrintStream;"));
            localStack->decrease(2);
            emit(POP);
        }
        else
        {
            emit(INVOKEVIRTUAL,
                 "java/io/PrintStream/print(Ljava/lang/String;)V");
            localStack->decrease(2);
        }
    }
}

int StatementGenerator::createWriteFormat(
                                PascalParser::WriteArgumentsContext *argsCtx,
                                string& format, bool needLF)
{
    int exprCount = 0;
    format += "\"";

    // Loop over the write arguments.
    for (PascalParser::WriteArgumentContext *argCtx : argsCtx->writeArgument())
    {
        Typespec *type = argCtx->expression()->type;
        string argText = argCtx->getText();

        // Append any literal strings.
        if (argText[0] == '\'') format += convertString(argText, true);

        // For any other expressions, append a field specifier.
        else
        {
            exprCount++;
            format.append("%");

            PascalParser::FieldWidthContext *fwCtx = argCtx->fieldWidth();
            if (fwCtx != nullptr)
            {
                string sign = (   (fwCtx->sign() != nullptr)
                               && (fwCtx->sign()->getText() == "-")) ? "-" : "";
                format += sign + fwCtx->integerConstant()->getText();

                PascalParser::DecimalPlacesContext *dpCtx =
                                                        fwCtx->decimalPlaces();
                if (dpCtx != nullptr)
                {
                    format += "." + dpCtx->integerConstant()->getText();
                }
            }

            string typeFlag = type == Predefined::integerType ? "d"
                            : type == Predefined::realType    ? "f"
                            : type == Predefined::booleanType ? "b"
                            : type == Predefined::charType    ? "c"
                            :                                  "s";
            format += typeFlag;
        }
    }

    format += needLF ? "\\n\"" : "\"";

    return exprCount;
}

void StatementGenerator::emitArgumentsArray(
                    PascalParser::WriteArgumentsContext *argsCtx, int exprCount)
{
    // Create the arguments array.
    emitLoadConstant(exprCount);
    emit(ANEWARRAY, "java/lang/Object");

    int index = 0;

    // Loop over the write arguments to fill the arguments array.
    for (PascalParser::WriteArgumentContext *argCtx :
                                                argsCtx->writeArgument())
    {
        string argText = argCtx->getText();
        PascalParser::ExpressionContext *exprCtx = argCtx->expression();
        Typespec *type = exprCtx->type->baseType();

        // Skip string constants, which were made part of
        // the format string.
        if (argText[0] != '\'')
        {
            emit(DUP);
            emitLoadConstant(index++);

            compiler->visit(exprCtx);

            Form form = type->getForm();
            if (    ((form == SCALAR) || (form == ENUMERATION))
                 && (type != Predefined::stringType))
            {
                emit(INVOKESTATIC, valueOfSignature(type));
            }

            // Store the value into the array.
            emit(AASTORE);
        }
    }
}

void StatementGenerator::emitRead(PascalParser::ReadStatementContext *ctx)
{
    emitRead(ctx->readArguments(), false);
}

void StatementGenerator::emitReadln(PascalParser::ReadlnStatementContext *ctx)
{
    emitRead(ctx->readArguments(), true);
}

void StatementGenerator::emitRead(PascalParser::ReadArgumentsContext *argsCtx,
                                  bool needSkip)
{
    int size = argsCtx->variable().size();

    // Loop over read arguments.
    for (int i = 0; i < size; i++)
    {
        PascalParser::VariableContext *varCtx = argsCtx->variable()[i];
        Typespec *varType = varCtx->type;

        if (varType == Predefined::integerType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/nextInt()I");
            emitStoreValue(varCtx->entry, nullptr);
        }
        else if (varType == Predefined::realType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/nextFloat()F");
            emitStoreValue(varCtx->entry, nullptr);
        }
        else if (varType == Predefined::booleanType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/nextBoolean()Z");
            emitStoreValue(varCtx->entry, nullptr);
        }
        else if (varType == Predefined::charType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(LDC, "\"\"");
            emit(INVOKEVIRTUAL,
                 string("java/util/Scanner/useDelimiter(Ljava/lang/String;)") +
                 string("Ljava/util/Scanner;"));
            emit(POP);
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/next()Ljava/lang/String;");
            emit(ICONST_0);
            emit(INVOKEVIRTUAL, "java/lang/String/charAt(I)C");
            emitStoreValue(varCtx->entry, nullptr);

            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/reset()Ljava/util/Scanner;");

        }
        else  // string
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/next()Ljava/lang/String;");
            emitStoreValue(varCtx->entry, nullptr);
        }
    }

    // READLN: Skip the rest of the input line.
    if (needSkip)
    {
        emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
        emit(INVOKEVIRTUAL, "java/util/Scanner/nextLine()Ljava/lang/String;");
        emit(POP);
    }
}

}} // namespace backend::compiler
