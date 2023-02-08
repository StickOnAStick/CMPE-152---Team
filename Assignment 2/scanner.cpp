#include <iostream>
#include <fstream>
#include "scanner.h"
#include "token.h"

Scanner::Scanner()
{
    input.open("testfile.txt");
}
Scanner::~Scanner()
{
    input.close();
}

Token Scanner::nextToken()
{
    char ch;
    Token token;
    input >> ch;

    switch(ch)
    {
        case '+':
            token.type = PLUS;
            token.value = ch;
            break;
        case '-':
            token.type = MINUS;
            token.value = ch;
            break;
        default:
            token.type = UNK;
            token.value = ch;
            break;
    }
    return token;
}