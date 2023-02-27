/*
 * symbolTable.h
 *
 *  Created on: Feb 26, 2023
 *      Author: dhruv
 */



#pragma once

#include <string>
#include <vector>

class symbolTable{
  public:
    void updateTable(std::string variableName);
    void printTable();
  private:
    std::vector<std::string> data;
};

