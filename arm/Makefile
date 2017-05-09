harness := ../harness/arm/harness
generator := ../generator/generator
as := arm-unknown-linux-gnueabi-as -march=armv7-a -mcpu=cortex-a15
objcopy := arm-unknown-linux-gnueabi-objcopy

gensim-root := /home/harry/Work/gensim
qemu := /home/harry/Work/qemu/qemu-2.5.0/arm-linux-user/qemu-arm
model := $(gensim-root)/arm_v5_dynamic/output_blockjit/armv5e.dll
arcsim-bin := $(gensim-root)/arcsim/bin/arcsim
arcsim := $(arcsim-bin) -p $(model) -s armv5e -m arm-user -l contiguous --mode interp --aggressive-code-invalidation


test-count := 1

formats := adc add and bfc bfi bic clz cmn cmp eor mla mls mov mrs msr mul mvn orr pkhtb pkhbt qadd qasx qdadd qdsub qsax qsub rbit rev16 revsh rev rsb rsc sadd sasx sbc sbfx sdiv sel shadd shasx shsax shsub smlad smlald smlal smlalxx smla smlawx smlsl smls smmla smmls smmul smuad smull smul smulw smusd ssat16 ssat ssax ssub sub sxtab16 sxtab sxtah sxtb16 sxtb sxth teq tst uadd8 uadd16 uasx ubfx udiv uhadd uhasx uhsax uhsub umaal umlal umull uqadd uqadd8 uqasx uqsax uqsub8 uqsub usub8 usub16 uxtab16 uxtab uxtah uxtb16 uxtb uxth 

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
	-$(qemu) -r 4.3.4 $(harness) $*.bin $(test-count) $@

results/%.arcsim : %.bin $(arcsim-bin) $(model)
	mkdir -p results
	-$(arcsim) -e $(harness) -- $*.bin $(test-count) $@

%.S : %.templates $(generator)
	$(generator) arm $^ > $@

%.o : %.S
	$(as) $^ -o $@

%.bin : %.o
	$(objcopy) -O binary $^ $@

$(generator) : 
	make -C ../generator


