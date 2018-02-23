CXXFLAGS=-std=c++11 -Wall -O0 -g -fPIC -I../../inc

LIB_OBJECTS=TemplateParser.o Template.o
GRAMMAR_SOURCES=fuzzer-syntax.l.cpp fuzzer-syntax.l.h fuzzer-syntax.tabs.h fuzzer-syntax.y.cpp
GRAMMAR_OBJECTS= fuzzer-syntax.y.o fuzzer-syntax.l.o fuzzer-parser.o
LIB=libfuzzer-templates.a

$(LIB) :  $(GRAMMAR_SOURCES) $(LIB_OBJECTS) $(GRAMMAR_OBJECTS) 
	ar rcs $@ $(LIB_OBJECTS) $(GRAMMAR_OBJECTS)

clean:
	rm -f $(LIB) $(LIB_OBJECTS) $(GRAMMAR_OBJECTS) $(GRAMMAR_SOURCES)


fuzzer-syntax.y.cpp : fuzzer-syntax.ypp fuzzer-syntax.l.h
	bison -W -Wconflicts-sr -o $@ $<

fuzzer-syntax.tabs.h : fuzzer-syntax.ypp
	bison -o /dev/null $^ --defines=$@

fuzzer-syntax.l.cpp : fuzzer-syntax.lpp fuzzer-syntax.tabs.h
	flex -o $@ $< 

fuzzer-syntax.l.h : fuzzer-syntax.lpp fuzzer-syntax.tabs.h
	flex -o /dev/null --header-file=$@ $< 
