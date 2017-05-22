harness := ../harness/arm/harness
generator := ../generator/generator
as := aarch64-linux-gnu-as 
objcopy := aarch64-linux-gnu-objcopy

gensim-root := /home/harry/Work/gensim
qemu := qemu-system-aarch64 -M virt -cpu cortex-a53 -m 512 -nographic -semihosting
model := $(gensim-root)/arm_v5_dynamic/output_blockjit/armv5e.dll
arcsim-bin := $(gensim-root)/arcsim/bin/arcsim
arcsim := $(arcsim-bin) -p $(model) -s armv5e -m arm-user -l contiguous --mode interp --aggressive-code-invalidation

test-count := 1

formats := adc add and asr sbfm

binaries := $(formats:%=%.bin)
listings := $(formats:%=%.S)
objects  := $(formats:%=%.o)

results-qemu := $(formats:%=results/%.qemu)
results-arcsim := $(formats:%=results/%.arcsim)

qemu-results : $(results-qemu)

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
	-$(qemu) -kernel ../harness/armv8-native/harness -append $*.bin 2> $@

results/%.arcsim : %.bin $(arcsim-bin) $(model)
	mkdir -p results
	-$(arcsim) -e $(harness) -- $*.bin $(test-count) > $@

%.S : %.templates $(generator)
	$(generator) armv8 $^ > $@

%.o : %.S
	$(as) $^ -o $@

%.bin : %.o
	$(objcopy) -O binary $^ $@

$(generator) : 
	make -C ../generator


