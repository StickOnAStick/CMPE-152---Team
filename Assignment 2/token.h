#ifndef TOKEN_H
#define TOKEN_H

#include <string>

enum TokenType
{
    PLUS,
    MINUS,
    UNK,
    END_OF_FILE
};

struct Token
{
    TokenType type;
    std::string value;
};

#endif