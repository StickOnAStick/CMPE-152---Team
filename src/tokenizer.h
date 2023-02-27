/*
 * tokenizer.h
 *
 *  Created on: Feb 26, 2023
 *      Author: dhruv
 */

#ifndef TOKENIZER_H_
#define TOKENIZER_H_



#pragma once
#include "lexbuffer.h"
#include <fstream>
#include <string>

namespace lex {

enum tokentypes {
  AND,
  ARRAY,
  ASM,
  BEGIN,
  BREAK,
  CASE,
  CONST,
  CONSTRUCTOR,
  CONTINUE,
  DESTRUCTOR,
  DIV,
  DO,
  DOWNTO,
  ELSE,
  END,
  FALSE,
  FILE,
  FOR,
  FUNCTION,
  GOTO,
  IF,
  IMPLEMENTATION,
  IN,
  INLINE,
  LABEL,
  MOD,
  NIL,
  NOT,
  OBJECT,
  OF,
  ON,
  PACKED,
  PROCEDURE,
  PROGRAM,
  RECORD,
  REPEAT,
  SET,
  SHL,
  SHR,
  STRING,
  THEN,
  TO,
  TRUE,
  TYPE,
  UNIT,
  UNTIL,
  USES,
  VAR,
  WHILE,
  WITH,
  XOR,
  INTEGER,
  REAL,
  IDENTIFIER,
  PLUSOP,
  MINUSOP,
  MULTOP,
  DIVOP,
  ASSIGN,
  EQUAL,
  NE,
  LTEQ,
  GTEQ,
  LT,
  GT,
  PLUSEQUAL,
  MINUSEQUAL,
  MULTEQUAL,
  DIVEQUAL,
  CARAT,
  SEMICOLON,
  COMMA,
  LPAREN,
  RPAREN,
  LBRACKET,
  RBRACKET,
  LBRACE,
  RBRACE,
  LCOMMENT,
  RCOMMENT,
  COMMENT,
  PERIOD,
  DOTDOT,
  COLON,
  TOKEN_ERROR,
};

//Note: first 51 words are Reserve Words
static std::string tokentype[] =  {
  "AND",
  "ARRAY",
  "ASM",
  "BEGIN",
  "BREAK",
  "CASE",
  "CONST",
  "CONSTRUCTOR",
  "CONTINUE",
  "DESTRUCTOR",
  "DIV",
  "DO",
  "DOWNTO",
  "ELSE",
  "END",
  "FALSE",
  "FILE",
  "FOR",
  "FUNCTION",
  "GOTO",
  "IF",
  "IMPLEMENTATION",
  "IN",
  "INLINE",
  "LABEL",
  "MOD",
  "NIL",
  "NOT",
  "OBJECT",
  "OF",
  "ON",
  "PACKED",
  "PROCEDURE",
  "PROGRAM",
  "RECORD",
  "REPEAT",
  "SET",
  "SHL",
  "SHR",
  "STRING",
  "THEN",
  "TO",
  "TRUE",
  "TYPE",
  "UNIT",
  "UNTIL",
  "USES",
  "VAR",
  "WHILE",
  "WITH",
  "XOR",
  "INTEGER",
  "REAL",
  "IDENTIFIER",
  "PLUSOP",
  "MINUSOP",
  "MULTOP",
  "DIVOP",
  "ASSIGN",
  "EQUAL",
  "NE",
  "LTEQ",
  "GTEQ",
  "LT",
  "GT",
  "PLUSEQUAL",
  "MINUSEQUAL",
  "MULTEQUAL",
  "DIVEQUAL",
  "CARAT",
  "SEMICOLON",
  "COMMA",
  "LPAREN",
  "RPAREN",
  "LBRACKET",
  "RBRACKET",
  "LBRACE",
  "RBRACE",
  "LCOMMENT",
  "RCOMMENT",
  "COMMENT",
  "PERIOD",
  "DOTDOT",
  "COLON",
  "TOKEN_ERROR"
};

struct token {
  int type;
  std::string lexeme;
  public:
    int ln = 0;
};

class tokenizer {
private:
  std::istream &codestream;
  lexbuffer lb;
  bool endOfStream = false;
  unsigned int state = 0;
  unsigned int start = 0;
  void fail();
  int isKeyword(std::string *word);
  int braceCount = 0;
  int bracketCount = 0;
  int parenCount = 0;
public:
  token nextToken();
  tokenizer(std::istream &stream);

};

} // namespace scan

#endif /* TOKENIZER_H_ */
