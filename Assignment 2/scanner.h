#include <iostream>
#include <stdio.h>
#include <unordered_map>
#include <string>
#ifndef Scanner_H
#define Scanner_H

class Scanner {
    private:
        std::unordered_map<std::string, std::string> tokenMap = {
            {"and", "AND"},
            {"array", "ARRAY"},
            {"asm", "ASM"},
            {"begin", "BEGIN"},
            {"break", "BREAK"},
            {"case", "CASE"},
            {"const", "CONST"},
            {"constructor", "CONSTRUCTOR"},
            {"continue", "CONTINUE"},
            {"destructor", "DESTRUCTOR"},
            {"div", "DIV"},
            {"do", "DO"},
            {"downto", "DOWNTO"},
            {"else", "ELSE"},
            {"end", "END"},
            {"FALSE", "FALSE"},
            {"file", "FILE"},
            {"for", "FOR"},
            {"function", "FUNCTION"},
            {"goto", "GOTO"},
            {"if", "IF"},
            {"implementation", "IMPLEMENTATION"},
            {"in", "IN"},
            {"inline", "INLINE"},
            {"interface", "INTERFACE"},
            {"label", "LABEL"},
            {"mod", "MOD"},
            {"nil", "NIL"},
            {"not", "NOT"},
            {"object", "OBJECT"},
            {"of", "OF"},
            {"on", "ON"},
            {"operator", "OPERATOR"},
            {"or", "OR"},
            {"packed", "PACKED"},
            {"procedure", "PROCEDURE"},
            {"program", "PROGRAM"},
            {"record", "RECORD"},
            {"repeat", "REPEAT"},
            {"set", "SET"},
            {"shl", "SHL"},
            {"shr", "SHR"},
            {"string", "STRING"},
            {"then", "THEN"},
            {"to", "TO"},
            {"TRUE", "TRUE"},
            {"type", "TYPE"},
            {"unit", "UNIT"},
            {"until", "UNTIL"},
            {"uses", "USES"},
            {"var", "VAR"},
            {"while", "WHILE"},
            {"with", "WITH"},
            {"xor", "XOR"},
            {"(integer)", "INTEGER"},
            {"(real number)", "REAL"},
            {"(identifier)", "INDENTIFIER"},
            {"+", "PLUSOP"},
            {"-", "MINUSOP"},
            {"*", "MULTOP"},
            {"/", "DIVOP"},
            {":=", "ASSIGN"},
            {"=", "EQUAL"},
            {"<>", "NE"},
            {"<=", "LTEQ"},
            {">=", "GTEQ"},
            {"<", "LT"},
            {">", "GT"},
            {"+=", "PLUSEQUAL"},
            {"-=", "MINUSEQUAL"},
            {"*=", "MULTEQUAL"},
            {"/=", "DIVEQUAL"},
            {"^", "CARAT"},
            {";", "SEMICOLOR"},
            {",", "COMMA"},
            {"(", "LPAREN"},
            {")", "RPAREN"},
            {"[", "LBRACKET"},
            {"]", "RBRACKET"},
            {"{", "LBRACE"},
            {"}", "RBRACE"},
            {"(*", "LCOMMENT"},
            {"*)", "RCOMMENT"}
        };
        std::string toLower(std::string &input);
    public:
        Scanner();
        ~Scanner();
        std::string nextToken (std::string token);
};

#endif