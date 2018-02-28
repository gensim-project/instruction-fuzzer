MPWD=$(shell pwd)

AS=arm-unknown-linux-gnueabi-as
OBJCOPY=arm-unknown-linux-gnueabi-objcopy

harness := ../harness/arm/harness
gensim-root := /home/harry/Work/new-gensim-repo/
qemu := /home/harry/Work/qemu/qemu-2.5.0/arm-linux-user/qemu-arm
arcsim-bin := $(gensim-root)/build/dist/bin/archsim
arcsim := $(arcsim-bin) -s armv7a -m arm-user -l contiguous --mode interp --aggressive-code-invalidation
arcsim-interp := /home/harry/Work/new-gensim-repo-interp/build/dist/bin/archsim -s armv7a -m arm-user -l contiguous --mode interp --aggressive-code-invalidation
sequence-generator := $(MPWD)/../src/sequence-generator/sequence-generator

test-count := 10
sequence-count := 500
sequence-length := 10

SEQUENCE_IDS=$(shell seq 1 $(sequence-count))
SEQUENCES=$(SEQUENCE_IDS:%=sequence-%)
SEQUENCES_BINS=$(SEQUENCE_IDS:%=sequence-%.bin)

RESULTS_QEMU=$(SEQUENCES_BINS:%.bin=results/%.qemu)
RESULTS_ARCSIM=$(SEQUENCES_BINS:%.bin=results/%.arcsim)
RESULTS_ARCSIM_INTERP=$(SEQUENCES_BINS:%.bin=results/%.arcsim-interp)

TEMPLATE_DIR=../arm
TEMPLATE_NAMES=adc add and bfc bfi bic clz cmn cmp eor mla mls mov mrs msr mul mvn orr rbit rev16 rev rsb rsc sbc sbfx sdiv sel smlal smla smull smul sub sxtab16 sxtab sxtah sxtb16 sxtb sxth teq tst uadd8 ubfx udiv umlal uqadd8 uqsub8 uxtab16 uxtab uxtah uxtb16 uxtb uxth
TEMPLATES=$(TEMPLATE_NAMES:%=%.templates)

all : $(RESULTS_QEMU) $(RESULTS_ARCSIM) $(RESULTS_ARCSIM_INTERP)

sequence-%.S : 
	cd $(TEMPLATE_DIR) && $(sequence-generator) arm $(sequence-length) $* $(TEMPLATES) > $(MPWD)/$@

sequence-%.o : sequence-%.S
	$(AS) $^ -o $@

sequence-%.bin: sequence-%.o
	${OBJCOPY} -O binary $^ $@
	
clean:
	rm -f $(RESULTS_QEMU) $(RESULTS_ARCSIM) $(RESULTS_ARCSIM_INTERP) $(SEQUENCES)

results/%.qemu : %.bin $(harness)
	mkdir -p results
	-$(qemu) -r 4.3.0 $(harness) $*.bin $(test-count) $@

results/%.arcsim : %.bin $(arcsim-bin) $(model)
	mkdir -p results
	-$(arcsim) -e $(harness) -- $*.bin $(test-count) $@

results/%.arcsim-interp : %.bin $(model)
	mkdir -p results
	-$(arcsim-interp) -e $(harness) -- $*.bin $(test-count) $@

show-results : $(results)
	for i in $(SEQUENCES); do ./check-results.sh $$i $(MPWD)/results/$$i.arcsim $(MPWD)/results/$$i.qemu; done
