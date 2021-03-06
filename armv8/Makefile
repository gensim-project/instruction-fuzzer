harness := ../harness/armv8-native/harness
generator := ../src/generator/generator

ARMCCPREFIX?=aarch64-linux-gnu-

as := $(ARMCCPREFIX)as 
objcopy := $(ARMCCPREFIX)objcopy


QEMU ?= /home/tspink/src/qemu/aarch64-softmmu/qemu-system-aarch64 -M virt -cpu cortex-a53 -m 512 -nographic -semihosting
qemu := $(QEMU)

CAPTIVE ?= /home/tspink/src/captive/bin/captive --engine /home/tspink/src/captive/arch/aarch64.arch --platform simbench --block-dev-file /tmp/zero --semihosting angel
captive := $(CAPTIVE)

test-count := 1

# BASE
formats := adc add and asr bfi bfm bfxil bic ccmn ccmp cinc cinv cls clz cmn cmp cneg csel cset csetm csinc csinv
formats += csneg eon eor extr lsl lsr madd mneg mov msub mul mvn neg ngc nop orn orr rbit rev ror sbc sbfiz sbfm sbfx
formats += sdiv smaddl smnegl smsubl smulh smull sub sxtbhw tst ubfiz ubfm ubfx udiv umaddl umnegl umsubl umulh umull
formats += uxtbh

# SPECIAL
#formats += mrs

# DEBUG
formats += single

# SIMD
formats += add-simd and-simd orr-simd dup umov cmeq cnt

# Floating
formats += scvtf ucvtf fmov fadd fsub fmul fdiv fneg fused fcmpe fcvtz movi
formats += fcsel fabs fsqrt

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


