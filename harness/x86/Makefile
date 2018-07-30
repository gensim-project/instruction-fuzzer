CXX=x86_64-unknown-linux-uclibc-g++
CXXFLAGS=-I../ -std=c++11 -static -O0 -g

LD=x86_64-unknown-linux-uclibc-g++ -static
LDFLAGS=-static

CC=x86_64-unknown-linux-uclibc-g++ -static -g
CFLAGS=-static

harness : main.o harness.o test_fn.o
	$(LD) $(LDFLAGS) $^ -o $@

main.o : ../main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f main.o harness.o test_fn.o harness
