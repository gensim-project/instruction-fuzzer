CXXFLAGS=-std=c++11 -Wall -O0 -g -fPIC -I../../inc

LIB_OBJECTS=AssemblyTarget.o targets/ARMAssemblyTarget.o targets/ARMv8AssemblyTarget.o targets/RISCVAssemblyTarget.o targets/ThumbAssemblyTarget.o targets/X86AssemblyTarget.o
LIB=libfuzzer-assembly.a

$(LIB) : $(LIB_OBJECTS)
	ar rcs $@ $^

clean:
	rm -f $(LIB) $(LIB_OBJECTS)
