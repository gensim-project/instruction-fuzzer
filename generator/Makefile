CXXFLAGS=-std=c++11 -Wall -O0 -g 

GENERATOR_OBJECTS=main.o AssemblyTarget.o TemplateParser.o Template.o targets/ARMAssemblyTarget.o targets/ThumbAssemblyTarget.o targets/ARMv8AssemblyTarget.o
GRAMMAR_SOURCES=fuzzer-syntax.l.cpp fuzzer-syntax.l.h fuzzer-syntax.tabs.h fuzzer-syntax.y.cpp
GRAMMAR_OBJECTS= fuzzer-syntax.y.o fuzzer-syntax.l.o fuzzer-parser.o
GENERATOR_BINARY=generator

$(GENERATOR_BINARY) : $(GRAMMAR_OBJECTS) $(GENERATOR_OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ -Wl,--whole-archive $^ -Wl,--no-whole-archive

clean:
	rm -f $(GENERATOR_BINARY) $(GENERATOR_OBJECTS) $(GRAMMAR_OBJECTS) $(GRAMMAR_SOURCES)


fuzzer-syntax.y.cpp : fuzzer-syntax.ypp fuzzer-syntax.l.h
	bison -W -Wconflicts-sr -o $@ $<

fuzzer-syntax.tabs.h : fuzzer-syntax.ypp
	bison -o /dev/null $^ --defines=$@

fuzzer-syntax.l.cpp : fuzzer-syntax.lpp fuzzer-syntax.tabs.h
	flex -o $@ $< 

fuzzer-syntax.l.h : fuzzer-syntax.lpp fuzzer-syntax.tabs.h
	flex -o /dev/null --header-file=$@ $< 
