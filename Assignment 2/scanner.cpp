#include <iostream>
#include <fstream>
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
    char ch;
    Token token;
    input >> ch;

    if (!input.good())
    {
        token.type = END_OF_FILE;
        token.value = '\0';
        return token;
    }

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