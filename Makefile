CXXFLAGS=-O2
HARNESS_ARCHS=$(shell ls -d harness/*/)
HARNESSES=$(HARNESS_ARCHS:%=%/harness)

all: 
	+ cd src; make
	+ cd harness; make

clean :
	make -C src clean
	make -C harness clean
