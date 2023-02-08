#ifndef TOKEN_H
#define TOKEN_H

#include <string>

struct Token
{
    TokenType type;
    std::string value;
};

#endif