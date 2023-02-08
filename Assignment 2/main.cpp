#include <iostream>
#include "token.h"
#include "scanner.h"

int main()
{
    Scanner scanner;
    Token token;

    while ((token = scanner.nextToken()).type != END_OF_FILE)
    {
        std::out << token.type << " " << token.value << std::endl;
    }
    return 0;
}