ARMCCPREFIX?=arm-unknown-linux-gnueabi-
CXX=$(ARMCCPREFIX)g++
CXXFLAGS=-I../ -std=c++11 -static -O2

LD=$(ARMCCPREFIX)g++ -static
LDFLAGS=-static

CC=$(ARMCCPREFIX)g++ -static
CFLAGS=-static

harness : main.o harness.o test_fn.o
	$(LD) $(LDFLAGS) $^ -o $@

main.o : ../main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f main.o harness.o test_fn.o harness
