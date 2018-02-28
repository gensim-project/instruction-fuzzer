harness := ../harness/arm/harness
generator := ../src/generator/generator
as := arm-unknown-linux-gnueabi-as -march=armv7-a
objcopy := arm-unknown-linux-gnueabi-objcopy

gensim-root := /home/harry/Work/new-gensim-repo/
qemu := /home/harry/Work/qemu/qemu-2.5.0/arm-linux-user/qemu-arm
arcsim-bin := $(gensim-root)/build/dist/bin/archsim
arcsim := $(arcsim-bin) -s armv7a -m arm-user -l contiguous --mode interp --aggressive-code-invalidation


test-count := 100

formats := vabs vadd vcmp vcvt vdiv veor vext vmlal vmlsl vmla vmov vmrs  \
	vmull_s16 \
	vmull_s32 \
	vmull_u16 \
	vmull_u32 \
	\
	vmul_f32 \
	vmul_f64 \
	\
	vmul_i8 \
	vmul_i16 \
	vmul_i32 \
	\
	vmul_s_f32 \
	vmul_s_i16 \
	vmul_s_i32 \
	vmul_s_s16 \
	vmul_s_s32 \
	vmul_s_u16 \
	vmul_s_u32 \
	\
	vneg vnmla vrev vrshrn vshl vshr vsli vsqrt vsri vsub vtrn vzip

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
	$(generator) arm $^ > $@

%.o : %.S
	$(as) $^ -o $@

%.bin : %.o
	$(objcopy) -O binary $^ $@

dpi.S : dpi.template $(generator)
	$(generator) dpi.template > $@



$(generator) : 
	make -C ../generator


