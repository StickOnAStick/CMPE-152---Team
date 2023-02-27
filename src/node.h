/*
 * node.h
 *
 *  Created on: Feb 26, 2023
 *      Author: dhruv
 */

#ifndef NODE_H_
#define NODE_H_



#pragma once

#include <string>
#include <vector>

enum nodeTypes{
  if_statement,
  expression,
  statement,
  variable,
  factor,
  term,
  simpleExpression,
  unsignedConstant,
  unsignedInteger,
  unsignedReal,
  unsignedNumber,
  nil,
  string,
  multiplyingOperator,
  addingOperator,
  relationalOperator,
  sign,
  unlabelledStatement,
  assignmentStatement,
  simpleStatement,
  gotoStatement,
  label,
  compoundStatement,
  structuredStatement,
  conditionalStatement,
  whileStatement,
  repetitiveStatement,
  repeatStatement,
  forStatement,
  forList,
  controlVariable,
  initialValue,
  finalValue,
  program,
  labelList,
  caseListElement,
  caseStatement,
  withStatement,
  add,
};

static std::string nodeNames[] = {
  "if_statement",
  "expression",
  "statement",
  "variable",
  "factor",
  "term",
  "simpleExpression",
  "unsignedConstant",
  "unsignedInteger",
  "unsignedReal",
  "unsignedNumber",
  "nil",
  "string",
  "multiplyingOperator",
  "addingOperator",
  "relationalOperator",
  "sign",
  "unlabelledStatement",
  "assignmentStatement",
  "simpleStatement",
  "gotoStatement",
  "label",
  "compoundStatement",
  "structuredStatement",
  "conditionalStatement",
  "whileStatement",
  "repetitiveStatement",
  "repeatStatement",
  "forStatement",
  "forList",
  "controlVariable",
  "initialValue",
  "finalValue",
  "program",
  "labelList",
  "caseListElement",
  "caseStatement",
  "withStatement",
  "add"
};

class node{
  public:
    node(nodeTypes);
    node(nodeTypes, int);
    node(nodeTypes, std::string, int);
    node(nodeTypes, std::string);
    node(nodeTypes, void*, int);
    node(nodeTypes, void*);
    nodeTypes type();
    void attachChild(node*);
    std::string id;
    void* value;
    void printTree(int level = 0);
    void printFile(int level = 0);
    int retLn(){
      return lnum;
    }
    void setLn(int a){
      lnum = a;
    }
  private:
    nodeTypes mytype;
    std::vector<node*> children;
    int lnum;
};


#endif /* NODE_H_ */
