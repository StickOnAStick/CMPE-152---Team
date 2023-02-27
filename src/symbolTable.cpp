/*
 * symbolTable.cpp
 *
 *  Created on: Feb 26, 2023
 *      Author: dhruv
 */
#include "symbolTable.h"
#include <iostream>

void symbolTable::updateTable(std::string variableName) {
  for (int i = 0; i < data.size(); i++) {
    if (data[i] == variableName) {
      return;
    }
  }
  data.push_back(variableName);
}

void symbolTable::printTable() {
  std::cout << "\nPrinting Symbol Table" << std::endl;
  for (int i = 0; i < data.size(); i++) {
    std::cout << "|\t" << data[i] << std::endl;
  }
}


