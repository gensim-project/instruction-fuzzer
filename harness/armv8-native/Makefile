PFX=aarch64-unknown-linux-gnueabi-
CXX=$(PFX)g++
AS=$(PFX)gcc
CC=$(PFX)gcc
LD=$(PFX)ld

CXXFLAGS=-std=c++11 -g -I$(PWD) -O2  -MMF -mgeneral-regs-only
CFLAGS=-std=gnu11 -g -O2 -Werror=implicit-function-declaration -mgeneral-regs-only
LDFLAGS=-static

sources = harness.o semihosting.o semihosting_call.o reset.o arch.o vectors.o exception.o main.o heap.o printf/vsnprintf.o test.o
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
