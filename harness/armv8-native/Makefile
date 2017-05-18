CXX=aarch64-linux-gnu-g++
AS=aarch64-linux-gnu-g++
CC=aarch64-linux-gnu-gcc
LD=aarch64-linux-gnu-ld

CXXFLAGS=-std=c++11 -g -I$(PWD) -O2 
CFLAGS=-std=gnu11 -g -O2
LDFLAGS=-static

objects = harness.o test_fn.o semihosting.o semihosting_call.o reset.o arch.o vectors.o exception.o main.o

all : harness

clean : 
	rm -f $(objects) harness

harness : $(objects)
	$(LD) $(LDFLAGS) --whole-archive $(objects) --no-whole-archive -T sys.ld -nostdlib -o $@ 
