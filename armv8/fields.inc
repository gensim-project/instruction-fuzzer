field xreg x0 x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28 x29 x30
field wreg w0 w1 w2 w3 w4 w5 w6 w7 w8 w9 w10 w11 w12 w13 w14 w15 w16 w17 w18 w19 w20 w21 w22 w23 w24 w25 w26 w27 w28 w29 w30

field xreg_sp x0 x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28 x29 x30 sp
field wreg_sp w0 w1 w2 w3 w4 w5 w6 w7 w8 w9 w10 w11 w12 w13 w14 w15 w16 w17 w18 w19 w20 w21 w22 w23 w24 w25 w26 w27 w28 w29 w30 wsp

field xreg_zr x0 x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28 x29 x30 xzr
field wreg_zr w0 w1 w2 w3 w4 w5 w6 w7 w8 w9 w10 w11 w12 w13 w14 w15 w16 w17 w18 w19 w20 w21 w22 w23 w24 w25 w26 w27 w28 w29 w30 wzr

field vreg v0 v1 v2 v3 v4 v5 v6 v7 v8 v9 v10 v11 v12 v13 v14 v15 v16 v17 v18 v19 v20 v21 v22 v23 v24 v25 v26 v27 v28 v29 v30 v31
field qreg q0 q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14 q15 q16 q17 q18 q19 q20 q21 q22 q23 q24 q25 q26 q27 q28 q29 q30 q31
field dreg d0 d1 d2 d3 d4 d5 d6 d7 d8 d9 d10 d11 d12 d13 d14 d15 d16 d17 d18 d19 d20 d21 d22 d23 d24 d25 d26 d27 d28 d29 d30 d31
field sreg s0 s1 s2 s3 s4 s5 s6 s7 s8 s9 s10 s11 s12 s13 s14 s15 s16 s17 s18 s19 s20 s21 s22 s23 s24 s25 s26 s27 s28 s29 s30 s31
field hreg h0 h1 h2 h3 h4 h5 h6 h7 h8 h9 h10 h11 h12 h13 h14 h15 h16 h17 h18 h19 h20 h21 h22 h23 h24 h25 h26 h27 h28 h29 h30 h31
field breg b0 b1 b2 b3 b4 b5 b6 b7 b8 b9 b10 b11 b12 b13 b14 b15 b16 b17 b18 b19 b20 b21 b22 b23 b24 b25 b26 b27 b28 b29 b30 b31

field arrgw 8B 16B 4H 8H 2S 4S
field arrgx 2D
field arrg 8B 16B 4H 8H 2S 4S 2D

field belemidx 0 1 2 3
field helemidx 0 1 2 3
field selemidx 0 1 2 3
field delemidx 0 1

field imm 0 1 2 3 4 5
field nz_imm 1 2 3 4
field medium_imm 0x1000 0x2000 0x3000 0x1234 0x5678

field shift_type lsl lsr asr
field shift_type_ror lsl lsr asr ror
field extend_type uxtb uxth uxtw uxtx sxtb sxth sxtw sxtx

field shift_amt_x 0 1 2 3 4
field shift_amt_w 0 1 2 3 4
field extend_amt_x 0 1 2 3 4
field extend_amt_w 0 1 2 3 4

field nz_shift_amt_x 1 2 3 4
field nz_shift_amt_w 1 2 3 4
field nz_ror_amt_x 1 2 3 4
field nz_ror_amt_w 1 2 3 4

field bitmask_imm_x 0x1010101010101010
field bitmask_imm_w 0x10101010

field nzcv 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
field cond eq ne
