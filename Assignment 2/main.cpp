#include <iostream>
#include <fstream>
#include "scanner.h"

int main () {
    
    Scanner scanner;
    std::ofstream output("output.txt");

    std::cout << "Enter a token" << std::endl;
    std::string input;
    std::cin >> input;

    std::string outputToken = scanner.nextToken(input);
    std::cout << outputToken << std::endl;


    return 0;
}