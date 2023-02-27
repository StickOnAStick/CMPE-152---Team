#include "lexbuffer.h"
#include <iostream>

lexbuffer::lexbuffer(std::istream &stream):instream(stream),lineNumber(1) {

}

char lexbuffer::nextChar(){
  if (BufferRead){
    if (buffer[buffer.size()-BufferRead] == '\n'){
      lineNumber++;
            //std::cout << "NewLine----" << std::endl;

    }
    return buffer[buffer.size()-BufferRead--];
  }
  if (instream){
    buffer.push_back(instream.get());
    if (buffer.back() == '\n'){
      //std::cout << "NewLine----" << std::endl;
      lineNumber++;
    }
    return buffer.back();
  }
  return -1;
}

void lexbuffer::fail(){
  BufferRead = buffer.size();
  for (int i = buffer.size()-BufferRead; i < buffer.size(); i++){
    if (buffer[i] == '\n'){
      lineNumber--;
    }
  }
}

void lexbuffer::retract(unsigned int retractAmount){
  BufferRead = retractAmount;
  for (int i = buffer.size()-BufferRead; i < buffer.size(); i++){
    if (buffer[i] == '\n'){
      lineNumber--;
    }
  }
}


void lexbuffer::clearcache(){
  buffer.clear();
}

std::string lexbuffer::getlexeme(){
  std::string s;
  for (int i = 0; i < buffer.size()-BufferRead;i++){
    s.push_back(toupper(buffer[i]));
  }
  buffer.erase(buffer.begin(),buffer.end()-BufferRead);
  return s;
}
