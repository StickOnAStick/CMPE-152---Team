#include <iostream>
#include <fstream>
#include "scanner.h"
#include "token.h"

Scanner::Scanner()
{
    input.open("testfile.txt");
    if (!input.is_open())
    {
        std::cerr << "Error Opening File." << std::endl;
        exit(1);
    }
}
Scanner::~Scanner()
{
    input.close();
}

char next_char()
{
    char ch;
    std::cin.get(ch);
    return ch;
}

Token Scanner::nextToken()
{
    char ch;
    Token token;
    input >> ch;

    if (!input.good())
    {
        token.type = END_OF_FILE;
        token.value = '\0';
        return token;
    }

    switch(ch)
    {
        case ':':
            if (next_char() == '=')
            {
                token.type = ASSIGN;
                token.value = ":=";
            }
            else
            {
                token.type = UNK;
                token.value = ch;
            }
            break;
        case '=':
            token.type = EQUAL;
            token.value = ch;
            break;
        case '<':
            if (next_char() == '>')
            {
                token.type = NE;
                token.value = "<>";
            }
            else if (next_char() == '=')
            {
                token.type = LTEQ;
                token.value = "<=";
            }
            else
            {
                token.type = LT;
                token.value = ch;
            }
            break;
        case '>':
            if (next_char() == '=')
            {
                token.type = GTEQ;
                token.value = ">=";
            }
            else
            {
                token.type = GT;
                token.value = ch;
            }
            break;
        case '+':
            if (next_char() == '=')
            {
                token.type = PLUSEQUAL;
                token.value = "+=";
            }
            else
            {
                token.type = PLUSOP;
                token.value = ch;
            }
            break;
        case '-':
            if (next_char() == '=')
            {
                token.type = MINUSEQUAL;
                token.value = "-=";
            }
            else
            {
                token.type = MINUSOP;
                token.value = ch;
            }
            break;
        case '*':
            if (next_char() == '=')
            {
                token.type = MULTEQUAL;
                token.value = "*=";
            }
            else
            {
                token.type = MULTOP;
                token.value = ch;
            }
            break;
        case '/':
            if (next_char() == '=')
            {
                token.type = DIVEQUAL;
                token.value = "/=";
            }
            else
            {
                token.type = DIVOP;
                token.value = ch;
            }
            break;
        case '^':
            token.type = CARAT;
            token.value = ch;
            break;
        case ';':
            token.type = SEMICOLON;
            token.value = ch;
            break;
        case ',':
            token.type = COMMA;
            token.value = ch;
            break;
        case '(':
            token.type = LPAREN;
            token.value = ch;
            break;
        case ')':
            token.type = RPAREN;
            token.value = ch;
            break;
        case '[':
            token.type = LBRACKET;
            token.value = ch;
            break;
        case ']':
            token.type = RBRACKET;
            token.value = ch;
            break;
        case '{':
            token.type = LBRACE;
            token.value = ch;
            break;
        case '}':
            token.type = RBRACE;
            token.value = ch;
            break;
        case '(*':
            token.type = LCOMMENT;
            token.value = ch;
            break;
        case '*)':
            token.type = RCOMMENT;
            token.value = ch;
            break;
        default:
            token.type = UNK;
            token.value = ch;
            break;
    }
    return token;
}