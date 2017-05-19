CXXFLAGS=-std=c++11 -Wall -O0 -g 

GENERATOR_OBJECTS=main.o AssemblyTarget.o TemplateParser.o Template.o targets/ARMAssemblyTarget.o targets/ThumbAssemblyTarget.o targets/ARMv8AssemblyTarget.o
GENERATOR_BINARY=generator

$(GENERATOR_BINARY) : $(GENERATOR_OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ -Wl,--whole-archive $^ -Wl,--no-whole-archive

clean:
	rm -f $(GENERATOR_BINARY) $(GENERATOR_OBJECTS)
