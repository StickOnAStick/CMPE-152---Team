all: parser

parser: lexbuffer.cpp node.cpp parser.cpp symboltable.cpp tokenizer.cpp tokenstream.cpp
	g++ -o parser lexbuffer.cpp node.cpp parser.cpp symboltable.cpp tokenizer.cpp tokenstream.cpp

run: parser
	./parser

clean:
	rm -f parser

.PHONY: all clean