harness := ../harness/x86/harness
generator := ../src/generator/generator

as := as
objcopy := objcopy

GENSIM_ROOT?=/home/harry/Work/new-gensim-repo
gensim-root := $(GENSIM_ROOT)

arcsim-bin := $(gensim-root)/build/dist/bin/archsim
arcsim := $(arcsim-bin) -s x86 -m x86-user -l contiguous --sys-model user --mode Interpreter
model := $(gensim-root)/build/dist/lib/archsim-modules/x86.dll

test-count := 100

formats := add and bsf bsr bt bts cmp cmpxchg convert dec div idiv imul1 imul2 imul3 inc mov movsx movzx mul neg not or ror rol sar sbb shl shr sub test xadd xchg xor padd pand pcmp pminub pmovmskb pshuf psll psrl punpck

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
	-$(harness) $*.bin $(test-count) $@

results/%.arcsim : %.bin $(arcsim-bin) $(model)
	mkdir -p results
	-$(arcsim) -e $(harness) -- $*.bin $(test-count) $@

%.S : %.templates $(generator) fields.inc
	$(generator) x86 $^ > $@

%.o : %.S
	$(as) $^ -o $@

%.bin : %.o
	$(objcopy) -O binary $^ $@

$(generator) : 
	make -C ../generator


