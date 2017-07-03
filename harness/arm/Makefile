PREFIX?=arm-unknown-linux-gnueabi-
CXX=$(PREFIX)g++
CXXFLAGS=-I../ -std=c++11 -static

LD=$(PREFIX)g++ -static
LDFLAGS=-static

CC=$(PREFIX)g++ -static
CFLAGS=-static

harness : main.o harness.o test_fn.o
	$(LD) $(LDFLAGS) $^ -o $@

main.o : ../main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
