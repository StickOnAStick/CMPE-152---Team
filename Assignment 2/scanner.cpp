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