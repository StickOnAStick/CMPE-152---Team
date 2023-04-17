// Generated from experiment.g4 by ANTLR 4.7
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link experimentParser}.
 */
public interface experimentListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link experimentParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(experimentParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(experimentParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#programHeading}.
	 * @param ctx the parse tree
	 */
	void enterProgramHeading(experimentParser.ProgramHeadingContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#programHeading}.
	 * @param ctx the parse tree
	 */
	void exitProgramHeading(experimentParser.ProgramHeadingContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#identifier}.
	 * @param ctx the parse tree
	 */
	void enterIdentifier(experimentParser.IdentifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#identifier}.
	 * @param ctx the parse tree
	 */
	void exitIdentifier(experimentParser.IdentifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(experimentParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(experimentParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#usesUnitsPart}.
	 * @param ctx the parse tree
	 */
	void enterUsesUnitsPart(experimentParser.UsesUnitsPartContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#usesUnitsPart}.
	 * @param ctx the parse tree
	 */
	void exitUsesUnitsPart(experimentParser.UsesUnitsPartContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#labelDeclarationPart}.
	 * @param ctx the parse tree
	 */
	void enterLabelDeclarationPart(experimentParser.LabelDeclarationPartContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#labelDeclarationPart}.
	 * @param ctx the parse tree
	 */
	void exitLabelDeclarationPart(experimentParser.LabelDeclarationPartContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#label}.
	 * @param ctx the parse tree
	 */
	void enterLabel(experimentParser.LabelContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#label}.
	 * @param ctx the parse tree
	 */
	void exitLabel(experimentParser.LabelContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#constantDefinitionPart}.
	 * @param ctx the parse tree
	 */
	void enterConstantDefinitionPart(experimentParser.ConstantDefinitionPartContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#constantDefinitionPart}.
	 * @param ctx the parse tree
	 */
	void exitConstantDefinitionPart(experimentParser.ConstantDefinitionPartContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#constantDefinition}.
	 * @param ctx the parse tree
	 */
	void enterConstantDefinition(experimentParser.ConstantDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#constantDefinition}.
	 * @param ctx the parse tree
	 */
	void exitConstantDefinition(experimentParser.ConstantDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#constantChr}.
	 * @param ctx the parse tree
	 */
	void enterConstantChr(experimentParser.ConstantChrContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#constantChr}.
	 * @param ctx the parse tree
	 */
	void exitConstantChr(experimentParser.ConstantChrContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#constant}.
	 * @param ctx the parse tree
	 */
	void enterConstant(experimentParser.ConstantContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#constant}.
	 * @param ctx the parse tree
	 */
	void exitConstant(experimentParser.ConstantContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#unsignedNumber}.
	 * @param ctx the parse tree
	 */
	void enterUnsignedNumber(experimentParser.UnsignedNumberContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#unsignedNumber}.
	 * @param ctx the parse tree
	 */
	void exitUnsignedNumber(experimentParser.UnsignedNumberContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#unsignedInteger}.
	 * @param ctx the parse tree
	 */
	void enterUnsignedInteger(experimentParser.UnsignedIntegerContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#unsignedInteger}.
	 * @param ctx the parse tree
	 */
	void exitUnsignedInteger(experimentParser.UnsignedIntegerContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#unsignedReal}.
	 * @param ctx the parse tree
	 */
	void enterUnsignedReal(experimentParser.UnsignedRealContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#unsignedReal}.
	 * @param ctx the parse tree
	 */
	void exitUnsignedReal(experimentParser.UnsignedRealContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#sign}.
	 * @param ctx the parse tree
	 */
	void enterSign(experimentParser.SignContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#sign}.
	 * @param ctx the parse tree
	 */
	void exitSign(experimentParser.SignContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#bool_}.
	 * @param ctx the parse tree
	 */
	void enterBool_(experimentParser.Bool_Context ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#bool_}.
	 * @param ctx the parse tree
	 */
	void exitBool_(experimentParser.Bool_Context ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#string}.
	 * @param ctx the parse tree
	 */
	void enterString(experimentParser.StringContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#string}.
	 * @param ctx the parse tree
	 */
	void exitString(experimentParser.StringContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#typeDefinitionPart}.
	 * @param ctx the parse tree
	 */
	void enterTypeDefinitionPart(experimentParser.TypeDefinitionPartContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#typeDefinitionPart}.
	 * @param ctx the parse tree
	 */
	void exitTypeDefinitionPart(experimentParser.TypeDefinitionPartContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#typeDefinition}.
	 * @param ctx the parse tree
	 */
	void enterTypeDefinition(experimentParser.TypeDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#typeDefinition}.
	 * @param ctx the parse tree
	 */
	void exitTypeDefinition(experimentParser.TypeDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#functionType}.
	 * @param ctx the parse tree
	 */
	void enterFunctionType(experimentParser.FunctionTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#functionType}.
	 * @param ctx the parse tree
	 */
	void exitFunctionType(experimentParser.FunctionTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#procedureType}.
	 * @param ctx the parse tree
	 */
	void enterProcedureType(experimentParser.ProcedureTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#procedureType}.
	 * @param ctx the parse tree
	 */
	void exitProcedureType(experimentParser.ProcedureTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#type_}.
	 * @param ctx the parse tree
	 */
	void enterType_(experimentParser.Type_Context ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#type_}.
	 * @param ctx the parse tree
	 */
	void exitType_(experimentParser.Type_Context ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#simpleType}.
	 * @param ctx the parse tree
	 */
	void enterSimpleType(experimentParser.SimpleTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#simpleType}.
	 * @param ctx the parse tree
	 */
	void exitSimpleType(experimentParser.SimpleTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#scalarType}.
	 * @param ctx the parse tree
	 */
	void enterScalarType(experimentParser.ScalarTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#scalarType}.
	 * @param ctx the parse tree
	 */
	void exitScalarType(experimentParser.ScalarTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#subrangeType}.
	 * @param ctx the parse tree
	 */
	void enterSubrangeType(experimentParser.SubrangeTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#subrangeType}.
	 * @param ctx the parse tree
	 */
	void exitSubrangeType(experimentParser.SubrangeTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#typeIdentifier}.
	 * @param ctx the parse tree
	 */
	void enterTypeIdentifier(experimentParser.TypeIdentifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#typeIdentifier}.
	 * @param ctx the parse tree
	 */
	void exitTypeIdentifier(experimentParser.TypeIdentifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#structuredType}.
	 * @param ctx the parse tree
	 */
	void enterStructuredType(experimentParser.StructuredTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#structuredType}.
	 * @param ctx the parse tree
	 */
	void exitStructuredType(experimentParser.StructuredTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#unpackedStructuredType}.
	 * @param ctx the parse tree
	 */
	void enterUnpackedStructuredType(experimentParser.UnpackedStructuredTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#unpackedStructuredType}.
	 * @param ctx the parse tree
	 */
	void exitUnpackedStructuredType(experimentParser.UnpackedStructuredTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#stringtype}.
	 * @param ctx the parse tree
	 */
	void enterStringtype(experimentParser.StringtypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#stringtype}.
	 * @param ctx the parse tree
	 */
	void exitStringtype(experimentParser.StringtypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#arrayType}.
	 * @param ctx the parse tree
	 */
	void enterArrayType(experimentParser.ArrayTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#arrayType}.
	 * @param ctx the parse tree
	 */
	void exitArrayType(experimentParser.ArrayTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#typeList}.
	 * @param ctx the parse tree
	 */
	void enterTypeList(experimentParser.TypeListContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#typeList}.
	 * @param ctx the parse tree
	 */
	void exitTypeList(experimentParser.TypeListContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#indexType}.
	 * @param ctx the parse tree
	 */
	void enterIndexType(experimentParser.IndexTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#indexType}.
	 * @param ctx the parse tree
	 */
	void exitIndexType(experimentParser.IndexTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#componentType}.
	 * @param ctx the parse tree
	 */
	void enterComponentType(experimentParser.ComponentTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#componentType}.
	 * @param ctx the parse tree
	 */
	void exitComponentType(experimentParser.ComponentTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#recordType}.
	 * @param ctx the parse tree
	 */
	void enterRecordType(experimentParser.RecordTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#recordType}.
	 * @param ctx the parse tree
	 */
	void exitRecordType(experimentParser.RecordTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#fieldList}.
	 * @param ctx the parse tree
	 */
	void enterFieldList(experimentParser.FieldListContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#fieldList}.
	 * @param ctx the parse tree
	 */
	void exitFieldList(experimentParser.FieldListContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#fixedPart}.
	 * @param ctx the parse tree
	 */
	void enterFixedPart(experimentParser.FixedPartContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#fixedPart}.
	 * @param ctx the parse tree
	 */
	void exitFixedPart(experimentParser.FixedPartContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#recordSection}.
	 * @param ctx the parse tree
	 */
	void enterRecordSection(experimentParser.RecordSectionContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#recordSection}.
	 * @param ctx the parse tree
	 */
	void exitRecordSection(experimentParser.RecordSectionContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#variantPart}.
	 * @param ctx the parse tree
	 */
	void enterVariantPart(experimentParser.VariantPartContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#variantPart}.
	 * @param ctx the parse tree
	 */
	void exitVariantPart(experimentParser.VariantPartContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#tag}.
	 * @param ctx the parse tree
	 */
	void enterTag(experimentParser.TagContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#tag}.
	 * @param ctx the parse tree
	 */
	void exitTag(experimentParser.TagContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#variant}.
	 * @param ctx the parse tree
	 */
	void enterVariant(experimentParser.VariantContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#variant}.
	 * @param ctx the parse tree
	 */
	void exitVariant(experimentParser.VariantContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#setType}.
	 * @param ctx the parse tree
	 */
	void enterSetType(experimentParser.SetTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#setType}.
	 * @param ctx the parse tree
	 */
	void exitSetType(experimentParser.SetTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#baseType}.
	 * @param ctx the parse tree
	 */
	void enterBaseType(experimentParser.BaseTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#baseType}.
	 * @param ctx the parse tree
	 */
	void exitBaseType(experimentParser.BaseTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#fileType}.
	 * @param ctx the parse tree
	 */
	void enterFileType(experimentParser.FileTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#fileType}.
	 * @param ctx the parse tree
	 */
	void exitFileType(experimentParser.FileTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#pointerType}.
	 * @param ctx the parse tree
	 */
	void enterPointerType(experimentParser.PointerTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#pointerType}.
	 * @param ctx the parse tree
	 */
	void exitPointerType(experimentParser.PointerTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#variableDeclarationPart}.
	 * @param ctx the parse tree
	 */
	void enterVariableDeclarationPart(experimentParser.VariableDeclarationPartContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#variableDeclarationPart}.
	 * @param ctx the parse tree
	 */
	void exitVariableDeclarationPart(experimentParser.VariableDeclarationPartContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#variableDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterVariableDeclaration(experimentParser.VariableDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#variableDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitVariableDeclaration(experimentParser.VariableDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#procedureAndFunctionDeclarationPart}.
	 * @param ctx the parse tree
	 */
	void enterProcedureAndFunctionDeclarationPart(experimentParser.ProcedureAndFunctionDeclarationPartContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#procedureAndFunctionDeclarationPart}.
	 * @param ctx the parse tree
	 */
	void exitProcedureAndFunctionDeclarationPart(experimentParser.ProcedureAndFunctionDeclarationPartContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#procedureOrFunctionDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterProcedureOrFunctionDeclaration(experimentParser.ProcedureOrFunctionDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#procedureOrFunctionDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitProcedureOrFunctionDeclaration(experimentParser.ProcedureOrFunctionDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#procedureDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterProcedureDeclaration(experimentParser.ProcedureDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#procedureDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitProcedureDeclaration(experimentParser.ProcedureDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#formalParameterList}.
	 * @param ctx the parse tree
	 */
	void enterFormalParameterList(experimentParser.FormalParameterListContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#formalParameterList}.
	 * @param ctx the parse tree
	 */
	void exitFormalParameterList(experimentParser.FormalParameterListContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#formalParameterSection}.
	 * @param ctx the parse tree
	 */
	void enterFormalParameterSection(experimentParser.FormalParameterSectionContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#formalParameterSection}.
	 * @param ctx the parse tree
	 */
	void exitFormalParameterSection(experimentParser.FormalParameterSectionContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#parameterGroup}.
	 * @param ctx the parse tree
	 */
	void enterParameterGroup(experimentParser.ParameterGroupContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#parameterGroup}.
	 * @param ctx the parse tree
	 */
	void exitParameterGroup(experimentParser.ParameterGroupContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#identifierList}.
	 * @param ctx the parse tree
	 */
	void enterIdentifierList(experimentParser.IdentifierListContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#identifierList}.
	 * @param ctx the parse tree
	 */
	void exitIdentifierList(experimentParser.IdentifierListContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#constList}.
	 * @param ctx the parse tree
	 */
	void enterConstList(experimentParser.ConstListContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#constList}.
	 * @param ctx the parse tree
	 */
	void exitConstList(experimentParser.ConstListContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterFunctionDeclaration(experimentParser.FunctionDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitFunctionDeclaration(experimentParser.FunctionDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#resultType}.
	 * @param ctx the parse tree
	 */
	void enterResultType(experimentParser.ResultTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#resultType}.
	 * @param ctx the parse tree
	 */
	void exitResultType(experimentParser.ResultTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(experimentParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(experimentParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#unlabelledStatement}.
	 * @param ctx the parse tree
	 */
	void enterUnlabelledStatement(experimentParser.UnlabelledStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#unlabelledStatement}.
	 * @param ctx the parse tree
	 */
	void exitUnlabelledStatement(experimentParser.UnlabelledStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#simpleStatement}.
	 * @param ctx the parse tree
	 */
	void enterSimpleStatement(experimentParser.SimpleStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#simpleStatement}.
	 * @param ctx the parse tree
	 */
	void exitSimpleStatement(experimentParser.SimpleStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#assignmentStatement}.
	 * @param ctx the parse tree
	 */
	void enterAssignmentStatement(experimentParser.AssignmentStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#assignmentStatement}.
	 * @param ctx the parse tree
	 */
	void exitAssignmentStatement(experimentParser.AssignmentStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#variable}.
	 * @param ctx the parse tree
	 */
	void enterVariable(experimentParser.VariableContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#variable}.
	 * @param ctx the parse tree
	 */
	void exitVariable(experimentParser.VariableContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(experimentParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(experimentParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#relationaloperator}.
	 * @param ctx the parse tree
	 */
	void enterRelationaloperator(experimentParser.RelationaloperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#relationaloperator}.
	 * @param ctx the parse tree
	 */
	void exitRelationaloperator(experimentParser.RelationaloperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#simpleExpression}.
	 * @param ctx the parse tree
	 */
	void enterSimpleExpression(experimentParser.SimpleExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#simpleExpression}.
	 * @param ctx the parse tree
	 */
	void exitSimpleExpression(experimentParser.SimpleExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#additiveoperator}.
	 * @param ctx the parse tree
	 */
	void enterAdditiveoperator(experimentParser.AdditiveoperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#additiveoperator}.
	 * @param ctx the parse tree
	 */
	void exitAdditiveoperator(experimentParser.AdditiveoperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#term}.
	 * @param ctx the parse tree
	 */
	void enterTerm(experimentParser.TermContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#term}.
	 * @param ctx the parse tree
	 */
	void exitTerm(experimentParser.TermContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#multiplicativeoperator}.
	 * @param ctx the parse tree
	 */
	void enterMultiplicativeoperator(experimentParser.MultiplicativeoperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#multiplicativeoperator}.
	 * @param ctx the parse tree
	 */
	void exitMultiplicativeoperator(experimentParser.MultiplicativeoperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#signedFactor}.
	 * @param ctx the parse tree
	 */
	void enterSignedFactor(experimentParser.SignedFactorContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#signedFactor}.
	 * @param ctx the parse tree
	 */
	void exitSignedFactor(experimentParser.SignedFactorContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactor(experimentParser.FactorContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactor(experimentParser.FactorContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#unsignedConstant}.
	 * @param ctx the parse tree
	 */
	void enterUnsignedConstant(experimentParser.UnsignedConstantContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#unsignedConstant}.
	 * @param ctx the parse tree
	 */
	void exitUnsignedConstant(experimentParser.UnsignedConstantContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#functionDesignator}.
	 * @param ctx the parse tree
	 */
	void enterFunctionDesignator(experimentParser.FunctionDesignatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#functionDesignator}.
	 * @param ctx the parse tree
	 */
	void exitFunctionDesignator(experimentParser.FunctionDesignatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void enterParameterList(experimentParser.ParameterListContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void exitParameterList(experimentParser.ParameterListContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#set_}.
	 * @param ctx the parse tree
	 */
	void enterSet_(experimentParser.Set_Context ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#set_}.
	 * @param ctx the parse tree
	 */
	void exitSet_(experimentParser.Set_Context ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#elementList}.
	 * @param ctx the parse tree
	 */
	void enterElementList(experimentParser.ElementListContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#elementList}.
	 * @param ctx the parse tree
	 */
	void exitElementList(experimentParser.ElementListContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#element}.
	 * @param ctx the parse tree
	 */
	void enterElement(experimentParser.ElementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#element}.
	 * @param ctx the parse tree
	 */
	void exitElement(experimentParser.ElementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#procedureStatement}.
	 * @param ctx the parse tree
	 */
	void enterProcedureStatement(experimentParser.ProcedureStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#procedureStatement}.
	 * @param ctx the parse tree
	 */
	void exitProcedureStatement(experimentParser.ProcedureStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#actualParameter}.
	 * @param ctx the parse tree
	 */
	void enterActualParameter(experimentParser.ActualParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#actualParameter}.
	 * @param ctx the parse tree
	 */
	void exitActualParameter(experimentParser.ActualParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#parameterwidth}.
	 * @param ctx the parse tree
	 */
	void enterParameterwidth(experimentParser.ParameterwidthContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#parameterwidth}.
	 * @param ctx the parse tree
	 */
	void exitParameterwidth(experimentParser.ParameterwidthContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#gotoStatement}.
	 * @param ctx the parse tree
	 */
	void enterGotoStatement(experimentParser.GotoStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#gotoStatement}.
	 * @param ctx the parse tree
	 */
	void exitGotoStatement(experimentParser.GotoStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#emptyStatement_}.
	 * @param ctx the parse tree
	 */
	void enterEmptyStatement_(experimentParser.EmptyStatement_Context ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#emptyStatement_}.
	 * @param ctx the parse tree
	 */
	void exitEmptyStatement_(experimentParser.EmptyStatement_Context ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#empty_}.
	 * @param ctx the parse tree
	 */
	void enterEmpty_(experimentParser.Empty_Context ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#empty_}.
	 * @param ctx the parse tree
	 */
	void exitEmpty_(experimentParser.Empty_Context ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#structuredStatement}.
	 * @param ctx the parse tree
	 */
	void enterStructuredStatement(experimentParser.StructuredStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#structuredStatement}.
	 * @param ctx the parse tree
	 */
	void exitStructuredStatement(experimentParser.StructuredStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#compoundStatement}.
	 * @param ctx the parse tree
	 */
	void enterCompoundStatement(experimentParser.CompoundStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#compoundStatement}.
	 * @param ctx the parse tree
	 */
	void exitCompoundStatement(experimentParser.CompoundStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#statements}.
	 * @param ctx the parse tree
	 */
	void enterStatements(experimentParser.StatementsContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#statements}.
	 * @param ctx the parse tree
	 */
	void exitStatements(experimentParser.StatementsContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#conditionalStatement}.
	 * @param ctx the parse tree
	 */
	void enterConditionalStatement(experimentParser.ConditionalStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#conditionalStatement}.
	 * @param ctx the parse tree
	 */
	void exitConditionalStatement(experimentParser.ConditionalStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void enterIfStatement(experimentParser.IfStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void exitIfStatement(experimentParser.IfStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#caseStatement}.
	 * @param ctx the parse tree
	 */
	void enterCaseStatement(experimentParser.CaseStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#caseStatement}.
	 * @param ctx the parse tree
	 */
	void exitCaseStatement(experimentParser.CaseStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#caseListElement}.
	 * @param ctx the parse tree
	 */
	void enterCaseListElement(experimentParser.CaseListElementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#caseListElement}.
	 * @param ctx the parse tree
	 */
	void exitCaseListElement(experimentParser.CaseListElementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#repetetiveStatement}.
	 * @param ctx the parse tree
	 */
	void enterRepetetiveStatement(experimentParser.RepetetiveStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#repetetiveStatement}.
	 * @param ctx the parse tree
	 */
	void exitRepetetiveStatement(experimentParser.RepetetiveStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#whileStatement}.
	 * @param ctx the parse tree
	 */
	void enterWhileStatement(experimentParser.WhileStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#whileStatement}.
	 * @param ctx the parse tree
	 */
	void exitWhileStatement(experimentParser.WhileStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#repeatStatement}.
	 * @param ctx the parse tree
	 */
	void enterRepeatStatement(experimentParser.RepeatStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#repeatStatement}.
	 * @param ctx the parse tree
	 */
	void exitRepeatStatement(experimentParser.RepeatStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#forStatement}.
	 * @param ctx the parse tree
	 */
	void enterForStatement(experimentParser.ForStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#forStatement}.
	 * @param ctx the parse tree
	 */
	void exitForStatement(experimentParser.ForStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#forList}.
	 * @param ctx the parse tree
	 */
	void enterForList(experimentParser.ForListContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#forList}.
	 * @param ctx the parse tree
	 */
	void exitForList(experimentParser.ForListContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#initialValue}.
	 * @param ctx the parse tree
	 */
	void enterInitialValue(experimentParser.InitialValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#initialValue}.
	 * @param ctx the parse tree
	 */
	void exitInitialValue(experimentParser.InitialValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#finalValue}.
	 * @param ctx the parse tree
	 */
	void enterFinalValue(experimentParser.FinalValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#finalValue}.
	 * @param ctx the parse tree
	 */
	void exitFinalValue(experimentParser.FinalValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#withStatement}.
	 * @param ctx the parse tree
	 */
	void enterWithStatement(experimentParser.WithStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#withStatement}.
	 * @param ctx the parse tree
	 */
	void exitWithStatement(experimentParser.WithStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link experimentParser#recordVariableList}.
	 * @param ctx the parse tree
	 */
	void enterRecordVariableList(experimentParser.RecordVariableListContext ctx);
	/**
	 * Exit a parse tree produced by {@link experimentParser#recordVariableList}.
	 * @param ctx the parse tree
	 */
	void exitRecordVariableList(experimentParser.RecordVariableListContext ctx);
}