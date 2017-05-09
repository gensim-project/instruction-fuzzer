
HARNESS_ARCHS=$(shell ls -d harness/*/)
HARNESSES=$(HARNESS_ARCHS:%=%/harness)

all: 
	+ cd generator; make
	+ cd harness; make

clean :
	make -C generator clean
	make -C harness clean
