#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <sstream>
#include "scanner.h"
#include "token.h"

Scanner::Scanner()
{
    input.open("test-in.txt");
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

    std::stringstream iss;
    iss << input.rdbuf(); //Convert iss to stringstream
    std::cout << "Iss is: " << iss.eof() << std::endl;
    if(iss.eof()){
        
        return {END_OF_FILE, "END_OF_FILE"};
    }

    std::string istring = iss.str(); //heinious crimes against humanity  
    std::transform(istring.begin(), istring.end(), istring.begin(), ::tolower);
    iss.str(istring); //Get back the input string stream in lowercase. 
    
    
    static const std::unordered_map<std::string, TokenType> map = //Terrible crimes against memory
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
        {"xor", XOR},
        {"+", PLUSOP},
        {"-", MINUSOP},
        {"*", MULTOP},
        {"/", DIVOP},
        {":=", ASSIGN},
        {"=", EQUAL},
        {"<>", NE},
        {"<=", LTEQ},
        {">=", GTEQ},
        {"<", LT},
        {">", GT},
        {"+=", PLUSEQUAL},
        {"-=", MINUSEQUAL},
        {"*=", MULTEQUAL},
        {"/=", DIVEQUAL},
        {"^", CARAT},
        {";", SEMICOLON},
        {",", COMMA},
        {"(", LPAREN},
        {")", RPAREN},
        {"[", LBRACKET},
        {"]", RBRACKET},
        {"{", LBRACE},
        {"}", RBRACE},
        {"(*", LCOMMENT},
        {"*)", RCOMMENT}
    };

    std::string word;
    while(iss >> word){
        std::cout << "Inside while" << std::endl;
         // Check if word is an integer
        if (std::isdigit(word[0])) {
        int num = std::stoi(word);
        std::cout << "Integer: " << word << std::endl;
        return {INTEGER, word};
        }
        // Check if word is a variable or keyword
        else if (std::isalpha(word[0])) {
            // Look for any trailing punctuation characters and separate them into their own tokens
            std::string::size_type pos = word.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
            while (pos != std::string::npos) {
                std::string punct = word.substr(pos, 1);
                if (punct == "[" || punct == "]" || punct == ",") {
                    auto mapVal = map.find(punct);
                    std::cout << "Punctuation: " << punct << std::endl;
                    return {mapVal->second, punct};
                }
                else {
                    auto mapVal = map.find(punct);
                    if(mapVal != map.end()) return {mapVal->second, punct};
                    else{
                        mapVal = map.find(word.substr(0, pos));
                        return {mapVal->second, word};
                    }
                    
                std::cout << "Variable/Keyword: " << word.substr(0, pos) << std::endl;
                std::cout << "Punctuation: " << punct << std::endl;
                }
                word = word.substr(pos + 1);
                pos = word.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
            }
            std::cout << "Variable/Keyword: " << word << std::endl;
            
            }
            // Check if word is a punctuation mark
            else if (std::ispunct(word[0])) {
            std::cout << "Punctuation: " << word << std::endl;
            auto mapVal = map.find(word);
            return {mapVal->second, word};
            }
            // Otherwise, assume word is a string literal
            else {
                std::cout << "String Literal: " << word << std::endl;
                auto mapVal = map.find(word);
                if(mapVal != map.end()) return {mapVal->second, word};
                else if(mapVal == map.end()) return {IDENTIFIER, word};
            
            }
        }
    return {END_OF_FILE, "END_OF_FILE"};

}