CXXFLAGS:=-std=c++11 -Wall -g  -I../../inc/ -fPIC $(CXXFLAGS)

GENERATOR_OBJECTS=main.o
GENERATOR_BINARY=generator

$(GENERATOR_BINARY) : ../templates/libfuzzer-templates.a ../assembly/libfuzzer-assembly.a $(GENERATOR_OBJECTS)
	$(CXX) $(LDFLAGS)  -o $@ -Wl,--whole-archive $(GENERATOR_OBJECTS) ../templates/libfuzzer-templates.a ../assembly/libfuzzer-assembly.a -Wl,--no-whole-archive

clean:
	rm -f $(GENERATOR_BINARY) $(GENERATOR_OBJECTS)
