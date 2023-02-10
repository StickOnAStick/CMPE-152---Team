#ifndef SCANNER_H
#define SCANNER_H

#include "token.h"
#include <fstream>

class Scanner
{
public:
    Scanner();
    ~Scanner();
    Token nextToken();
    char nextChar();
private:
    std::ifstream input;
};

#endif