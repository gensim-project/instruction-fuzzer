harness := ../harness/thumb2/harness
generator := ../generator/generator
as := arm-unknown-linux-gnueabi-as -march=armv7-a
objcopy := arm-unknown-linux-gnueabi-objcopy

gensim-root := /home/harry/Work/gensim
qemu := /home/harry/Work/qemu/qemu-2.5.0/arm-linux-user/qemu-arm
model := $(gensim-root)/arm_v5_dynamic/output_blockjit/armv5e.dll
arcsim-bin := $(gensim-root)/arcsim/bin/arcsim
arcsim := $(arcsim-bin) -p $(model) -s armv5e -m arm-user -l contiguous --mode interp --aggressive-code-invalidation


test-count := 1

formats := adc add and asr bfc bfi bic clz cmn cmp eor lsl lsr mla mls mov msr mul mvn orn orr pkh qadd qasx qdadd qdsub qsax qsub rbit rev16 revsh rev ror rrx rsbs sadd sasx sbc sbfx sel shadd shasx shsax shsub smlad smlald smlal smlalxx smla smlawx smlsl smls smmla smmls smuad smull smul smulw smusd ssat16 ssat ssax ssub sub sxtab16 sxtab sxtb16 sxtb sxth teq tst uadd uasx ubfx uhadd uhasx uhsax uhsub umaal umlal umull uqadd uqasx uqsax uqsub usad usat16 usat usax usub uxtab16 uxtab uxtah uxtb16 uxtb uxth
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


