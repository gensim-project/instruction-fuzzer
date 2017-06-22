harness := ../harness/armv8-native/harness
generator := ../generator/generator
as := aarch64-unknown-linux-gnueabi-as 
objcopy := aarch64-unknown-linux-gnueabi-objcopy

qemu := /disk/scratch/tspink/src/qemu/aarch64-softmmu/qemu-system-aarch64 -M virt -cpu cortex-a53 -m 512 -nographic -semihosting
captive := /disk/scratch/tspink/captive/bin/captive --engine /disk/scratch/tspink/captive/arch/aarch64.arch --platform simbench --block-dev-file /tmp/zero --semihosting

test-count := 1

formats := adc add and asr sbfm adr

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
	$(generator) armv8 $^ > $@

%.o : %.S
	$(as) $^ -o $@

%.bin : %.o
	$(objcopy) -O binary $^ $@

$(generator) : 
	make -C ../generator


