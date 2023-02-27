/*
 * lexbuffer.h
 *
 *  Created on: Feb 26, 2023
 *      Author: dhruv
 */

#ifndef LEXBUFFER_H_
#define LEXBUFFER_H_

#pragma once
#include <istream>
#include <vector>

class lexbuffer {
private:
  std::vector<char> buffer;
  std::istream &instream;
  // std::ifstream codefile;
  int BufferRead = 0;

public:
  lexbuffer(std::istream &stream);
  char nextChar();
  void retract(unsigned int retractAmount = 1);
  void fail();
  void clearcache();
  std::string getlexeme();
  int lineNumber = 1;
};



#endif /* LEXBUFFER_H_ */
