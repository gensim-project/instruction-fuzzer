
HARNESS_ARCHS=$(shell ls -d harness/*/)
HARNESSES=$(HARNESS_ARCHS:%=%/harness)

all: generator/generator $(HARNESSES)

clean :
	make -C generator clean
	make -C harness clean

generator/generator :
	+ cd generator; make
	
harness/%/harness : 
	+ cd harness; make
