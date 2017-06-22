CXXFLAGS=-std=c++11 -g -I$(PWD) -O2
LDFLAGS=-static

arches := arm thumb2 arm-mem arm-vfp armv8-native # thumb2-it thumb2-vfp thumb2-mem
harnesses := $(arches:%=%/harness)

arm-cxx := arm-unknown-linux-gnueabi-g++
arm-cxx-flags := -march=armv7-a $(CXXFLAGS)
arm-ld-flags := $(LDFLAGS)

arm-vfp-cxx := arm-unknown-linux-gnueabi-g++
arm-vfp-cxx-flags := -march=armv7-a $(CXXFLAGS)
arm-vfp-ld-flags := $(LDFLAGS)

arm-mem-cxx := arm-unknown-linux-gnueabi-g++
arm-mem-cxx-flags := -march=armv7-a $(CXXFLAGS)
arm-mem-ld-flags := $(LDFLAGS)

thumb2-cxx := arm-unknown-linux-gnueabi-g++
thumb2-cxx-flags := -march=armv7-a -mthumb-interwork $(CXXFLAGS)
thumb2-ld-flags := -mthumb-interwork -Wl,--use-blx $(LDFLAGS)

thumb2-it-cxx := arm-unknown-linux-gnueabi-g++
thumb2-it-cxx-flags := -march=armv7-a -mthumb-interwork $(CXXFLAGS)
thumb2-it-ld-flags := -mthumb-interwork -Wl,--use-blx $(LDFLAGS)

thumb2-vfp-cxx := arm-unknown-linux-gnueabi-g++
thumb2-vfp-cxx-flags := -march=armv7-a -mthumb-interwork $(CXXFLAGS)
thumb2-vfp-ld-flags := -mthumb-interwork -Wl,--use-blx $(LDFLAGS)

thumb2-mem-cxx := arm-unknown-linux-gnueabi-g++
thumb2-mem-cxx-flags := -march=armv7-a -mthumb-interwork $(CXXFLAGS)
thumb2-mem-ld-flags := -mthumb-interwork -Wl,--use-blx $(LDFLAGS)

all : $(harnesses)
.phony : $(harnesses)

clean : 
	make $(arches:%=clean-%)

clean-%:
	rm -f $*/main.o $*/harness.o $*/harness

%/main.o : main.cpp
	$($*-cxx) $($*-cxx-flags) -c main.cpp -o $@

%/harness.o : %/harness.cpp
	$($*-cxx) $($*-cxx-flags) -c $*/harness.cpp -o $@

%/test_fn.o : %/test_fn.S
	$($*-cxx) $($*-cxx-flags) -c $*/test_fn.S -o $@

%/harness : 
	make -C $*

