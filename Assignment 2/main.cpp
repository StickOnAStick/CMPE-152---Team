#include <iostream>
#include <fstream>
#include "token.h"
#include "scanner.h"
#include "scanner.cpp"

int main()
{
    Scanner scanner;
    std::ofstream output("output.txt");
    Token token = scanner.nextToken();

    while (token.type != END_OF_FILE)
    {
        output << "Token Type: " << token.type << " | " << "Token Value: " << token.value << std::endl; 
        token = scanner.nextToken();
    }
    output.close();
    return 0;
}