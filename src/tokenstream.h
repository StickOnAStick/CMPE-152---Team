/*
 * tokenstream.h
 *
 *  Created on: Feb 26, 2023
 *      Author: dhruv
 */

#ifndef TOKENSTREAM_H_
#define TOKENSTREAM_H_


#include "tokenizer.h"
#include <vector>
namespace lex {

class tokenStream {
public:
  tokenStream(std::istream &stream);
  lex::token nextToken();
  bool rewind(int amount = 1);
  lex::token fastForward(lex::tokentypes type);

private:
  int writePos = 0;
  unsigned const static int bufferSize = 16;
  lex::token buffer[bufferSize];
  int rewindAmount = 0;
  lex::tokenizer tokenMaker;

};

} // namespace lex


#endif /* TOKENSTREAM_H_ */
