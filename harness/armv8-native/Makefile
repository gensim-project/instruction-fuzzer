CXX=aarch64-linux-gnu-g++
AS=aarch64-linux-gnu-g++
CC=aarch64-linux-gnu-gcc
LD=aarch64-linux-gnu-ld

CXXFLAGS=-std=c++11 -g -I$(PWD) -O2  -MMF
CFLAGS=-std=gnu11 -g -O2 -Werror=implicit-function-declaration
LDFLAGS=-static

sources = harness.o test_fn.o semihosting.o semihosting_call.o reset.o arch.o vectors.o exception.o main.o heap.o printf/vsnprintf.o test.o
objects = $(sources:%=build/%)

all : harness

clean : 
	rm -fr build/ harness

build/%.o : %.c
	mkdir -p `dirname $@`
	$(CC) $(CFLAGS) -c $^ -o $@ 

build/%.o : %.S
	mkdir -p `dirname $@`	
	$(CC) $(CFLAGS) -c $^ -o $@ 

harness : $(objects)
	$(LD) $(LDFLAGS) --whole-archive $(objects) --no-whole-archive -T sys.ld -nostdlib -o $@ 

-include $(objects:.o=.d)
