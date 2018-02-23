harness := ../harness/arm/harness
generator := ../generator/generator

ARMCCPREFIX?=arm-unknown-linux-gnueabi-

as := $(ARMCCPREFIX)as -march=armv7-a -mcpu=cortex-a15
objcopy := $(ARMCCPREFIX)objcopy

GENSIM_ROOT?=/home/harry/Work/gensim-repo
gensim-root := $(GENSIM_ROOT)

QEMU?=/home/harry/Work/qemu/qemu-2.5.0/arm-linux-user/qemu-arm
qemu := $(QEMU)

model := $(gensim-root)/models/armv7/output/armv5e.dll
arcsim-bin := $(gensim-root)/archsim/bin/arcsim
arcsim := $(arcsim-bin) -p $(model) -s armv5e -m arm-user -l contiguous --mode interp --aggressive-code-invalidation



test-count := 1

formats :=  ldr ldrb ldrd ldrh ldrsb ldrsh stm str strb strd strh vld1 vldm vldr vstm vstr vst1
#formats = mov
binaries := $(formats:%=%.bin)
listings := $(formats:%=%.S)
objects  := $(formats:%=%.o)

results-qemu := $(formats:%=results/%.qemu)
results-arcsim := $(formats:%=results/%.arcsim)

results := $(results-qemu) $(results-arcsim)
result-checks := $(formats:%=result-%)

.PHONY : result-checks all $(result-checks)

all : $(results)

show-results : $(results)
	for i in $(formats); do ../check-results.sh $$i; done

clean : 
	rm -f $(binaries) $(listings) $(objects) $(results)
	rm -fr results

results/%.qemu : %.bin $(harness)
	mkdir -p results
	-$(qemu) -r 4.3.0 $(harness) $*.bin $(test-count) $@

results/%.arcsim : %.bin $(arcsim-bin) $(model)
	mkdir -p results
	-$(arcsim) -e $(harness) -- $*.bin $(test-count) $@

%.S : %.templates $(generator)
	$(generator) arm $^ > $@

%.o : %.S
	$(as) $^ -o $@

%.bin : %.o
	$(objcopy) -O binary $^ $@

dpi.S : dpi.template $(generator)
	$(generator) dpi.template > $@



$(generator) : 
	make -C ../generator


