field xreg x0 x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28 x29 x30
field wreg w0 w1 w2 w3 w4 w5 w6 w7 w8 w9 w10 w11 w12 w13 w14 w15 w16 w17 w18 w19 w20 w21 w22 w23 w24 w25 w26 w27 w28 w29 w30

field xreg_sp x0 x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28 x29 x30 sp
field wreg_sp w0 w1 w2 w3 w4 w5 w6 w7 w8 w9 w10 w11 w12 w13 w14 w15 w16 w17 w18 w19 w20 w21 w22 w23 w24 w25 w26 w27 w28 w29 w30 wsp

field xreg_zr x0 x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28 x29 x30 xzr
field wreg_zr w0 w1 w2 w3 w4 w5 w6 w7 w8 w9 w10 w11 w12 w13 w14 w15 w16 w17 w18 w19 w20 w21 w22 w23 w24 w25 w26 w27 w28 w29 w30 wzr

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
