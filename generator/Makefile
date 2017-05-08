CXXFLAGS=-std=c++11 -Wall -O0 -g 

GENERATOR_OBJECTS=main.o AssemblyTarget.o TemplateParser.o Template.o
GENERATOR_BINARY=generator

$(GENERATOR_BINARY) : $(GENERATOR_OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(GENERATOR_BINARY) $(GENERATOR_OBJECTS)
