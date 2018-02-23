harness := ../harness/arm/harness
generator := ../src/generator/generator

ARMCCPREFIX?=arm-unknown-linux-gnueabi-

as := $(ARMCCPREFIX)as -march=armv7-a -mcpu=cortex-a15
objcopy := $(ARMCCPREFIX)objcopy

GENSIM_ROOT?=/home/harry/Work/new-gensim-repo
gensim-root := $(GENSIM_ROOT)

QEMU?=/home/harry/Work/qemu/qemu-2.5.0/arm-linux-user/qemu-arm
qemu := $(QEMU)

arcsim-bin := $(gensim-root)/build/dist/bin/archsim
arcsim := $(arcsim-bin) -s armv7a -m arm-user -l contiguous --mode interp --aggressive-code-invalidation


test-count := 50

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


