harness := ../harness/thumb2-mem/harness
generator := ../generator/generator
as := arm-unknown-linux-gnueabi-as -march=armv7-a
objcopy := arm-unknown-linux-gnueabi-objcopy

gensim-root := ../../../../../
qemu := /home/harry/Work/qemu/qemu-2.5.0/arm-linux-user/qemu-arm
model := $(gensim-root)/arm_v5_dynamic/output_blockjit/armv5e.dll
arcsim-bin := $(gensim-root)/arcsim/bin/arcsim
arcsim := $(arcsim-bin) -p $(model) -s armv5e -m arm-user -l contiguous --mode interp 


test-count := 1

formats := ldm ldr ldrb ldrd ldrh ldrsb ldrsh stm str strb strd strh
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
	$(generator) thumb2 $^ > $@

%.o : %.S
	$(as) $^ -o $@

%.bin : %.o
	$(objcopy) -O binary $^ $@

dpi.S : dpi.template $(generator)
	$(generator) dpi.template > $@



$(generator) : 
	make -C ../generator


