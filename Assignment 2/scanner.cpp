#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <string>
#include <unordered_map>
#include "scanner.h"
#include "token.h"

Scanner::Scanner()
{
    input.open("testfile.txt");
    if (!input.is_open())
    {
        std::cerr << "Error Opening File." << std::endl;
        exit(1);
    }
}
Scanner::~Scanner()
{
    input.close();
}

Token Scanner::nextToken()
{
    Token token;
    std::string str;
    char c;

    if (input.eof())
    {
        return Token {END_OF_FILE, ""};
    }


    while (input.get(c)) 
    {
        if (isspace(c) || c == ';' || c == ',' || c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}')
        {
            if (c == ';')
            {
                return {SEMICOLON, ";"};
                break;
            }else if (c == ',')
            {
                return {COMMA, ","};
                break;
            }// KEEP ADDING ON
            else{
                break;
            }
        }
        str += c;
    }

    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    static const std::unordered_map<std::string, TokenType> map =
    {
        {"and", AND},
        {"array", ARRAY},
        {"asm", ASM},
        {"begin", BEGIN},
        {"break", BREAK},
        {"case", CASE},
        {"const", CONST},
        {"constructor", CONSTRUCTOR},
        {"continue", CONTINUE},
        {"destructor", DESTRUCTOR},
        {"div", DIV},
        {"do", DO},
        {"downto", DOWNTO},
        {"else", ELSE},
        {"end", END},
        {"false", FALSE},
        {"file", FFILE},
        {"for", FOR},
        {"function", FUNCTION},
        {"goto", GOTO},
        {"if", IF},
        {"implementation", IMPLEMENTATION},
        {"in", IN},
        {"inline", INLINE},
        {"interface", INTERFACE},
        {"label", LABEL},
        {"mod", MOD},
        {"nil", NIL},
        {"not", NOT},
        {"object", OBJECT},
        {"of", OF},
        {"on", ON},
        {"operator", OPERATOR},
        {"or", OR},
        {"packed", PACKED},
        {"procedure", PROCEDURE},
        {"program", PROGRAM},
        {"record", RECORD},
        {"repeat", REPEAT},
        {"set", SET},
        {"shl", SHL},
        {"shr", SHR},
        {"string", STRING},
        {"then", THEN},
        {"to", TO},
        {"true", TRUE},
        {"type", TYPE},
        {"unit", UNIT},
        {"until", UNTIL},
        {"uses", USES},
        {"var", VAR},
        {"while", WHILE},
        {"with", WITH},
        {"xor", XOR}  
    };

    if (input.eof())
    {
        return Token {END_OF_FILE, ""};
    }

    auto it = map.find(str);
    if (it != map.end())
    {
        return {it->second, str};
    }else
    {
        return {IDENTIFIER, str};
    }
}