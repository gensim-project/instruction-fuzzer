harness := ../harness/armv8-native/harness
generator := ../generator/generator

ARMCCPREFIX?=aarch64-unknown-linux-gnueabi-

as := $(ARMCCPREFIX)as 
objcopy := $(ARMCCPREFIX)objcopy


QEMU ?= /disk/scratch/tspink/src/qemu/aarch64-softmmu/qemu-system-aarch64 -M virt -cpu cortex-a53 -m 512 -nographic -semihosting
qemu := $(QEMU)

CAPTIVE ?= /disk/scratch/tspink/captive/bin/captive --engine /disk/scratch/tspink/captive/arch/aarch64.arch --platform simbench --block-dev-file /tmp/zero --semihosting
captive := $(CAPTIVE)

test-count := 1

# BASE
formats := adc add and asr bfi bfm bfxil bic ccmn ccmp cinc cinv cls clz cmn cmp cneg csel cset csetm csinc csinv
formats += csneg eon eor extr lsl lsr madd mneg mov msub mul mvn neg ngc nop orn orr rbit rev ror sbc sbfiz sbfm sbfx
formats += sdiv smaddl smnegl smsubl smulh smull sub sxtbhw tst ubfiz ubfm ubfx udiv umaddl umnegl umsubl umulh umull
formats += uxtbh

# SIMD
formats += add-simd dup

binaries := $(formats:%=%.bin)
listings := $(formats:%=%.S)
objects  := $(formats:%=%.o)

results-qemu := $(formats:%=results/%.qemu)
results-captive := $(formats:%=results/%.captive)

results := $(results-qemu) $(results-captive)
result-checks := $(formats:%=result-%)

.PHONY : result-checks all $(result-checks)

all : $(results)

show-results : $(results)
	for i in $(formats); do ../check-results-captive.sh $$i; done

clean : 
	rm -f $(binaries) $(listings) $(objects) $(results)
	rm -fr results

results/%.qemu : %.bin
	mkdir -p results
	-$(qemu) -kernel $(harness) -append $*.bin 2> $@

results/%.captive : %.bin
	mkdir -p results
	-$(captive) --kernel $(harness) --command-line $*.bin > $@

%.S : %.templates $(generator)
	$(generator) armv8 $< > $@

%.o : %.S
	$(as) $^ -o $@

%.bin : %.o
	$(objcopy) -O binary $< $@

$(generator) : 
	make -C ../generator


