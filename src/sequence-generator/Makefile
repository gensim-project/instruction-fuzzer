CXXFLAGS=-std=c++11 -Wall -O0 -g  -I../../inc/ -fPIC

GENERATOR_OBJECTS=main.o
GENERATOR_BINARY=sequence-generator

$(GENERATOR_BINARY) : ../templates/libfuzzer-templates.so $(GENERATOR_OBJECTS)
	$(CXX) $(LDFLAGS)  -o $@ -Wl,--whole-archive $(GENERATOR_OBJECTS) ../assembly/libfuzzer-assembly.a -Wl,--no-whole-archive ../templates/libfuzzer-templates.a 

clean:
	rm -f $(GENERATOR_BINARY) $(GENERATOR_OBJECTS)
