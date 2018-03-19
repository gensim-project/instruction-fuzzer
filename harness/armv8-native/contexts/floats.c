unsigned int nr_floats = 10000;
unsigned int float32s[] = {
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc936522b, // -746786.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x489b5ef7, // 318199.718750
	(unsigned int)0x470140b6, // 33088.710938
	(unsigned int)0x497ae3a3, // 1027642.187500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc91afdf7, // -634847.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc86ed96e, // -244581.718750
	(unsigned int)0xc96bd102, // -965904.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x494c6c21, // 837314.062500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x476a4056, // 59968.335938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8b1e189, // -364300.281250
	(unsigned int)0x497c9893, // 1034633.187500
	(unsigned int)0x49876e4c, // 1109449.500000
	(unsigned int)0xc9798844, // -1022084.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8b62dfb, // -373103.843750
	(unsigned int)0xc990ab41, // -1185128.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49538a47, // 866468.437500
	(unsigned int)0x47bfbedb, // 98173.710938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49053193, // 545561.187500
	(unsigned int)0x490fcad9, // 588973.562500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8cc8d13, // -418920.593750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48e10e27, // 460913.218750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49583747, // 885620.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x497d4297, // 1037353.437500
	(unsigned int)0x4965b5e3, // 940894.187500
	(unsigned int)0xc824140a, // -168016.156250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc906e3af, // -552506.937500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc91a127a, // -631079.625000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4913bba9, // 605114.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x474ffad6, // 53242.835938
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc97e3fa0, // -1041402.000000
	(unsigned int)0xc93209ea, // -729246.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x491a117b, // 631063.687500
	(unsigned int)0xc94e478a, // -844920.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9866922, // -1101092.250000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x497f086f, // 1044614.937500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc88294f1, // -267431.531250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc7e4b455, // -117096.664062
	(unsigned int)0xc97157ef, // -988542.937500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49945c96, // 1215378.750000
	(unsigned int)0x4963a1bb, // 932379.687500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4915612d, // 611858.812500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4912f92d, // 602002.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc5d38850, // -6769.039062
	(unsigned int)0x4946efbf, // 814843.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8dcca7b, // -452179.843750
	(unsigned int)0xc921e64d, // -663140.812500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x48b635b7, // 373165.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9691eec, // -954862.750000
	(unsigned int)0x485f2366, // 228493.593750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9206a17, // -657057.437500
	(unsigned int)0xc724720a, // -42098.039062
	(unsigned int)0xc8eb26db, // -481590.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48ec48cf, // 483910.468750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9125307, // -599344.437500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x49637e43, // 931812.187500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4860c1ee, // 230151.718750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8ff22ff, // -522519.968750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48f00307, // 491544.218750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x497aefa3, // 1027834.187500
	(unsigned int)0xc932b4ba, // -731979.625000
	(unsigned int)0x47e7af2b, // 118622.335938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49525917, // 861585.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc95994e4, // -891214.250000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8a84143, // -344586.093750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x493fc5c3, // 785500.187500
	(unsigned int)0xc8c6f6a7, // -407477.218750
	(unsigned int)0x48bf7df7, // 392175.718750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8ff44e9, // -522791.281250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc90d623d, // -579107.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc94e9a1a, // -846241.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9301ddd, // -721373.812500
	(unsigned int)0xc831f3f2, // -182223.781250
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8d1c389, // -429596.281250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc95b6152, // -898581.125000
	(unsigned int)0xc99512eb, // -1221213.375000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7f57135, // -125666.414062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc77bcb4a, // -64459.289062
	(unsigned int)0xc974cabd, // -1002667.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49294fe1, // 693502.062500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9472403, // -815680.187500
	(unsigned int)0xc9257a83, // -677800.187500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4964082f, // 934018.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4927bcf1, // 687055.062500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc9282e1c, // -688865.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc86e4342, // -243981.031250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc889bee3, // -282103.093750
	(unsigned int)0xc950235e, // -852533.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc88e1027, // -290945.218750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48b46f0b, // 369528.343750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x493abe5f, // 764901.937500
	(unsigned int)0xc8e2b7f9, // -464319.781250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x494f5077, // 849159.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98cca3b, // -1153351.375000
	(unsigned int)0x48dfe98b, // 458572.343750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc994fbb9, // -1220471.125000
	(unsigned int)0xc90fbab3, // -588715.187500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8bf44ab, // -391717.343750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x460586d8, // 8545.710938
	(unsigned int)0x48d3c637, // 433713.718750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x498092cc, // 1053273.500000
	(unsigned int)0x4982a2e6, // 1070172.750000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4863dba6, // 233326.593750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8d389e1, // -433231.031250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x495c1457, // 901445.437500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x488701f3, // 276495.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc953fc37, // -868291.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x472f1076, // 44816.460938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc6c49114, // -25160.539062
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc88b0f41, // -284794.031250
	(unsigned int)0xc7e6e425, // -118216.289062
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x493ca64b, // 772708.687500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x486a913e, // 240196.968750
	(unsigned int)0xc928ea9e, // -691881.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7b32575, // -91722.914062
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc7a32735, // -83534.414062
	(unsigned int)0x498cd752, // 1153770.250000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x480349fe, // 134439.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc96b3b7d, // -963511.812500
	(unsigned int)0xc9357231, // -743203.062500
	(unsigned int)0x485f8136, // 228868.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8bc4519, // -385576.781250
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49232c81, // 668360.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x498c5c38, // 1149831.000000
	(unsigned int)0xc8f9b31b, // -511384.843750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x489486fb, // 304183.843750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9033e2f, // -537570.937500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9243c76, // -672711.375000
	(unsigned int)0xc9928651, // -1200330.125000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9709c24, // -985538.250000
	(unsigned int)0xc9817009, // -1060353.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8f95a23, // -510673.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4918be43, // 625636.187500
	(unsigned int)0x4996179a, // 1229555.250000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48b0e16b, // 362251.343750
	(unsigned int)0xc9879544, // -1110696.500000
	(unsigned int)0x4936da35, // 748963.312500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8e186a7, // -461877.218750
	(unsigned int)0xc8f39e49, // -498930.281250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc98698d5, // -1102618.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x49802a28, // 1049925.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc947a15f, // -817685.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x484653ae, // 203086.718750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8b7cdb7, // -376429.718750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4872f72e, // 248796.718750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc912f327, // -601906.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48865217, // 275088.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc6f5de54, // -31471.164062
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x498b1e98, // 1139667.000000
	(unsigned int)0xc94948b1, // -824459.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x490e8b07, // 583856.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc9732085, // -995848.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48e80a4b, // 475218.343750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4985973c, // 1094375.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc94cdc26, // -839106.375000
	(unsigned int)0xc81fb9da, // -163559.406250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4928f087, // 691976.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x495d5a3f, // 906659.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc96b628c, // -964136.750000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc8612d06, // -230580.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc927bf8e, // -687096.875000
	(unsigned int)0xc897aae5, // -310615.156250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4685626c, // 17073.210938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x493cadfb, // 772831.687500
	(unsigned int)0xc98e20d5, // -1164314.625000
	(unsigned int)0x488dc2cb, // 290326.343750
	(unsigned int)0x49256ead, // 677610.812500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8923b09, // -299480.281250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc90953f9, // -562495.562500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8237c62, // -167409.531250
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc9262079, // -680455.562500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4971977f, // 989559.937500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x48e216bb, // 463029.843750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4959c6c3, // 892012.187500
	(unsigned int)0x4994f468, // 1220237.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc938c483, // -756808.187500
	(unsigned int)0xc9502569, // -852566.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48a93b63, // 346587.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc939e3ea, // -761406.625000
	(unsigned int)0xc806cbd2, // -138031.281250
	(unsigned int)0x48b890f7, // 377991.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc9877e3e, // -1109959.750000
	(unsigned int)0x493a7bed, // 763838.812500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4955445f, // 873541.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc958cf64, // -888054.250000
	(unsigned int)0xc96f1535, // -979283.312500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x498dacae, // 1160597.750000
	(unsigned int)0xc9780ab6, // -1015979.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4970d677, // 986471.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7b9b895, // -95089.164062
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x494a43b5, // 828475.312500
	(unsigned int)0xc9337fcc, // -735228.750000
	(unsigned int)0x48d00b4f, // 426074.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc88b3d5d, // -285162.906250
	(unsigned int)0x4981dcec, // 1063837.500000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49626b9f, // 927417.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc995478b, // -1222897.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc90f8a00, // -587936.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8b43c59, // -369122.781250
	(unsigned int)0xc90183fd, // -530495.812500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x489591ff, // 306319.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8fbe893, // -515908.593750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc9949ba8, // -1217397.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4968e507, // 953936.437500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47e6250b, // 117834.085938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8a8972b, // -345273.343750
	(unsigned int)0x489a2d17, // 315752.718750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48ea00a7, // 479237.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48e98583, // 478252.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc942eab2, // -798379.125000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc98f4bfc, // -1173887.500000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc91884ca, // -624716.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x494f6fd9, // 849661.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc75f488a, // -57160.539062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x496581df, // 940061.937500
	(unsigned int)0xc90cce4c, // -576740.750000
	(unsigned int)0xc905d28a, // -548136.625000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4850a9a6, // 213670.593750
	(unsigned int)0x470f37b6, // 36663.710938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8d47ca5, // -435173.156250
	(unsigned int)0xc989a119, // -1127459.125000
	(unsigned int)0x472aee96, // 43758.585938
	(unsigned int)0xc82f4f72, // -179517.781250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc92136d2, // -660333.125000
	(unsigned int)0xc9945436, // -1215110.750000
	(unsigned int)0xc781fd25, // -66554.289062
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x498040a4, // 1050644.500000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x488bb9e3, // 286159.093750
	(unsigned int)0x48d6cbf3, // 439903.593750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48af97df, // 359614.968750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc957ee55, // -884453.312500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49911d2a, // 1188773.250000
	(unsigned int)0x48fb8387, // 515100.218750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98d29dd, // -1156411.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4852414e, // 215301.218750
	(unsigned int)0xc81d5bfa, // -161135.906250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x499277da, // 1199867.250000
	(unsigned int)0xc937e3ff, // -753215.937500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9847b35, // -1085286.625000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49938d3e, // 1208743.750000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7f937a5, // -127599.289062
	(unsigned int)0xc8e21143, // -462986.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x49844ea0, // 1083860.000000
	(unsigned int)0x4692ef6c, // 18807.710938
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc96376da, // -931693.625000
	(unsigned int)0xc8c45631, // -402097.531250
	(unsigned int)0xc8d4133f, // -434329.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49755fcf, // 1005052.937500
	(unsigned int)0xc6ee7314, // -30521.539062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8838c87, // -269412.218750
	(unsigned int)0x47e4650b, // 116938.085938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x480c546e, // 143697.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8f5803f, // -502785.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x49108d3f, // 592083.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc99609c7, // -1229112.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7360f0a, // -46607.039062
	(unsigned int)0xc95ce745, // -904820.312500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc87c6bbe, // -258478.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x490347cb, // 537724.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x493035c9, // 721756.562500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc829b892, // -173794.281250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48f98f6b, // 511099.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc813454a, // -150805.156250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4937a473, // 752199.187500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49807d0a, // 1052577.250000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x47b59d8b, // 92987.085938
	(unsigned int)0xc92cef43, // -708340.187500
	(unsigned int)0x495a12f3, // 893231.187500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x47dee81b, // 114128.210938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc77c4e4a, // -64590.289062
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc962ad66, // -928470.375000
	(unsigned int)0xc9024224, // -533538.250000
	(unsigned int)0xc9906a60, // -1183052.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4895236b, // 305435.343750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc92aeca8, // -700106.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc73f094a, // -48905.289062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49946616, // 1215682.750000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8c20581, // -397356.031250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4986ac30, // 1103238.000000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49309f37, // 723443.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9051d8b, // -545240.687500
	(unsigned int)0x4883a15b, // 269578.843750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49860906, // 1098016.750000
	(unsigned int)0x4944745f, // 804677.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc987071a, // -1106147.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x489d27d3, // 321854.593750
	(unsigned int)0xc902ba4d, // -535460.812500
	(unsigned int)0xc8db8449, // -449570.281250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc94858d1, // -820621.062500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x494c90f1, // 837903.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc71cce4a, // -40142.289062
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc98b6df4, // -1142206.500000
	(unsigned int)0xc8d69fc3, // -439550.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x46dba4ec, // 28114.460938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48d706bf, // 440373.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc976eeca, // -1011436.625000
	(unsigned int)0xc995baef, // -1226589.875000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x495ac5d7, // 896093.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98954ef, // -1125021.875000
	(unsigned int)0x48f055ff, // 492207.968750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4951cb47, // 859316.437500
	(unsigned int)0xc9004a70, // -525479.000000
	(unsigned int)0x48b55a43, // 371410.093750
	(unsigned int)0x492b609d, // 701961.812500
	(unsigned int)0xc96e8409, // -976960.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9152d17, // -611025.437500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x496f168b, // 979304.687500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9496974, // -824983.250000
	(unsigned int)0xc7d6e255, // -110020.664062
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4691bcac, // 18654.335938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x499145cc, // 1190073.500000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x478f7d5b, // 73466.710938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc819f672, // -157657.781250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49956252, // 1223754.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc964ec85, // -937672.312500
	(unsigned int)0xc909c34e, // -564276.875000
	(unsigned int)0x48d6af33, // 439673.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4950f16d, // 855830.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48b7f71b, // 376760.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48f53ec7, // 502262.218750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49505a6d, // 853414.812500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9466f7b, // -812791.687500
	(unsigned int)0xc848d806, // -205664.093750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8fa1a23, // -512209.093750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc90162ba, // -529963.625000
	(unsigned int)0xc913a4d6, // -604749.375000
	(unsigned int)0x49249407, // 674112.437500
	(unsigned int)0x483ee9c6, // 195495.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x495b55af, // 898394.937500
	(unsigned int)0x47a2365b, // 83052.710938
	(unsigned int)0xc77424ca, // -62500.789062
	(unsigned int)0xc95f5162, // -914710.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48e35a6b, // 465619.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x490a586f, // 566662.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4952ccd7, // 863437.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48590ae6, // 222251.593750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8d0bbcd, // -427486.406250
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498a6018, // 1133571.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9834f9e, // -1075699.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc94c245d, // -836165.812500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc94fcc24, // -851138.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4933ecdb, // 736973.687500
	(unsigned int)0x496a5fe3, // 959998.187500
	(unsigned int)0xc88b340b, // -285088.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x499624e0, // 1229980.000000
	(unsigned int)0xc94df90b, // -843664.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498dfa40, // 1163080.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x493c313d, // 770835.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc94b6824, // -833154.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc9885c51, // -1117066.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4695f9ec, // 19196.960938
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc987cade, // -1112411.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc914baaf, // -609194.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc961718e, // -923416.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9405df5, // -787935.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x492b156d, // 700758.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x49670f0f, // 946416.937500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8aa0eb7, // -348277.718750
	(unsigned int)0xc9881383, // -1114736.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc97ba28e, // -1030696.875000
	(unsigned int)0x482f7376, // 179661.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc990fb21, // -1187684.125000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4916e845, // 618116.312500
	(unsigned int)0x48ca03df, // 413726.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8c9b1e1, // -413071.031250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc838c18e, // -189190.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc96589bb, // -940187.687500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc4def53f, // -1783.663940
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4966d5db, // 945501.687500
	(unsigned int)0x48bbda5b, // 384722.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc96f8250, // -981029.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x46fb3a2c, // 32157.085938
	(unsigned int)0x480972ae, // 140746.718750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc58e8b50, // -4561.414062
	(unsigned int)0x49367341, // 747316.062500
	(unsigned int)0xc95899fe, // -887199.875000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x484300ae, // 199682.718750
	(unsigned int)0x4907d8e1, // 556430.062500
	(unsigned int)0x480cfe76, // 144377.843750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4934a699, // 739945.562500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc65b3f28, // -14031.789062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9337148, // -734996.500000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc958f737, // -888691.437500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8f252f1, // -496279.531250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9041b47, // -541108.437500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x492d064b, // 708708.687500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48f8fd5f, // 509930.968750
	(unsigned int)0x490f07b3, // 585851.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc91ed932, // -650643.125000
	(unsigned int)0x48ccdbeb, // 419551.343750
	(unsigned int)0x481d305e, // 160961.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9837e9a, // -1077203.250000
	(unsigned int)0x4903ea3d, // 540323.812500
	(unsigned int)0xc98cbaf4, // -1152862.500000
	(unsigned int)0x4954b8bf, // 871307.937500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc990589e, // -1182483.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc92bc852, // -703621.125000
	(unsigned int)0x490c58bd, // 574859.812500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48f0a5e7, // 492847.218750
	(unsigned int)0xc700c6ea, // -32966.914062
	(unsigned int)0xc8dbf875, // -450499.656250
	(unsigned int)0x49483139, // 819987.562500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc9783d45, // -1016788.312500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x47021eb6, // 33310.710938
	(unsigned int)0x47dababb, // 111989.460938
	(unsigned int)0xc9157777, // -612215.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x482d04ee, // 177171.718750
	(unsigned int)0xc95dd628, // -908642.500000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48fe27df, // 520510.968750
	(unsigned int)0x480edd5e, // 146293.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49513217, // 856865.437500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x498502de, // 1089627.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc75ab94a, // -55993.289062
	(unsigned int)0x48b5c1cf, // 372238.468750
	(unsigned int)0x48b892d3, // 378006.593750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4971aa8f, // 989864.937500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4918bdb7, // 625627.437500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4975846f, // 1005638.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98688cb, // -1102105.375000
	(unsigned int)0xc9692a38, // -955043.500000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc9439dc1, // -801244.062500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc94dcc0d, // -842944.812500
	(unsigned int)0x4629b958, // 10862.335938
	(unsigned int)0xc7d6b705, // -109934.039062
	(unsigned int)0xc763f2ca, // -58354.789062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48ccaabb, // 419157.843750
	(unsigned int)0xc87a8d72, // -256565.781250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9345595, // -738649.312500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8f3b86b, // -499139.343750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49896c66, // 1125772.750000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48c7eb93, // 409436.593750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc82d9cc2, // -177779.031250
	(unsigned int)0x489a27e3, // 315711.093750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc7b71865, // -93744.789062
	(unsigned int)0x47fe1b8b, // 130103.085938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x498d9dcc, // 1160121.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4906f8b9, // 552843.562500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc84219f6, // -198759.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98073f7, // -1052286.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4913363b, // 602979.687500
	(unsigned int)0x4790e2ab, // 74181.335938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4960285f, // 918149.937500
	(unsigned int)0xc98e113a, // -1163815.250000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4988be5e, // 1120203.750000
	(unsigned int)0x4913874d, // 604276.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc72c932a, // -44179.164062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8e32367, // -465179.218750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4973557f, // 996695.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4938e12d, // 757266.812500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4923cc8d, // 670920.812500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x495d3abb, // 906155.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49404bd5, // 787645.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc92a636b, // -697910.687500
	(unsigned int)0xc903c66e, // -539750.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x481542d6, // 152843.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc93fb02f, // -785154.937500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x499545f0, // 1222846.000000
	(unsigned int)0xc98821d8, // -1115195.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x487abbd6, // 256751.343750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc743ea0a, // -50154.039062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48862977, // 274763.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9101f4e, // -590324.875000
	(unsigned int)0x4996103e, // 1229319.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x480aef56, // 142269.343750
	(unsigned int)0xc85ae702, // -224156.031250
	(unsigned int)0x4955430f, // 873520.937500
	(unsigned int)0x4941f933, // 794515.187500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49919784, // 1192688.500000
	(unsigned int)0xc9787de8, // -1017822.500000
	(unsigned int)0x4920de7b, // 658919.687500
	(unsigned int)0xc968f85c, // -954245.750000
	(unsigned int)0x4933d187, // 736536.437500
	(unsigned int)0xc98c5771, // -1149678.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x495dd29b, // 908585.687500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48d82777, // 442683.718750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9461832, // -811395.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x46a2b22c, // 20825.085938
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x493cc9bf, // 773275.937500
	(unsigned int)0x48b59977, // 371915.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8e816a9, // -475317.281250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc981a39c, // -1062003.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9880b3d, // -1114471.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x482cbde6, // 176887.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc927d501, // -687440.062500
	(unsigned int)0x4759dd96, // 55773.585938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc94a26e4, // -828014.250000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98c4f2e, // -1149413.750000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9958a40, // -1225032.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9636227, // -931362.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc974e385, // -1003064.312500
	(unsigned int)0x497b98bb, // 1030539.687500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc977a914, // -1014417.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9922ae6, // -1197404.750000
	(unsigned int)0x491fb34f, // 654132.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4939f625, // 761698.312500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x496f92df, // 981293.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc947ffc5, // -819196.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9395061, // -759046.062500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x481b4cae, // 159026.718750
	(unsigned int)0x490f4ddf, // 586973.937500
	(unsigned int)0xc941d909, // -794000.562500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x498cf9f6, // 1154878.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49631c23, // 930242.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8d72c93, // -440676.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4924df3b, // 675315.687500
	(unsigned int)0x498b8a0e, // 1143105.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7f0dad5, // -123317.664062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49712a6f, // 987814.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48cf650b, // 424744.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4908c779, // 560247.562500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc99460de, // -1215515.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x47588296, // 55426.585938
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x47b5049b, // 92681.210938
	(unsigned int)0xc9585f26, // -886258.375000
	(unsigned int)0x483c1806, // 192608.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47aa86cb, // 87309.585938
	(unsigned int)0x4970f00b, // 986880.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x488a0a1f, // 282704.968750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc98ae890, // -1137938.000000
	(unsigned int)0xc868dac2, // -238443.031250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc901127d, // -528679.812500
	(unsigned int)0xc944c596, // -805977.375000
	(unsigned int)0x492e5a67, // 714150.437500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9878e97, // -1110482.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98fac9f, // -1176979.875000
	(unsigned int)0xc85def56, // -227261.343750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc910a860, // -592518.000000
	(unsigned int)0x48ace09b, // 354052.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x47f4731b, // 125158.210938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4890a253, // 296210.593750
	(unsigned int)0xc97e1cb2, // -1040843.125000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49106f57, // 591605.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4857dca6, // 221042.593750
	(unsigned int)0x4917db47, // 622004.437500
	(unsigned int)0x4913f0b1, // 605963.062500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48abd3f7, // 351903.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49177c17, // 620481.437500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49821176, // 1065518.750000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48cde183, // 421644.093750
	(unsigned int)0xc9864bd2, // -1100154.250000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x497bf6db, // 1032045.687500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98757a0, // -1108724.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc91d2619, // -643681.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x479ff0bb, // 81889.460938
	(unsigned int)0xc9786903, // -1017488.187500
	(unsigned int)0x4981d2d4, // 1063514.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4905e245, // 548388.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x492d0289, // 708648.562500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8de2c2f, // -455009.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x483bd55e, // 192341.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4911f7c7, // 597884.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9513a32, // -856995.125000
	(unsigned int)0x48ee40bb, // 487941.843750
	(unsigned int)0xc945114b, // -807188.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48b27487, // 365476.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x499686e0, // 1233116.000000
	(unsigned int)0x475febf6, // 57323.960938
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc98ba67a, // -1144015.250000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9465d45, // -812500.312500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc947918e, // -817432.875000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc95b9a4a, // -899492.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc834db72, // -185197.781250
	(unsigned int)0xc97a98df, // -1026445.937500
	(unsigned int)0x4992dd78, // 1203119.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7e19205, // -115492.039062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc924d263, // -675110.187500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc8009c6a, // -131697.656250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8764096, // -252162.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc71422aa, // -37922.664062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48df6a3f, // 457553.968750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48f81213, // 508048.593750
	(unsigned int)0x4836f49e, // 187346.468750
	(unsigned int)0xc864fa42, // -234473.031250
	(unsigned int)0xc93cb126, // -772882.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x498ee0f6, // 1170462.750000
	(unsigned int)0x48cc792f, // 418761.468750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc952dc34, // -863683.250000
	(unsigned int)0x467103d8, // 15424.960938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9724c2a, // -992450.625000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc778a96a, // -63657.414062
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc9597c78, // -890823.500000
	(unsigned int)0x491c00cd, // 638988.812500
	(unsigned int)0xc9450415, // -806977.312500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x48e1a29f, // 462100.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48e48c1b, // 468064.843750
	(unsigned int)0x48acce1b, // 353904.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9071248, // -553252.500000
	(unsigned int)0xc7389e2a, // -47262.164062
	(unsigned int)0xc815abfa, // -153263.906250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4902e9e5, // 536222.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8be2c95, // -389476.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc956822d, // -878626.812500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4936fff9, // 749567.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc983f1e2, // -1080892.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x499063de, // 1182843.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4884acab, // 271717.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4983fca8, // 1081237.000000
	(unsigned int)0xc859e522, // -223124.531250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49435661, // 800102.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48ed2f23, // 485753.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc94bc7ee, // -834686.875000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4948cc1f, // 822465.937500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9713802, // -988032.125000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc953ddd9, // -867805.562500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49810852, // 1057034.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8632cc2, // -232627.031250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc933b350, // -736053.000000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x498dd878, // 1161999.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4959843b, // 890947.687500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48ccc91f, // 419400.968750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9910b9b, // -1188211.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47fca31b, // 129350.210938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4984277e, // 1082607.750000
	(unsigned int)0x48044c2e, // 135472.718750
	(unsigned int)0xc927797f, // -685975.937500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48ffe343, // 524058.093750
	(unsigned int)0xc82bdfc2, // -175999.031250
	(unsigned int)0x487f2d86, // 261302.093750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x47b55acb, // 92853.585938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9672cdd, // -946893.812500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc985e505, // -1096864.625000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8f33d43, // -498154.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc96c8984, // -968856.250000
	(unsigned int)0xc8d6ec6d, // -440163.406250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49592517, // 889425.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4926f0ed, // 683790.812500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4977c707, // 1014896.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc90ddb5c, // -581045.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47702536, // 61477.210938
	(unsigned int)0x48c6045b, // 405538.843750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc92c693a, // -706195.625000
	(unsigned int)0xc989ea46, // -1129800.750000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8ef70af, // -490373.468750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x481119ee, // 148583.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc85bba42, // -225001.031250
	(unsigned int)0x496f031f, // 978993.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x495cd3e3, // 904510.187500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc882d34f, // -267930.468750
	(unsigned int)0x4794c74b, // 76174.585938
	(unsigned int)0x497cd423, // 1035586.187500
	(unsigned int)0xc992d63e, // -1202887.750000
	(unsigned int)0xc7747d4a, // -62589.289062
	(unsigned int)0xc88cb72d, // -288185.406250
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x496fdbe3, // 982462.187500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc883eff9, // -270207.781250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc903a078, // -539143.500000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49357c99, // 743369.562500
	(unsigned int)0x494230dd, // 795405.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc976ff22, // -1011698.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x498b20f2, // 1139742.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x495fb68f, // 916328.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498f2e50, // 1172938.000000
	(unsigned int)0x4986ffba, // 1105911.250000
	(unsigned int)0xc9029320, // -534834.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc79804d5, // -77833.664062
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc967d1a0, // -949530.000000
	(unsigned int)0xc94b5cac, // -832970.750000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc815ecaa, // -153522.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4921c829, // 662658.562500
	(unsigned int)0x492bc281, // 703528.062500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x495131f5, // 856863.312500
	(unsigned int)0xc90317d4, // -536957.250000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4843c8b6, // 200482.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8fd2213, // -518416.593750
	(unsigned int)0x494128c3, // 791180.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x473f3f16, // 48959.085938
	(unsigned int)0x48d8955b, // 443562.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48a8c16b, // 345611.343750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8696eee, // -239035.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8a88e9b, // -345204.843750
	(unsigned int)0x4917a417, // 621121.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x498b5a82, // 1141584.250000
	(unsigned int)0x490998bf, // 563595.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x476f61f6, // 61281.960938
	(unsigned int)0xc8896917, // -281416.718750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48ae296f, // 356683.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc729e80a, // -43496.039062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8313cea, // -181491.656250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x482aa216, // 174728.343750
	(unsigned int)0xc8aa3479, // -348579.781250
	(unsigned int)0xc9174fce, // -619772.875000
	(unsigned int)0x490289f7, // 534687.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4914fd7d, // 610263.812500
	(unsigned int)0x47a0d2eb, // 82341.835938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x492433bd, // 672571.812500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48538736, // 216604.843750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48a6fedf, // 342006.968750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc7cf9605, // -106284.039062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48b1c00b, // 364032.343750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x498d1d60, // 1156012.000000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48daf923, // 448457.093750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4916ee09, // 618208.562500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc8c643b7, // -406045.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x493a19b5, // 762267.312500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc917751f, // -620369.937500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9293578, // -693079.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc966347a, // -942919.625000
	(unsigned int)0xc973715f, // -997141.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8801947, // -262346.218750
	(unsigned int)0x48d9d18b, // 446092.343750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4951603b, // 857603.687500
	(unsigned int)0x4931ad49, // 727764.562500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48833dc7, // 268782.218750
	(unsigned int)0x48d96b93, // 445276.593750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc995b321, // -1226340.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc97607df, // -1007741.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9869037, // -1102342.875000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc95301f6, // -864287.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc993b4a7, // -1210004.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48d2f627, // 432049.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc90ce0af, // -577034.937500
	(unsigned int)0xc8e6db89, // -472796.281250
	(unsigned int)0xc8af6d9b, // -359276.843750
	(unsigned int)0x498e3308, // 1164897.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x495a4677, // 894055.437500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x485283ce, // 215567.218750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc955f5eb, // -876382.687500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48c4dfbb, // 403197.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8c3203b, // -399617.843750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc80ee42a, // -146320.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4930cf29, // 724210.562500
	(unsigned int)0xc6979854, // -19404.164062
	(unsigned int)0x48646456, // 233873.343750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4947bc8b, // 818120.687500
	(unsigned int)0xc9524af4, // -861359.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x498a474e, // 1132777.750000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc91585a1, // -612442.062500
	(unsigned int)0x493a4a59, // 763045.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9941ebe, // -1213399.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47caee6b, // 103900.835938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49095c17, // 562625.437500
	(unsigned int)0x48af816f, // 359435.468750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x480fe24e, // 147337.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc90fad8d, // -588504.812500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc91e88d0, // -649357.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49829394, // 1069682.500000
	(unsigned int)0x492394c3, // 670028.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x495c3ed7, // 902125.437500
	(unsigned int)0x498c85c2, // 1151160.250000
	(unsigned int)0x4990132c, // 1180261.500000
	(unsigned int)0xc9803682, // -1050320.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49809ce2, // 1053596.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc89592ef, // -306327.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc750fdaa, // -53501.664062
	(unsigned int)0x488e7e57, // 291826.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49693893, // 955273.187500
	(unsigned int)0x48918f97, // 298108.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc88c1691, // -286900.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x498a59f4, // 1133374.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4981a096, // 1061906.750000
	(unsigned int)0x494362e1, // 800302.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x495a79d7, // 894877.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9249acc, // -674220.750000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x498e7df2, // 1167294.250000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc974fc9a, // -1003465.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc57e7ca0, // -4071.789062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc91bb11d, // -637713.812500
	(unsigned int)0x496e9a53, // 977317.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc89057d9, // -295614.781250
	(unsigned int)0xc90205a7, // -532570.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48e60717, // 471096.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x491d0e25, // 643298.312500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc985155c, // -1090219.500000
	(unsigned int)0xc906d30a, // -552240.625000
	(unsigned int)0x4881acb3, // 265573.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4970aafb, // 985775.687500
	(unsigned int)0xc94f3c06, // -848832.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc5f84550, // -7944.664062
	(unsigned int)0x496bdf87, // 966136.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc88b78f7, // -285639.718750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49069047, // 551172.437500
	(unsigned int)0xc8329d8a, // -182902.156250
	(unsigned int)0xc9906415, // -1182850.625000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc7cd57d5, // -105135.664062
	(unsigned int)0xc9883df6, // -1116094.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc90d07b7, // -577659.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x498209e0, // 1065276.000000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc84f5382, // -212302.031250
	(unsigned int)0x49172b5b, // 619189.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48c7caab, // 409173.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc70bceca, // -35790.789062
	(unsigned int)0xc84b9cd2, // -208499.281250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49767bab, // 1009594.687500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc96ba26f, // -965158.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc7a9ce45, // -86940.539062
	(unsigned int)0x4976779b, // 1009529.687500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4993d30e, // 1210977.750000
	(unsigned int)0x490c178b, // 573816.687500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9655638, // -939363.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc6c57414, // -25274.039062
	(unsigned int)0x49280463, // 688198.187500
	(unsigned int)0x48f75ce7, // 506599.218750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8917531, // -297897.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48c08f8b, // 394364.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4908f725, // 561010.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x495239cf, // 861084.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc881c91b, // -265800.843750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8d93319, // -444824.781250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x499669a0, // 1232180.000000
	(unsigned int)0xc95952a1, // -890154.062500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc94043d3, // -787517.187500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc88c70ff, // -287623.968750
	(unsigned int)0x4901e6ad, // 532074.812500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x495bea73, // 900775.187500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4955ba2b, // 875426.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x485e0856, // 227361.343750
	(unsigned int)0x48e8b54b, // 476586.343750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc895d4b5, // -306853.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48573aee, // 220395.718750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x496aee27, // 962274.437500
	(unsigned int)0x49199515, // 629073.312500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x496c112b, // 966930.687500
	(unsigned int)0x493fb86d, // 785286.812500
	(unsigned int)0x4954e517, // 872017.437500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4932e969, // 732822.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc767304a, // -59184.289062
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4907f967, // 556950.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x490a5b4d, // 566708.812500
	(unsigned int)0x498e5d0e, // 1166241.750000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc892fab7, // -301013.718750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc880c9e5, // -263759.156250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4873e5ae, // 249750.718750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc96d1570, // -971095.000000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48635d96, // 232822.343750
	(unsigned int)0x4821f096, // 165826.343750
	(unsigned int)0xc90ad4ce, // -568652.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc90b511a, // -570641.625000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc98f6d15, // -1174946.625000
	(unsigned int)0xc80d4652, // -144665.281250
	(unsigned int)0xc993779b, // -1208051.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4935217d, // 741911.812500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48263d9e, // 170230.468750
	(unsigned int)0x494c96b9, // 837995.562500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc874b36a, // -250573.656250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4990785a, // 1183499.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8f2b373, // -497051.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4979d8b7, // 1023371.437500
	(unsigned int)0xc8cc624d, // -418578.406250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x495b46a7, // 898154.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x492efe8d, // 716776.812500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc96550ab, // -939274.687500
	(unsigned int)0xc906dac5, // -552364.312500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x48911b1b, // 297176.843750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x499412f6, // 1213022.750000
	(unsigned int)0xc94f8eaf, // -850154.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48b91127, // 379017.218750
	(unsigned int)0x492a72bb, // 698155.687500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x482fbee6, // 179963.593750
	(unsigned int)0xc9965330, // -1231462.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4901cbc1, // 531644.062500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x492287cf, // 665724.937500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x475fbf56, // 57279.335938
	(unsigned int)0xc8b6cc73, // -374371.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4932bb47, // 732084.437500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc923ffb8, // -671739.500000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4860d74e, // 230237.218750
	(unsigned int)0xc8fca815, // -517440.656250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8efffef, // -491519.468750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x49908ea4, // 1184212.500000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4895455b, // 305706.843750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49248757, // 673909.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc94c57cf, // -836988.937500
	(unsigned int)0xc820c932, // -164644.781250
	(unsigned int)0x491e349d, // 648009.812500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8af1f41, // -358650.031250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc984a635, // -1086662.625000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc767970a, // -59287.039062
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47afb15b, // 89954.710938
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc956395b, // -877461.687500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x494d8b0f, // 841904.937500
	(unsigned int)0x480b2ef6, // 142523.843750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc982ced3, // -1071578.375000
	(unsigned int)0x48bdc54b, // 388650.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x497332c7, // 996140.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48c1b4d3, // 396710.593750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x48ca26b3, // 414005.593750
	(unsigned int)0x48b3ae43, // 367986.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8239cd2, // -167539.281250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc8fdf187, // -520076.218750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x498da52c, // 1160357.500000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9938378, // -1208431.000000
	(unsigned int)0xc956460d, // -877664.812500
	(unsigned int)0xc940929e, // -788777.875000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47d733db, // 110183.710938
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x482721be, // 171142.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc921250f, // -660048.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49952a5a, // 1221963.250000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x493d976f, // 776566.937500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x480cba9e, // 144106.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4502eb60, // 2094.710938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4894778f, // 304060.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc992f144, // -1203752.500000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48b4622b, // 369425.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x481a978e, // 158302.218750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8bfe0b3, // -392965.593750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x499507f8, // 1220863.000000
	(unsigned int)0x496946ab, // 955498.687500
	(unsigned int)0xc851d186, // -214854.093750
	(unsigned int)0x492d2ab5, // 709291.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc63f24a8, // -12233.164062
	(unsigned int)0x490d63c7, // 579132.437500
	(unsigned int)0xc7f44db5, // -125083.414062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49398f03, // 760048.187500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc9269440, // -682308.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x494d4cad, // 840906.812500
	(unsigned int)0xc930eb3b, // -724659.687500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc747674a, // -51047.289062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc99050f8, // -1182239.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x477a8af6, // 64138.960938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4913a3b3, // 604731.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98187a7, // -1061108.875000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49776e5b, // 1013477.687500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x498f9d64, // 1176492.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc75adcea, // -56028.914062
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc90c566b, // -574822.687500
	(unsigned int)0x4994a008, // 1217537.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8a492b5, // -337045.656250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4862564e, // 231769.218750
	(unsigned int)0x498611ae, // 1098293.750000
	(unsigned int)0xc758b08a, // -55472.539062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc91653f2, // -615743.125000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc92a7556, // -698197.375000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9565cb7, // -878027.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48c8946f, // 410787.468750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49367acb, // 747436.687500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4884abf3, // 271711.593750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc90912c2, // -561452.125000
	(unsigned int)0x491edc81, // 650696.062500
	(unsigned int)0x48e4bbaf, // 468445.468750
	(unsigned int)0x4894b51f, // 304552.968750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc98ac85a, // -1136907.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49871b78, // 1106799.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9635ab7, // -931243.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8ee9b61, // -488667.031250
	(unsigned int)0x47855b7b, // 68278.960938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc92bac9a, // -703177.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc89543cf, // -305694.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x497625cb, // 1008220.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4991cc46, // 1194376.750000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x496fb2c7, // 981804.437500
	(unsigned int)0x4918d865, // 626054.312500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x492dc741, // 711796.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8e05f5b, // -459514.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x493ce909, // 773776.562500
	(unsigned int)0x498ecae6, // 1169756.750000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4883265f, // 268594.968750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8aa41e5, // -348687.156250
	(unsigned int)0x48a7f5db, // 343982.843750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x48d0f177, // 427915.718750
	(unsigned int)0xc91f5a6b, // -652710.687500
	(unsigned int)0x48ea2e13, // 479600.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98f61e4, // -1174588.500000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49824e1e, // 1067459.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc96ced00, // -970448.000000
	(unsigned int)0x4891f5bf, // 298925.968750
	(unsigned int)0x48a20fc7, // 331902.218750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc93c7d4c, // -772052.750000
	(unsigned int)0xc900deec, // -527854.750000
	(unsigned int)0x48a3547f, // 334499.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48ee8f03, // 488568.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc914550b, // -607568.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc890eb2f, // -296793.468750
	(unsigned int)0x49919840, // 1192712.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9808cee, // -1053085.750000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc969f6da, // -958317.625000
	(unsigned int)0xc9345d07, // -738768.437500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc94a02f5, // -827439.312500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x496aad2f, // 961234.937500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8d8cc33, // -444001.593750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc98212d8, // -1065563.000000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49465973, // 812439.187500
	(unsigned int)0x48cfd1cb, // 425614.343750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc980c527, // -1054884.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4987b81e, // 1111811.750000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x482596d6, // 169563.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc94c392e, // -836498.875000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x497fa563, // 1047126.187500
	(unsigned int)0x48df03a3, // 456733.093750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc90c7315, // -575281.312500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49539357, // 866613.437500
	(unsigned int)0x489a4f8b, // 316028.343750
	(unsigned int)0xc84f8a1e, // -212520.468750
	(unsigned int)0x49757967, // 1005462.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47e9a70b, // 119630.085938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc93efdaa, // -782298.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x494d71c7, // 841500.437500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492c3d73, // 705495.187500
	(unsigned int)0xc8bbf98d, // -384972.406250
	(unsigned int)0xc94555c6, // -808284.375000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9102cc2, // -590540.125000
	(unsigned int)0xc89f6945, // -326474.156250
	(unsigned int)0xc94c0873, // -835719.187500
	(unsigned int)0xc9037641, // -538468.062500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc937dac0, // -753068.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8a5feaf, // -339957.468750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x496c4dbf, // 967899.937500
	(unsigned int)0x4817e706, // 155548.093750
	(unsigned int)0x492c78a5, // 706442.312500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x491e7cd9, // 649165.562500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49209cd5, // 657869.312500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49098b47, // 563380.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc919661b, // -628321.687500
	(unsigned int)0xc924883c, // -673923.750000
	(unsigned int)0xc69415d4, // -18954.914062
	(unsigned int)0xc881fb41, // -266202.031250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4947f3cf, // 819004.937500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc5dc8750, // -7056.914062
	(unsigned int)0x4981f652, // 1064650.250000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x479da02b, // 80704.335938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc92ce2e9, // -708142.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9258900, // -678032.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492aea55, // 700069.312500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47693a76, // 59706.460938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48b2b2f7, // 365975.718750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4902262d, // 533090.812500
	(unsigned int)0xc8df31fb, // -457103.843750
	(unsigned int)0xc8f8dcb7, // -509669.718750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498d9054, // 1159690.500000
	(unsigned int)0x48820a27, // 266321.218750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4922d073, // 666887.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9719e79, // -989671.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc933d250, // -736549.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48d8e80f, // 444224.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8ac7919, // -353224.781250
	(unsigned int)0xc92268fe, // -665231.875000
	(unsigned int)0xc7b97575, // -94954.914062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc7a8bfe5, // -86399.789062
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc79db275, // -80740.914062
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x49517551, // 857941.062500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48c62093, // 405764.593750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc97439da, // -1000349.625000
	(unsigned int)0x47a8d1bb, // 86435.460938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48f9d5a3, // 511661.093750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc971a38c, // -989752.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49111e3b, // 594403.687500
	(unsigned int)0xc95f6308, // -914992.500000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x493f5dfd, // 783839.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8b005ef, // -360495.468750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc813a9aa, // -151206.656250
	(unsigned int)0xc95b4640, // -898148.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x484346a6, // 199962.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc978313b, // -1016595.687500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x495d0757, // 905333.437500
	(unsigned int)0xc97bc73c, // -1031283.750000
	(unsigned int)0x4990067a, // 1179855.250000
	(unsigned int)0xc90cb297, // -576297.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8cc171b, // -417976.843750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9373c2b, // -750530.687500
	(unsigned int)0xc8bc22af, // -385301.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc918fc44, // -626628.250000
	(unsigned int)0xc8af7551, // -359338.531250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8c6d2fd, // -407191.906250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc854e16a, // -217989.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49897572, // 1126062.250000
	(unsigned int)0x4955b9ff, // 875423.937500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4932715b, // 730901.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc987c640, // -1112264.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc668b228, // -14892.539062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9069901, // -551312.062500
	(unsigned int)0xc8ecccb9, // -484965.781250
	(unsigned int)0x495a4d1f, // 894161.937500
	(unsigned int)0x482783a6, // 171534.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x492a6dbb, // 698075.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8f94f59, // -510586.781250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8f31fbf, // -497917.968750
	(unsigned int)0xc9014017, // -529409.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x49135891, // 603529.062500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4888cacb, // 280150.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48fb9623, // 515249.093750
	(unsigned int)0x47ba90db, // 95521.710938
	(unsigned int)0x47cf8deb, // 106267.835938
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x487ed466, // 260945.593750
	(unsigned int)0xc936dbe3, // -748990.187500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8da1f3f, // -446713.968750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492d443d, // 709699.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x487ebb66, // 260845.593750
	(unsigned int)0xc974948c, // -1001800.750000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc922ad48, // -666324.500000
	(unsigned int)0x497f636b, // 1046070.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4940f4af, // 790346.937500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc98a0074, // -1130510.500000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4994793e, // 1216295.750000
	(unsigned int)0x4995eb78, // 1228143.000000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc971a8dc, // -989837.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc987cd21, // -1112484.125000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4756cf56, // 54991.335938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49935540, // 1206952.000000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x47e19d1b, // 115514.210938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498d5d96, // 1158066.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x46fcf46c, // 32378.210938
	(unsigned int)0xc8f9ee6d, // -511859.406250
	(unsigned int)0x4979ba9b, // 1022889.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8317e22, // -181752.531250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc91c2abd, // -639659.812500
	(unsigned int)0xc9780939, // -1015955.562500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8329902, // -182884.031250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7a96025, // -86720.289062
	(unsigned int)0x48511f6e, // 214141.718750
	(unsigned int)0x48eeea1f, // 489296.968750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x47b5dffb, // 93119.960938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc88b6681, // -285492.031250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x494a1af1, // 827823.062500
	(unsigned int)0x49073597, // 553817.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492eb425, // 715586.312500
	(unsigned int)0x4986ca74, // 1104206.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc69ad3d4, // -19817.914062
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc952ca9b, // -863401.687500
	(unsigned int)0xc90c146a, // -573766.625000
	(unsigned int)0x497cfdf7, // 1036255.437500
	(unsigned int)0xc94916fb, // -823663.687500
	(unsigned int)0xc983bfaa, // -1079285.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8068872, // -137761.781250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc7e060e5, // -114881.789062
	(unsigned int)0xc87d903a, // -259648.906250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9801b86, // -1049456.750000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x494d198d, // 840088.812500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc95a9a55, // -895397.312500
	(unsigned int)0x498b841e, // 1142915.750000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc86ad1e2, // -240455.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc7e0d585, // -115115.039062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98eecd7, // -1170842.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48ef22cf, // 489750.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4882a6c7, // 267574.218750
	(unsigned int)0xc8d42c99, // -434532.781250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc910b85a, // -592773.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48949e4f, // 304370.468750
	(unsigned int)0x4789ad9b, // 70491.210938
	(unsigned int)0xc71f0d0a, // -40717.039062
	(unsigned int)0xc98f7348, // -1175145.000000
	(unsigned int)0xc9518025, // -858114.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8420e32, // -198712.781250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4972c3c3, // 994364.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc87650d6, // -252227.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc95d3485, // -906056.312500
	(unsigned int)0x492af32f, // 700210.937500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4950a47f, // 854599.937500
	(unsigned int)0x497e0183, // 1040408.187500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x498c60f2, // 1149982.250000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9460929, // -811154.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9827a4d, // -1068873.625000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc90d268c, // -578152.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x486bce4e, // 241465.218750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4960fb1f, // 921521.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc920ec3a, // -659139.625000
	(unsigned int)0x483add9e, // 191350.468750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc7daf315, // -112102.164062
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4993131e, // 1204835.750000
	(unsigned int)0xc8f1d82b, // -495297.343750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x48fabcd3, // 513510.593750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc928f187, // -691992.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x487761a6, // 253318.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4844948e, // 201298.218750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x481c9d6e, // 160373.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc90df3c8, // -581436.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8ebc3e3, // -482847.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc987e201, // -1113152.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x490d8bcf, // 579772.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8b01ed1, // -360694.531250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48f96c1f, // 510816.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4682b7ac, // 16731.835938
	(unsigned int)0xc949761f, // -825185.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x484b96ce, // 208475.218750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4904be0d, // 543712.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x48bb3197, // 383372.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x47de970b, // 113966.085938
	(unsigned int)0x46ff0d2c, // 32646.585938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc958b11a, // -887569.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8c098e5, // -394439.156250
	(unsigned int)0xc88d3155, // -289162.656250
	(unsigned int)0x498b7f62, // 1142764.250000
	(unsigned int)0xc925dcbd, // -679371.812500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498fa026, // 1176580.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x45c8c2b0, // 6424.335938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8e68c49, // -472162.281250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc895f503, // -307112.093750
	(unsigned int)0x49802c8a, // 1050001.250000
	(unsigned int)0x490cc9c3, // 576668.187500
	(unsigned int)0xc8262a1a, // -170152.406250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x498bbc48, // 1144713.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x494ef361, // 847670.062500
	(unsigned int)0xc8945af9, // -303831.781250
	(unsigned int)0xc9800a40, // -1048904.000000
	(unsigned int)0x4971f6cb, // 991084.687500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49287c8f, // 690120.937500
	(unsigned int)0x4961ec83, // 925384.187500
	(unsigned int)0xc86e0ede, // -243771.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x495362b3, // 865835.187500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc81c3aba, // -159978.906250
	(unsigned int)0x48f7cde3, // 507503.093750
	(unsigned int)0xc89f0ba9, // -325725.281250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x491d29a9, // 643738.562500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x49805b6e, // 1051501.750000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x496453bf, // 935227.937500
	(unsigned int)0xc963893a, // -931987.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x493a43c9, // 762940.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x485fbfde, // 229119.468750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc97ae7f5, // -1027711.312500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8c15b07, // -395992.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98b6105, // -1141792.625000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x47b94afb, // 94869.960938
	(unsigned int)0xc9743239, // -1000227.562500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4950b84b, // 854916.687500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x489a8cf7, // 316519.718750
	(unsigned int)0x4993a046, // 1209352.750000
	(unsigned int)0xc952ee26, // -863970.375000
	(unsigned int)0x479d40fb, // 80513.960938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x491b7a39, // 636835.562500
	(unsigned int)0xc8fe26b7, // -520501.718750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc70176ea, // -33142.914062
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc902d78f, // -535928.937500
	(unsigned int)0xc940d3b9, // -789819.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x491ec499, // 650313.562500
	(unsigned int)0xc88b8b71, // -285787.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4980a786, // 1053936.750000
	(unsigned int)0xc94b1d1f, // -831953.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8486fc6, // -205247.093750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc986ad3c, // -1103271.500000
	(unsigned int)0xc9164a3b, // -615587.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc95961d1, // -890397.062500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9887c43, // -1118088.375000
	(unsigned int)0x475e9dd6, // 56989.835938
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x494943a1, // 824378.062500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8f7548d, // -506532.406250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4910b077, // 592647.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x46f7d82c, // 31724.085938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9886336, // -1117286.750000
	(unsigned int)0x4855cda6, // 218934.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x476a1076, // 59920.460938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc6fcf154, // -32376.664062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4812c74e, // 150301.218750
	(unsigned int)0x499399fe, // 1209151.750000
	(unsigned int)0xc88ce6b9, // -288565.781250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x498c432a, // 1149029.250000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9119653, // -596325.187500
	(unsigned int)0xc855b1da, // -218823.406250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4994f4a8, // 1220245.000000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x498da8a8, // 1160469.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8eacaab, // -480853.343750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4871145e, // 246865.468750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4983aa2e, // 1078597.750000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47f1861b, // 123660.210938
	(unsigned int)0x48b22207, // 364816.218750
	(unsigned int)0xc8f88af5, // -509015.656250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49631f7b, // 930295.687500
	(unsigned int)0xc9470851, // -815237.062500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49291875, // 692615.312500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc97c430b, // -1033264.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x490616d1, // 549229.062500
	(unsigned int)0xc970939f, // -985401.937500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48da89d3, // 447566.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc81121ba, // -148614.906250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc96769e8, // -947870.500000
	(unsigned int)0x4848e8fe, // 205731.968750
	(unsigned int)0xc6920c94, // -18694.289062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc94d6102, // -841232.125000
	(unsigned int)0x4928f039, // 691971.562500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x492d2827, // 709250.437500
	(unsigned int)0x494e086b, // 843910.687500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8ecf5cf, // -485294.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc95e7810, // -911233.000000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x488ba393, // 285980.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8e8da73, // -476883.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc8e26cbb, // -463717.843750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc72c97ea, // -44183.914062
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc87c7472, // -258513.781250
	(unsigned int)0x4950119f, // 852249.937500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4956e633, // 880227.187500
	(unsigned int)0xc890eefd, // -296823.906250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9953ae0, // -1222492.000000
	(unsigned int)0x49378067, // 751622.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49801a72, // 1049422.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc91685a4, // -616538.250000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc92c8d0d, // -706768.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98ab64f, // -1136329.875000
	(unsigned int)0x4995ea66, // 1228108.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc964aab1, // -936619.062500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9222c52, // -664261.125000
	(unsigned int)0xc8cf528b, // -424596.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc99257a9, // -1198837.125000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc907d5a9, // -556378.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x492c643f, // 706115.937500
	(unsigned int)0x48b3e7e7, // 368447.218750
	(unsigned int)0xc662c228, // -14512.539062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47c043cb, // 98439.585938
	(unsigned int)0xc7d78835, // -110352.414062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x48a1f033, // 331649.593750
	(unsigned int)0x447bbd81, // 1006.960999
	(unsigned int)0xc8e24edd, // -463478.906250
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8b7b19f, // -376204.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48f58c4f, // 502882.468750
	(unsigned int)0x45b268b0, // 5709.085938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8251e0a, // -169080.156250
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49820ed2, // 1065434.250000
	(unsigned int)0x48dc97af, // 451773.468750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc935e7c3, // -745084.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9629731, // -928115.062500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x493d56b3, // 775531.187500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc985a9d7, // -1094970.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x495f2553, // 914005.187500
	(unsigned int)0xc8bb321d, // -383376.906250
	(unsigned int)0xc95868e8, // -886414.500000
	(unsigned int)0xc7b2dc25, // -91576.289062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4950946b, // 854342.687500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc71e6faa, // -40559.664062
	(unsigned int)0xc895d0b9, // -306821.781250
	(unsigned int)0xc8f7fe75, // -507891.656250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8519592, // -214614.281250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc922d206, // -666912.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x494bca63, // 834726.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x497a39bb, // 1024923.687500
	(unsigned int)0x4947da3b, // 818595.687500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x498578dc, // 1093403.500000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98abfb8, // -1136631.000000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4899a24b, // 314642.343750
	(unsigned int)0xc98dbd0c, // -1161121.500000
	(unsigned int)0xc6fa96d4, // -32075.414062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4986a0fa, // 1102879.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4991cf8e, // 1194481.750000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x490883ad, // 559162.812500
	(unsigned int)0xc75c868a, // -56454.539062
	(unsigned int)0x494bfe01, // 835552.062500
	(unsigned int)0x492fc7cb, // 719996.687500
	(unsigned int)0x470dc1d6, // 36289.835938
	(unsigned int)0x496ff8e3, // 982926.187500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4989df40, // 1129448.000000
	(unsigned int)0xc8be2871, // -389443.531250
	(unsigned int)0x494720fd, // 815631.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc701f6ea, // -33270.914062
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4834465e, // 184601.468750
	(unsigned int)0x4993c236, // 1210438.750000
	(unsigned int)0xc7dbe055, // -112576.664062
	(unsigned int)0x4920e5db, // 659037.687500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48743936, // 250084.843750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x474307f6, // 49927.960938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x48d354cb, // 432806.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9892117, // -1123362.875000
	(unsigned int)0xc8a66311, // -340760.531250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc96d7ca7, // -972746.437500
	(unsigned int)0x48d770d3, // 441222.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4947f6c3, // 819052.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4655e658, // 13689.585938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49106911, // 591505.062500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc995806d, // -1224717.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49275c31, // 685507.062500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48dc10bf, // 450693.968750
	(unsigned int)0x48051826, // 136288.593750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x488a2f07, // 283000.218750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc81f0592, // -162838.281250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8eab883, // -480708.093750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x48bdef7b, // 388987.843750
	(unsigned int)0xc95fb5bc, // -916315.750000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc86b00be, // -240642.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4946c965, // 814230.312500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8557bba, // -218606.906250
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x48613e7e, // 230649.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc90280ed, // -534542.812500
	(unsigned int)0x498c0bb4, // 1147254.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4967be07, // 949216.437500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc983da42, // -1080136.250000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x492b1e47, // 700900.437500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x474ec316, // 52931.085938
	(unsigned int)0xc9839d44, // -1078184.500000
	(unsigned int)0xc9777c05, // -1013696.312500
	(unsigned int)0x482ffcb6, // 180210.843750
	(unsigned int)0xc98d477a, // -1157359.250000
	(unsigned int)0x48ba9fcb, // 382206.343750
	(unsigned int)0xc93a8b9d, // -764089.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4968f36b, // 954166.687500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9703d28, // -984018.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc895b6c9, // -306614.281250
	(unsigned int)0x48d00ecb, // 426102.343750
	(unsigned int)0xc903d452, // -539973.125000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49569d5f, // 879061.937500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9130e73, // -602343.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8cfb2e9, // -425367.281250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc93e7b09, // -780208.562500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4959ea2b, // 892578.687500
	(unsigned int)0x498ed4e6, // 1170076.750000
	(unsigned int)0xc939d146, // -761108.375000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc94ddb8c, // -843192.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4988f99c, // 1122099.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48cd523f, // 420497.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x495249a7, // 861338.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc87808ea, // -253987.656250
	(unsigned int)0x49357423, // 743234.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4969de67, // 957926.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8a85f2f, // -344825.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4933bbe1, // 736190.062500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc94d85d7, // -841821.437500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc983cfba, // -1079799.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8db5d67, // -449259.218750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc947813f, // -817171.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4993eabc, // 1211735.500000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49106a57, // 591525.437500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8a43b51, // -336346.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x490cab41, // 576180.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x482d05de, // 177175.468750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x497b9243, // 1030436.187500
	(unsigned int)0x499257cc, // 1198841.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x498457dc, // 1084155.500000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x488aad8b, // 284012.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48a7e69f, // 343860.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49431df7, // 799199.437500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc94a204a, // -827908.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4842ac96, // 199346.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc97ad258, // -1027365.500000
	(unsigned int)0xc80766aa, // -138650.656250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4966954f, // 944468.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x489d74e7, // 322471.218750
	(unsigned int)0x493128df, // 725645.937500
	(unsigned int)0x48f1e04b, // 495362.343750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x48b9cb23, // 380505.093750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8c01eaf, // -393461.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8ba2b6b, // -381275.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc92887aa, // -690298.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49840d62, // 1081772.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7d373c5, // -108263.539062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48bef5af, // 391085.468750
	(unsigned int)0x49933804, // 1206016.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc78f5f25, // -73406.289062
	(unsigned int)0xc8cab6e5, // -415159.156250
	(unsigned int)0x496cd06b, // 969990.687500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8c96f7b, // -412539.843750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc990eddc, // -1187259.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc90a8f18, // -567537.500000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x480e4806, // 145696.093750
	(unsigned int)0xc95e27c2, // -909948.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc94ff9af, // -851866.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc81e7a22, // -162280.531250
	(unsigned int)0xc8b2ad89, // -365932.281250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9330e58, // -733413.500000
	(unsigned int)0xc8b6f5e1, // -374703.031250
	(unsigned int)0x4787ddfb, // 69563.960938
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4940b119, // 789265.562500
	(unsigned int)0x4992c37a, // 1202287.250000
	(unsigned int)0x498489fc, // 1085759.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x484511e6, // 201799.593750
	(unsigned int)0xc97df14a, // -1040148.625000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4894ff87, // 305148.218750
	(unsigned int)0xc98e4fde, // -1165819.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x493f95e5, // 784734.312500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8a45a85, // -336596.156250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49342b2f, // 737970.937500
	(unsigned int)0x4966096f, // 942230.937500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x481807ce, // 155679.218750
	(unsigned int)0x47c271ab, // 99555.335938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8c918b5, // -411845.656250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48bd7d9f, // 388076.968750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc92c063b, // -704611.687500
	(unsigned int)0x498a3afc, // 1132383.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8f4ea65, // -501587.156250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc990b59e, // -1185459.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x488bedab, // 286573.343750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc7e18fc5, // -115487.539062
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x493a75b9, // 763739.562500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8418226, // -198152.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc974ece5, // -1003214.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48bdda33, // 388817.593750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc91feaf5, // -655023.312500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x482170b6, // 165314.843750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc89bb28b, // -318868.343750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc85ad84a, // -224097.156250
	(unsigned int)0xc921c3e6, // -662590.375000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc97756a7, // -1013098.437500
	(unsigned int)0xc925596c, // -677270.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc856046a, // -219153.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48d25ddb, // 430830.843750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc913eceb, // -605902.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc9966ac6, // -1232216.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48ef54ef, // 490151.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x488edf83, // 292604.093750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc92f0dbd, // -717019.812500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48f4faf7, // 501719.718750
	(unsigned int)0x48b69713, // 373944.593750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc96b1af0, // -962991.000000
	(unsigned int)0xc9167c74, // -616391.250000
	(unsigned int)0x483f58a6, // 195938.593750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc90d1e49, // -578020.562500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8c14feb, // -395903.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x47678516, // 59269.085938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492c68f1, // 706191.062500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49842746, // 1082600.750000
	(unsigned int)0x47e3d2db, // 116645.710938
	(unsigned int)0xc9015d99, // -529881.562500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x471dee76, // 40430.460938
	(unsigned int)0x48f74097, // 506372.718750
	(unsigned int)0x4911108d, // 594184.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x494c2a85, // 836264.312500
	(unsigned int)0xc89f2245, // -325906.156250
	(unsigned int)0x46835a2c, // 16813.085938
	(unsigned int)0xc91852db, // -623917.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48fdc7b3, // 519741.593750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc956b79c, // -879481.750000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x491476f3, // 608111.187500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x486c789e, // 242146.468750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc937487c, // -750727.750000
	(unsigned int)0x48f91e0f, // 510192.468750
	(unsigned int)0x497d69c7, // 1037980.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49088d73, // 559319.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc73aaf2a, // -47791.164062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x494534df, // 807757.937500
	(unsigned int)0xc970661e, // -984673.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc904a701, // -543344.062500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8938489, // -302116.281250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x464a77d8, // 12957.960938
	(unsigned int)0xc61bda28, // -9974.539062
	(unsigned int)0xc993393a, // -1206055.250000
	(unsigned int)0xc8793a6e, // -255209.718750
	(unsigned int)0xc89df4a7, // -323493.218750
	(unsigned int)0xc85936da, // -222427.406250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4905fa8f, // 548776.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4900c941, // 527508.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4985a2d6, // 1094746.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc986ecbf, // -1105303.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc99432f1, // -1214046.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc6c5a154, // -25296.664062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8375642, // -187737.031250
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8632b86, // -232622.093750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc88fc513, // -294440.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc987744b, // -1109641.375000
	(unsigned int)0x47f1451b, // 123530.210938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc90af031, // -569091.062500
	(unsigned int)0xc6e26854, // -28980.164062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8a9252b, // -346409.343750
	(unsigned int)0x4987de36, // 1113030.750000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x491d37f1, // 643967.062500
	(unsigned int)0xc7e021c5, // -114755.539062
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8918e3f, // -298097.968750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9511589, // -856408.562500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8c359bf, // -400077.968750
	(unsigned int)0x48d56c93, // 437092.593750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc959f2e8, // -892718.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49535753, // 865653.187500
	(unsigned int)0x47c1de1b, // 99260.210938
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4822da66, // 166761.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492e3511, // 713553.062500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x490da373, // 580151.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498e83f4, // 1167486.500000
	(unsigned int)0xc964d891, // -937353.062500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48ff48b7, // 522821.718750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9938063, // -1208332.375000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x49261e83, // 680424.187500
	(unsigned int)0x4990c974, // 1186094.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x463390d8, // 11492.210938
	(unsigned int)0x48766516, // 252308.343750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc95921a3, // -889370.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9434423, // -799810.187500
	(unsigned int)0xc9867e53, // -1101770.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48efc1af, // 491021.468750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc92713b6, // -684347.375000
	(unsigned int)0x492b0ff5, // 700671.312500
	(unsigned int)0xc98581ed, // -1093693.625000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc94e6dc7, // -845532.437500
	(unsigned int)0x49831056, // 1073674.750000
	(unsigned int)0x49649853, // 936325.187500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x497a4fdb, // 1025277.687500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc919d071, // -630023.062500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc917c124, // -621586.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4923f187, // 671512.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc937b514, // -752465.250000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98984d5, // -1126554.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc90e0f15, // -581873.312500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x48dc5213, // 451216.593750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9847baa, // -1085301.250000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4974cb7f, // 1002679.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc742850a, // -49797.039062
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc94dbeee, // -842734.875000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8dbb061, // -449923.031250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4991066a, // 1188045.250000
	(unsigned int)0x49202879, // 656007.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc766c98a, // -59081.539062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc934168a, // -737640.625000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc987ffff, // -1114111.875000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4987238e, // 1107057.750000
	(unsigned int)0x4956bbfb, // 879551.687500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9179b2f, // -620978.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc94c4ace, // -836780.875000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc981882b, // -1061125.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc780c255, // -65924.664062
	(unsigned int)0x498e47b2, // 1165558.250000
	(unsigned int)0xc917c702, // -621680.125000
	(unsigned int)0xc6c3f414, // -25082.039062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x495224a9, // 860746.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x494e442b, // 844866.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc9544b93, // -869561.187500
	(unsigned int)0x495aa4fb, // 895567.687500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x497af743, // 1027956.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4949aed7, // 826093.437500
	(unsigned int)0xc90b4340, // -570420.000000
	(unsigned int)0xc969aeb6, // -957163.375000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x490643a1, // 549946.062500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48f8cea3, // 509557.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x493731ef, // 750366.937500
	(unsigned int)0x472bba96, // 43962.585938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x482cc0ee, // 176899.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9463e68, // -812006.500000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc96291c9, // -928028.562500
	(unsigned int)0xc887d12d, // -278153.406250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4990fe92, // 1187794.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x489fefe7, // 327551.218750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc985a33e, // -1094759.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc85a8ed6, // -223803.343750
	(unsigned int)0xc98a9576, // -1135278.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x497ac033, // 1027075.187500
	(unsigned int)0x457e0d60, // 4064.835938
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc99300a4, // -1204244.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49183dd9, // 623581.562500
	(unsigned int)0x49671ccb, // 946636.687500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x49057863, // 546694.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48e001cb, // 458766.343750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x489f8fa3, // 326781.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98db383, // -1160816.375000
	(unsigned int)0x4832509e, // 182594.468750
	(unsigned int)0xc9891f99, // -1123315.125000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc952c033, // -863235.187500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc82186ea, // -165403.656250
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49964eba, // 1231319.250000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc9096048, // -562692.500000
	(unsigned int)0xc720880a, // -41096.039062
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x47f93c2b, // 127608.335938
	(unsigned int)0xc9040da0, // -540890.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x49803738, // 1050343.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8bdc4b7, // -388645.718750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4808b836, // 140000.843750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc96edd90, // -978393.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9340ec3, // -737516.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4956f41f, // 880449.937500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48414156, // 197893.343750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9459513, // -809297.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8071f62, // -138365.531250
	(unsigned int)0x494cbd01, // 838608.062500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x482eeef6, // 179131.843750
	(unsigned int)0x489ed817, // 325312.718750
	(unsigned int)0x4898aff3, // 312703.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48835ef7, // 269047.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8c64ccf, // -406118.468750
	(unsigned int)0x49083797, // 557945.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8e998f9, // -478407.781250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98807a8, // -1114357.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4973a913, // 998033.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x492c9ab1, // 706987.062500
	(unsigned int)0xc96e2efe, // -975599.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9078d06, // -555216.375000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc87d85e2, // -259607.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4975dff3, // 1007103.187500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc95384fa, // -866383.625000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8500e66, // -213049.593750
	(unsigned int)0xc616bb28, // -9646.789062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x491b136d, // 635190.812500
	(unsigned int)0x487543ae, // 251150.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8e28721, // -463929.031250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc947318d, // -815896.812500
	(unsigned int)0x49888f4a, // 1118697.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x491481c9, // 608284.562500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x487f04be, // 261138.968750
	(unsigned int)0x4978ea43, // 1019556.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x484beefe, // 208827.968750
	(unsigned int)0x4971d753, // 990581.187500
	(unsigned int)0xc9110b0e, // -594096.875000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc9547513, // -870225.187500
	(unsigned int)0xc9744dce, // -1000668.875000
	(unsigned int)0xc8427d26, // -199156.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x49936184, // 1207344.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8ef65eb, // -490287.343750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4956fc43, // 880580.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98a2717, // -1131746.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8f2a627, // -496945.218750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9590aec, // -889006.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc92cb7a4, // -707450.250000
	(unsigned int)0x48acdd73, // 354027.593750
	(unsigned int)0xc980f15f, // -1056299.875000
	(unsigned int)0x49117eed, // 595950.812500
	(unsigned int)0xc9745387, // -1000760.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc985341b, // -1091203.375000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x48a24207, // 332304.218750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc9819833, // -1061638.375000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4802e8de, // 134051.468750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47fb31db, // 128611.710938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9910f43, // -1188328.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498f657a, // 1174703.250000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc8531ee6, // -216187.593750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8b36545, // -367402.156250
	(unsigned int)0xc868d4be, // -238418.968750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc98fe4ec, // -1178781.500000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc822738a, // -166350.156250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8e48c95, // -468068.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4797e28b, // 77765.085938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc7ad93b5, // -88871.414062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x479c895b, // 80146.710938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc87be0c6, // -257923.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8e3d5b9, // -466605.781250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49571bcb, // 881084.687500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x49646ca7, // 935626.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc981ef4b, // -1064425.375000
	(unsigned int)0x49115a27, // 595362.437500
	(unsigned int)0x484177d6, // 198111.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4990930a, // 1184353.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc94433c0, // -803644.000000
	(unsigned int)0x49624437, // 926787.437500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc5df5e50, // -7147.789062
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc7b6a055, // -93504.664062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8441f72, // -200829.781250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc97d577b, // -1037687.687500
	(unsigned int)0xc9684d8c, // -951512.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x488f70d7, // 293766.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc843cc42, // -200497.031250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4885bad3, // 273878.593750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49431e7f, // 799207.937500
	(unsigned int)0xc90bc0fa, // -572431.625000
	(unsigned int)0xc89cc0bf, // -321029.968750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4813d50e, // 151380.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8e83809, // -475584.281250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc970f017, // -986881.437500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8bfdd3f, // -392937.968750
	(unsigned int)0x4991f45e, // 1195659.750000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x489fd1eb, // 327311.343750
	(unsigned int)0xc975ecb1, // -1007307.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48210a96, // 164906.343750
	(unsigned int)0xc8dffdb7, // -458733.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49931e2e, // 1205189.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4816c27e, // 154377.968750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49837d90, // 1077170.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc903d441, // -539972.062500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8970533, // -309289.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x496de0d3, // 974349.187500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x47a2ea3b, // 83412.460938
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc9932980, // -1205552.000000
	(unsigned int)0xc98575d2, // -1093306.250000
	(unsigned int)0x48adf0ef, // 356231.468750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc84732ce, // -203979.218750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc914db8c, // -609720.750000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc95ab471, // -895815.062500
	(unsigned int)0xc96686f9, // -944239.562500
	(unsigned int)0x49805d3e, // 1051559.750000
	(unsigned int)0x4932c535, // 732243.312500
	(unsigned int)0x469295ac, // 18762.835938
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47491476, // 51476.460938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc78609a5, // -68627.289062
	(unsigned int)0x49063c87, // 549832.437500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x490c0b8d, // 573624.812500
	(unsigned int)0xc9439b42, // -801204.125000
	(unsigned int)0xc93a7fc0, // -763900.000000
	(unsigned int)0xc932284a, // -729732.625000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9068219, // -550945.562500
	(unsigned int)0x49686da3, // 952026.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9933f38, // -1206247.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc956cc24, // -879810.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8985f89, // -312060.281250
	(unsigned int)0x477b1236, // 64274.210938
	(unsigned int)0xc907eea9, // -556778.562500
	(unsigned int)0x47f7f36b, // 126950.835938
	(unsigned int)0xc80a8912, // -141860.281250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8c44959, // -401994.781250
	(unsigned int)0x472534f6, // 42292.960938
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc967126f, // -946470.937500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc876db1e, // -252780.468750
	(unsigned int)0x459c55b0, // 5002.710938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x481e38b6, // 162018.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9281c64, // -688582.250000
	(unsigned int)0x4922bd5f, // 666581.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4990f72a, // 1187557.250000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4812c106, // 150276.093750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48cb6737, // 416569.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9250d41, // -676052.062500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9096401, // -562752.062500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc927ce74, // -687335.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4942970b, // 797040.687500
	(unsigned int)0x4942f3e3, // 798526.187500
	(unsigned int)0x4717e9d6, // 38889.835938
	(unsigned int)0xc96b2617, // -963169.437500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x498bb100, // 1144352.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc93c4445, // -771140.312500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc96fc427, // -982082.437500
	(unsigned int)0xc94f0ee0, // -848110.000000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc92b3950, // -701333.000000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x497c49ff, // 1033375.937500
	(unsigned int)0x49690ccf, // 954572.937500
	(unsigned int)0xc8640a3e, // -233512.968750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4889c337, // 282137.718750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc92392e4, // -669998.250000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48ddcac7, // 454230.218750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9497f2f, // -825330.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x498f6c90, // 1174930.000000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc91f5362, // -652598.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc88b42c5, // -285206.156250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4947d001, // 818432.062500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x49927e72, // 1200078.250000
	(unsigned int)0x491d1d15, // 643537.312500
	(unsigned int)0xc9834dbe, // -1075639.750000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x496908fb, // 954511.687500
	(unsigned int)0x4960cea7, // 920810.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc898cb3d, // -312921.906250
	(unsigned int)0x49616ac7, // 923308.437500
	(unsigned int)0x48e51b7f, // 469211.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc95122e1, // -856622.062500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc7a97575, // -86762.914062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc91c93da, // -641341.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47c951eb, // 103075.835938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9871736, // -1106662.750000
	(unsigned int)0xc88517ad, // -272573.406250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4936daf3, // 748975.187500
	(unsigned int)0xc97f8a0e, // -1046688.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48fcc9a7, // 517709.218750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc98a82b8, // -1134679.000000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8e86715, // -475960.656250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4965316b, // 938774.687500
	(unsigned int)0xc7da13f5, // -111655.914062
	(unsigned int)0xc77e65aa, // -65125.664062
	(unsigned int)0xc954183d, // -868739.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4914c533, // 609363.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48c5abcb, // 404830.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98c9f6e, // -1151981.750000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x495f10e7, // 913678.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4957a73f, // 883315.937500
	(unsigned int)0xc8b64813, // -373312.593750
	(unsigned int)0x4959e793, // 892537.187500
	(unsigned int)0x496e3c37, // 975811.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498c3cde, // 1148827.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48cd434b, // 420378.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc90bfac9, // -573356.562500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x488614ef, // 274599.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x46bc682c, // 24116.085938
	(unsigned int)0x491d03e9, // 643134.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8d350c9, // -432774.281250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8248802, // -168480.031250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4887edc3, // 278382.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x497c5b37, // 1033651.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x497757e3, // 1013118.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc988ea25, // -1121604.625000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x492e4359, // 713781.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8d6b49d, // -439716.906250
	(unsigned int)0x495a043f, // 892995.937500
	(unsigned int)0xc94fa6b5, // -850539.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc6dbbb14, // -28125.539062
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc820fbaa, // -164846.656250
	(unsigned int)0xc8be05bf, // -389165.968750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9228e8d, // -665832.812500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x498997ec, // 1127165.500000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4904225d, // 541221.812500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc60beda8, // -8955.414062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x496e78bf, // 976779.937500
	(unsigned int)0xc8ece269, // -485139.281250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492d4a71, // 709799.062500
	(unsigned int)0xc8c7cb13, // -409176.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x48535d06, // 216436.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc928e1d8, // -691741.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8607e8a, // -229882.156250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49088b63, // 559286.187500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x47b5b19b, // 93027.210938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8e38b29, // -466009.281250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48427c56, // 199153.343750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x490197d7, // 530813.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4989484a, // 1124617.250000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc6497ea8, // -12895.664062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc7e17cd5, // -115449.664062
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x497cdb8f, // 1035704.937500
	(unsigned int)0xc85a42f2, // -223499.781250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4885b5d3, // 273838.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc7a56b35, // -84694.414062
	(unsigned int)0xc9828668, // -1069261.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4903ce73, // 539879.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98b413e, // -1140775.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc69e5194, // -20264.789062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9072ece, // -553708.875000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4958bb13, // 887729.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x488f54af, // 293541.468750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49932726, // 1205476.750000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc8108d62, // -148021.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x489b0efb, // 317559.843750
	(unsigned int)0x4944beaf, // 805866.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc90b77eb, // -571262.687500
	(unsigned int)0x49680843, // 950404.187500
	(unsigned int)0xc8ef6417, // -490272.718750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48005ac6, // 131435.093750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x468feaec, // 18421.460938
	(unsigned int)0xc9563ea4, // -877546.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48df564f, // 457394.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48ae30b7, // 356741.718750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x498dd502, // 1161888.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48e3a387, // 466204.218750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x491f2641, // 651876.062500
	(unsigned int)0x48a53a6b, // 338387.343750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x493b8dc3, // 768220.187500
	(unsigned int)0x47f3047b, // 124424.960938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc98e0720, // -1163492.000000
	(unsigned int)0x498040b4, // 1050646.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc96acf63, // -961782.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x494056cf, // 787820.937500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc81b585a, // -159073.406250
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc90b41f8, // -570399.500000
	(unsigned int)0xc8619fb2, // -231038.781250
	(unsigned int)0xc9767ac1, // -1009580.062500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x493992f1, // 760111.062500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc88aa281, // -283924.031250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x495bf1d3, // 900893.187500
	(unsigned int)0x479349eb, // 75411.835938
	(unsigned int)0xc920fe95, // -659433.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8d2aaf9, // -431447.781250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc85efd16, // -228340.343750
	(unsigned int)0x49343397, // 738105.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48bee8eb, // 390983.343750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49476b45, // 816820.312500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49333d37, // 734163.437500
	(unsigned int)0xc73e726a, // -48754.414062
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49457fe7, // 808958.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9458f70, // -809207.000000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc64bc428, // -13041.039062
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9874fa8, // -1108469.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc980a3ad, // -1053813.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x49044e89, // 541928.562500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x495d1c0b, // 905664.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49010945, // 528532.312500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9028902, // -534672.125000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48c6b88f, // 406980.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9841aaf, // -1082197.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x488a6b63, // 283483.093750
	(unsigned int)0xc98586e3, // -1093852.375000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49876e32, // 1109446.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49858d08, // 1094049.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49842124, // 1082404.500000
	(unsigned int)0xc98fde5b, // -1178571.375000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc939597b, // -759191.687500
	(unsigned int)0x49041c87, // 541128.437500
	(unsigned int)0x489dfac3, // 323542.093750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc960c1c2, // -920604.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc6ffa8d4, // -32724.414062
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4752d056, // 53968.335938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8a3af8d, // -335228.406250
	(unsigned int)0x4926cd63, // 683222.187500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc92b0052, // -700421.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x490e264f, // 582244.937500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc92aadab, // -699098.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4880024b, // 262162.343750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc742570a, // -49751.039062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc90cb2c8, // -576300.500000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8cf8fdb, // -425086.843750
	(unsigned int)0x49009145, // 526612.312500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc733740a, // -45940.039062
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x497a0fdf, // 1024253.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8da45af, // -447021.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc78e3a35, // -72820.414062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc94db5e0, // -842590.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x490c5d0d, // 574928.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x494dd02d, // 843010.812500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4989386c, // 1124109.500000
	(unsigned int)0xc808d362, // -140109.531250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48f241bf, // 496141.968750
	(unsigned int)0xc80ef90a, // -146404.156250
	(unsigned int)0xc8d5d1af, // -437901.468750
	(unsigned int)0x498841f4, // 1116222.500000
	(unsigned int)0xc8a0dd3f, // -329449.968750
	(unsigned int)0xc96cba13, // -969633.187500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc92a8135, // -698387.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc980628d, // -1051729.625000
	(unsigned int)0x494cfdcd, // 839644.812500
	(unsigned int)0xc6a2e314, // -20849.539062
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc957c7b1, // -883835.062500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498056b2, // 1051350.250000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48f59203, // 502928.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc6044228, // -8464.539062
	(unsigned int)0xc93e2f78, // -778999.500000
	(unsigned int)0x497d9e3f, // 1038819.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc947357d, // -815959.812500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48a55ec7, // 338678.218750
	(unsigned int)0x48865c2b, // 275169.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8e6d055, // -472706.656250
	(unsigned int)0x4986fefe, // 1105887.750000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492da40b, // 711232.687500
	(unsigned int)0xc97a7b6a, // -1025974.625000
	(unsigned int)0xc87d064a, // -259097.156250
	(unsigned int)0x489d790f, // 322504.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48a0dec3, // 329462.093750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc95be286, // -900648.375000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc9870374, // -1106030.500000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x493524e3, // 741966.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc92580b9, // -677899.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8ea28f3, // -479559.593750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x464b0058, // 12992.085938
	(unsigned int)0xc903b908, // -539536.500000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc947e2cc, // -818732.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x48d462c3, // 434966.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc956409f, // -877577.937500
	(unsigned int)0x47a1c4db, // 82825.710938
	(unsigned int)0x46046558, // 8473.335938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc99060aa, // -1182741.250000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48bf718f, // 392076.468750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4949f405, // 827200.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc7bddab5, // -97205.414062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498f33c0, // 1173112.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc92b0209, // -700448.562500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x490a9ab9, // 567723.562500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x472bcff6, // 43983.960938
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc845b072, // -202433.781250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x479f81cb, // 81667.585938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49304a8f, // 722088.937500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x47dfc4eb, // 114569.835938
	(unsigned int)0xc98310a1, // -1073684.125000
	(unsigned int)0xc91c2868, // -639622.500000
	(unsigned int)0x492f97b1, // 719227.062500
	(unsigned int)0x490e6309, // 583216.562500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8d80c09, // -442464.281250
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49214ddd, // 660701.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49914f76, // 1190382.750000
	(unsigned int)0x489adbd7, // 317150.718750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc942d838, // -798083.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x493e3c75, // 779207.312500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc94fcd86, // -851160.375000
	(unsigned int)0x494919ed, // 823710.812500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8ab2b5b, // -350554.843750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4992ba08, // 1201985.000000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8d8e135, // -444169.656250
	(unsigned int)0xc930db50, // -724405.000000
	(unsigned int)0xc845917e, // -202309.968750
	(unsigned int)0xc93b8d94, // -768217.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8de5cf5, // -455399.656250
	(unsigned int)0x4981a480, // 1062032.000000
	(unsigned int)0x48e6897b, // 472139.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc93ae145, // -765460.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8e87587, // -476076.218750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4996763e, // 1232583.750000
	(unsigned int)0xc88299a3, // -267469.093750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48cc570b, // 418488.343750
	(unsigned int)0x46fc69ec, // 32308.960938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc77fa6ca, // -65446.789062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc993cec2, // -1210840.250000
	(unsigned int)0x4972addb, // 994013.687500
	(unsigned int)0x477f8976, // 65417.460938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49351fa9, // 741882.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x489da6ef, // 322871.468750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4841d71e, // 198492.468750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49832aba, // 1074519.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498b0fd2, // 1139194.250000
	(unsigned int)0x481b385e, // 158945.468750
	(unsigned int)0xc8412aca, // -197803.156250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8a2b79f, // -333244.968750
	(unsigned int)0xc95006b1, // -852075.062500
	(unsigned int)0xc909cb1f, // -564401.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48803baf, // 262621.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8ff80e9, // -523271.281250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc952990f, // -862608.937500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc869d202, // -239432.031250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8965365, // -307867.156250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc957f2c3, // -884524.187500
	(unsigned int)0x48cf352b, // 424361.343750
	(unsigned int)0xc8a48b7b, // -336987.843750
	(unsigned int)0x48560cce, // 219187.218750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc991703d, // -1191431.625000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x493385c5, // 735324.312500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4978ec23, // 1019586.187500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x47d21ddb, // 107579.710938
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc890558f, // -295596.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc91307a8, // -602234.500000
	(unsigned int)0xc946f329, // -814898.562500
	(unsigned int)0xc6f6df14, // -31599.539062
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8d0c3ab, // -427549.343750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc958940d, // -887104.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x481b150e, // 158804.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8fd8dd7, // -519278.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49181511, // 622929.062500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8cdd999, // -421580.781250
	(unsigned int)0xc97ca575, // -1034839.312500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x481dc746, // 161565.093750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9329108, // -731408.500000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9678780, // -948344.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49806012, // 1051650.250000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x487c7c66, // 258545.593750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8ae7803, // -357312.093750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4873a5d6, // 249495.343750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc92ba584, // -703064.250000
	(unsigned int)0x4988c8b2, // 1120534.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4947bd97, // 818137.437500
	(unsigned int)0xc9875f45, // -1108968.625000
	(unsigned int)0xc98991cb, // -1126969.375000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4788bf4b, // 70014.585938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc97023a1, // -983610.062500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4746a436, // 50852.210938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48e9012f, // 477193.468750
	(unsigned int)0x458246b0, // 4168.835938
	(unsigned int)0x49105fe1, // 591358.062500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49641e67, // 934374.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc936da58, // -748965.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49642047, // 934404.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49313df5, // 725983.312500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc97eeaa0, // -1044138.000000
	(unsigned int)0xc9215012, // -660737.125000
	(unsigned int)0x48b4e9fb, // 370511.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4861ea4e, // 231337.218750
	(unsigned int)0xc9636d0d, // -931536.812500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4954572f, // 869746.937500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49962ec4, // 1230296.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc7b36265, // -91844.789062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9722cbc, // -991947.750000
	(unsigned int)0x478a052b, // 70666.335938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x46de0fec, // 28423.960938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc94392f4, // -801071.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x493e47f9, // 779391.562500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4924c32b, // 674866.687500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc97413fa, // -999743.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x48f6c8f3, // 505415.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4912608b, // 599560.687500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x491737b9, // 619387.562500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc79d1635, // -80428.414062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49634737, // 930931.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x495ad6df, // 896365.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48c0b693, // 394676.593750
	(unsigned int)0xc8d80b2f, // -442457.468750
	(unsigned int)0xc9027f94, // -534521.250000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x47aaa50b, // 87370.085938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc95a6334, // -894515.250000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc4f9713f, // -1995.538940
	(unsigned int)0x47493f56, // 51519.335938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4861f27e, // 231369.968750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8b8e9a3, // -378701.093750
	(unsigned int)0xc91d2eed, // -643822.812500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48d9ce4f, // 446066.468750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc7c822a5, // -102469.289062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc84506a2, // -201754.531250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x499166d0, // 1191130.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc96227d2, // -926333.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc7c889e5, // -102675.789062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4914f9af, // 610202.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4919b16d, // 629526.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4980b9a0, // 1054516.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x495dda1b, // 908705.687500
	(unsigned int)0xc634e328, // -11576.789062
	(unsigned int)0xc95cd8fc, // -904591.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49046caf, // 542410.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc976fc65, // -1011654.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x490dd015, // 580865.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48d7527f, // 440979.968750
	(unsigned int)0xc83ade92, // -191354.281250
	(unsigned int)0xc8aeec53, // -358242.593750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc97fe6a1, // -1048170.062500
	(unsigned int)0x48d00fcb, // 426110.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4963beb7, // 932843.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4993eea2, // 1211860.250000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc92580c8, // -677900.500000
	(unsigned int)0x4985bc18, // 1095555.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc95cabec, // -903870.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8a22c45, // -332130.156250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc922bf64, // -666614.250000
	(unsigned int)0xc717c62a, // -38854.164062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4792dadb, // 75189.710938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4959e713, // 892529.187500
	(unsigned int)0x47df1f1b, // 114238.210938
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc916afe1, // -617214.062500
	(unsigned int)0x493aae97, // 764649.437500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48ee4abb, // 488021.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8b5d003, // -372352.093750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc910c6c8, // -593004.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9331dd1, // -733661.062500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8177c4a, // -155121.156250
	(unsigned int)0x4926fc4f, // 683972.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc5f33950, // -7783.164062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49072129, // 553490.562500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48fbc21b, // 515600.843750
	(unsigned int)0xc87a937e, // -256589.968750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4786abfb, // 68951.960938
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x495c92a3, // 903466.187500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc88c04e7, // -286759.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4987fe52, // 1114058.250000
	(unsigned int)0xc9137df8, // -604127.500000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9151cee, // -610766.875000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc85b44ee, // -224531.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc9000453, // -524357.187500
	(unsigned int)0x4826a95e, // 170661.468750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc98eb78e, // -1169137.750000
	(unsigned int)0x497b3223, // 1028898.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc92075eb, // -657246.687500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49442fe5, // 803582.312500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x48d9422b, // 444945.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49039199, // 538905.562500
	(unsigned int)0x492ddb29, // 712114.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc980e6f1, // -1055966.125000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x481ae52e, // 158612.718750
	(unsigned int)0x492b0eb7, // 700651.437500
	(unsigned int)0xc8abd011, // -351872.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc95195a9, // -858458.562500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4979a383, // 1022520.187500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4995be3c, // 1226695.500000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc91cafb4, // -641787.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc975fd02, // -1007568.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49629f87, // 928248.437500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x476d86b6, // 60806.710938
	(unsigned int)0xc96b7b81, // -964536.062500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc82926b2, // -173210.781250
	(unsigned int)0x48fe11f3, // 520335.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4812885e, // 150049.468750
	(unsigned int)0x48a6592b, // 340681.343750
	(unsigned int)0xc939e60d, // -761440.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x479fe33b, // 81862.460938
	(unsigned int)0x478b420b, // 71300.085938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8b77901, // -375752.031250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492935a5, // 693082.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x487eb436, // 260816.843750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x47a24a3b, // 83092.460938
	(unsigned int)0xc8a64b99, // -340572.781250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc944bf4f, // -805876.937500
	(unsigned int)0xc9455221, // -808226.062500
	(unsigned int)0x487d75a6, // 259542.593750
	(unsigned int)0x468b982c, // 17868.085938
	(unsigned int)0xc80fed12, // -147380.281250
	(unsigned int)0x4892844b, // 300066.343750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc974afb1, // -1002235.062500
	(unsigned int)0x4908e3cb, // 560700.687500
	(unsigned int)0x4979d33f, // 1023283.937500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc7c34345, // -99974.539062
	(unsigned int)0x495216bd, // 860523.812500
	(unsigned int)0xc9825af6, // -1067870.750000
	(unsigned int)0xc98c074a, // -1147113.250000
	(unsigned int)0x47d220eb, // 107585.835938
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc95deafe, // -908975.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc6606828, // -14362.039062
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48abda7b, // 351955.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4926769f, // 681833.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9105134, // -591123.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x494f8c35, // 850115.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x47a8c45b, // 86408.710938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4903a3d7, // 539197.437500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48452dce, // 201911.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49621f6b, // 926198.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48e7287b, // 473411.843750
	(unsigned int)0x4836a90e, // 187044.218750
	(unsigned int)0xc74f322a, // -53042.164062
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4955ccf3, // 875727.187500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49812c1a, // 1058179.250000
	(unsigned int)0x496eb9b7, // 977819.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x479b460b, // 79500.085938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc94c08c8, // -835724.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98ada40, // -1137480.000000
	(unsigned int)0xc939417f, // -758807.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48f0ab7f, // 492891.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc95377d5, // -866173.312500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9277862, // -685958.125000
	(unsigned int)0xc945434b, // -807988.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc700596a, // -32857.414062
	(unsigned int)0xc98c7861, // -1150732.125000
	(unsigned int)0x4986337c, // 1099375.500000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc992a1de, // -1201211.750000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x47ee50cb, // 122017.585938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc84e240a, // -211088.156250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4957244f, // 881220.937500
	(unsigned int)0xc8c48a9d, // -402516.906250
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x494389bf, // 800923.937500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8c8866f, // -410675.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc969c4d4, // -957517.250000
	(unsigned int)0x4985b176, // 1095214.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc96a7eb7, // -960491.437500
	(unsigned int)0xc90146e4, // -529518.250000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x496504fb, // 938063.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8ef52b5, // -490133.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc989d12c, // -1128997.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc90128da, // -529037.625000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4967128b, // 946472.687500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x490b375d, // 570229.812500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc88f8429, // -293921.281250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x496ebebf, // 977899.937500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49950480, // 1220752.000000
	(unsigned int)0x48a329a3, // 334157.093750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc94d974a, // -842100.625000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x497e9693, // 1042793.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4972897f, // 993431.937500
	(unsigned int)0x488c6487, // 287524.218750
	(unsigned int)0xc98c574c, // -1149673.500000
	(unsigned int)0xc8f5d9f5, // -503503.656250
	(unsigned int)0x492305f7, // 667743.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49885b34, // 1117030.500000
	(unsigned int)0xc96b0cbf, // -962763.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4979444f, // 1020996.937500
	(unsigned int)0xc8cd4027, // -420353.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49653fc3, // 939004.187500
	(unsigned int)0x489e02f7, // 323607.718750
	(unsigned int)0xc7e543f5, // -117383.914062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4913a043, // 604676.187500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x495cfd43, // 905172.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x485e28c6, // 227491.093750
	(unsigned int)0xc9532ef7, // -865007.437500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x47f1833b, // 123654.460938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc991101e, // -1188355.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc93e1869, // -778630.562500
	(unsigned int)0x49283e71, // 689127.062500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4993b07a, // 1209871.250000
	(unsigned int)0xc7e59ad5, // -117557.664062
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4958294b, // 885396.687500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc98878f7, // -1117982.875000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x492a5005, // 697600.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x491b5c17, // 636353.437500
	(unsigned int)0xc8d781a3, // -441357.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc934be31, // -740323.062500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc79dd975, // -80818.914062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4919edc9, // 630492.562500
	(unsigned int)0x498c1cc6, // 1147800.750000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc87edb2e, // -260972.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8f9e011, // -511744.531250
	(unsigned int)0xc8a815d5, // -344238.656250
	(unsigned int)0xc867d3aa, // -237390.656250
	(unsigned int)0x493b5a5f, // 767397.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9859bab, // -1094517.375000
	(unsigned int)0x482bb77e, // 175837.968750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8a4d2ad, // -337557.406250
	(unsigned int)0xc982df93, // -1072114.375000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4941af8d, // 793336.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x47b8b8eb, // 94577.835938
	(unsigned int)0xc9303785, // -721784.312500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc94d65e4, // -841310.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48be8897, // 390212.718750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x47cd3ceb, // 105081.835938
	(unsigned int)0xc70a356a, // -35381.414062
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc98f4ab8, // -1173847.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48f3065b, // 497714.843750
	(unsigned int)0xc8e7c845, // -474690.156250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4927bdd9, // 687069.562500
	(unsigned int)0xc989dbed, // -1129341.625000
	(unsigned int)0xc8f033f9, // -491935.781250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x493e289b, // 778889.687500
	(unsigned int)0x4941fb4f, // 794548.937500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48a94b33, // 346713.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49106419, // 591425.562500
	(unsigned int)0xc9223a2b, // -664482.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48a15187, // 330380.218750
	(unsigned int)0xc8b8601b, // -377600.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc7f82205, // -127044.039062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x490fc001, // 588800.062500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x497aee9b, // 1027817.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4969b8ef, // 957326.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc95397d5, // -866685.312500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x494a9d37, // 829907.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc89b06a9, // -317493.281250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc94d378d, // -840568.812500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x46b6042c, // 23298.085938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4983f0f6, // 1080862.750000
	(unsigned int)0x49472b1f, // 815793.937500
	(unsigned int)0xc92fe6c9, // -720492.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc916fee3, // -618478.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x497443b3, // 1000507.187500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8d3b7e3, // -433599.093750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4911255b, // 594517.687500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48f97e7b, // 510963.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4990a9f0, // 1185086.000000
	(unsigned int)0xc5f39c50, // -7795.539062
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48e75ba3, // 473821.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48e4792b, // 467913.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7c062b5, // -98501.414062
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9149dfd, // -608735.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc91c945c, // -641349.750000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98d13c6, // -1155704.750000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc992822b, // -1200197.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4858be2e, // 221944.718750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9576994, // -882329.250000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9162ec3, // -615148.187500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4837407e, // 187649.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x497fa3ef, // 1047102.937500
	(unsigned int)0x488d55a7, // 289453.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4980d9fc, // 1055551.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48e7465f, // 473650.968750
	(unsigned int)0x49520d83, // 860376.187500
	(unsigned int)0xc6abc154, // -21984.664062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9908b35, // -1184102.625000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8e11633, // -460977.593750
	(unsigned int)0x47c74ebb, // 102045.460938
	(unsigned int)0x4882d6f3, // 267959.593750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47d9dfbb, // 111551.460938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49948508, // 1216673.000000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49733ec3, // 996332.187500
	(unsigned int)0xc8cfe1b1, // -425741.531250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48bcf88b, // 387012.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc989f297, // -1130066.875000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4974425b, // 1000485.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x481ad8e6, // 158563.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc7cd9205, // -105252.039062
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc957d814, // -884097.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc917a274, // -621095.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9439f40, // -801268.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8bc2849, // -385346.281250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc80e10f2, // -145475.781250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49665d33, // 943571.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4832b53e, // 182996.968750
	(unsigned int)0xc80f8dba, // -146998.906250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4986912c, // 1102373.500000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9472be2, // -815806.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc919ee2f, // -630498.937500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x49278e6f, // 686310.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4878fdbe, // 254966.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc7e4a3f5, // -117063.914062
	(unsigned int)0x478d1d7b, // 72250.960938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4917119d, // 618777.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4986ab1c, // 1103203.500000
	(unsigned int)0x4917ae43, // 621284.187500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4981e200, // 1064000.000000
	(unsigned int)0xc8f15bff, // -494303.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc870f6ca, // -246747.156250
	(unsigned int)0x496a56bb, // 959851.687500
	(unsigned int)0x47aa8ccb, // 87321.585938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x49816fb2, // 1060342.250000
	(unsigned int)0xc952e0d7, // -863757.437500
	(unsigned int)0xc8edb055, // -486786.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc975b66b, // -1006438.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48121c8e, // 149618.218750
	(unsigned int)0xc8bd35f1, // -387503.531250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8a04791, // -328252.531250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4878b76e, // 254685.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4873bf56, // 249597.343750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc860d29a, // -230218.406250
	(unsigned int)0xc9950163, // -1220652.375000
	(unsigned int)0x4946c021, // 814082.062500
	(unsigned int)0xc93ab593, // -764761.187500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x493fb267, // 785190.437500
	(unsigned int)0x4966a9ff, // 944799.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc978ac0e, // -1018560.875000
	(unsigned int)0xc98faac5, // -1176920.625000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9588e9a, // -887017.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8ba49b5, // -381517.656250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8299282, // -173642.031250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47fb547b, // 128680.960938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4957b19f, // 883481.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48f8a5bb, // 509229.843750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc94d0990, // -839833.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8aff6b3, // -360373.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48e3fb93, // 466908.593750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc93835e4, // -754526.250000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc957e01b, // -884225.687500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x48c8349f, // 410020.968750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48e80d4f, // 475242.468750
	(unsigned int)0x48ff6927, // 523081.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48141bd6, // 151663.343750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49687983, // 952216.187500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4987351e, // 1107619.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4988b2c6, // 1119832.750000
	(unsigned int)0x486d4ef6, // 243003.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc910a288, // -592424.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9835044, // -1075720.500000
	(unsigned int)0x47f9488b, // 127633.085938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc815d0e2, // -153411.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc769f76a, // -59895.414062
	(unsigned int)0xc8d21207, // -430224.218750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x498f9f14, // 1176546.500000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x4971e6c3, // 990828.187500
	(unsigned int)0x49906612, // 1182914.250000
	(unsigned int)0xc8070c02, // -138288.031250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48f06b37, // 492377.718750
	(unsigned int)0x490103a5, // 528442.312500
	(unsigned int)0x484fe4ae, // 212882.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc93bf987, // -769944.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8db36f7, // -448951.718750
	(unsigned int)0xc95834db, // -885581.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98c72c7, // -1150552.875000
	(unsigned int)0x47292e96, // 43310.585938
	(unsigned int)0xc9923ca7, // -1197972.875000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x492bcb77, // 703671.437500
	(unsigned int)0x48828bb7, // 267357.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9670781, // -946296.062500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4829c07e, // 173825.968750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x45c4e6b0, // 6300.835938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x47640776, // 58375.460938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x496f08e7, // 979086.437500
	(unsigned int)0x4994476c, // 1214701.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc97e26e4, // -1041006.250000
	(unsigned int)0xc9768df3, // -1009887.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x47f5297b, // 125522.960938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8c4d20d, // -403088.406250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc63d2828, // -12106.039062
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc88fe971, // -294731.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8dfc6a1, // -458293.031250
	(unsigned int)0x48fa5e03, // 512752.093750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc77c70aa, // -64624.664062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x498a0e06, // 1130944.750000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc973bdc7, // -998364.437500
	(unsigned int)0xc90990da, // -563469.625000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc94e9838, // -846211.500000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4903bd3d, // 539603.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x49737a37, // 997283.437500
	(unsigned int)0x49311dab, // 725466.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8bc678f, // -385852.468750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48260cc6, // 170035.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4903c913, // 539793.187500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9379176, // -751895.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc94b8dbc, // -833755.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8ee40a3, // -487941.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc92007f2, // -655487.125000
	(unsigned int)0x498154d6, // 1059482.750000
	(unsigned int)0x483f9c1e, // 196208.468750
	(unsigned int)0xc8d282c1, // -431126.031250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8b2d6c5, // -366262.156250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48faf74b, // 513978.343750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc96eae2e, // -977634.875000
	(unsigned int)0x4937d0f9, // 752911.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x497987eb, // 1022078.687500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4942deb3, // 798187.187500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4958eceb, // 888526.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x45158560, // 2392.335938
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x47b7cb0b, // 94102.085938
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc93fdcdb, // -785869.687500
	(unsigned int)0xc8decb99, // -456284.781250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc957c796, // -883833.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492941cd, // 693276.812500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4976e5d7, // 1011293.437500
	(unsigned int)0x47fca6eb, // 129357.835938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc982efc5, // -1072632.625000
	(unsigned int)0x496f605f, // 980485.937500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc94f74e7, // -849742.437500
	(unsigned int)0x483f47c6, // 195871.093750
	(unsigned int)0xc6effa94, // -30717.289062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4842ecf6, // 199603.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48a8e123, // 345865.093750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc7e24ba5, // -115863.289062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4919e2cb, // 630316.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4872114e, // 247877.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc990318b, // -1181233.375000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9339424, // -735554.250000
	(unsigned int)0xc8fa7559, // -512938.781250
	(unsigned int)0x4995f26a, // 1228365.250000
	(unsigned int)0x49686233, // 951843.187500
	(unsigned int)0xc973d5b2, // -998747.125000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98e29a2, // -1164596.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48f378b7, // 498629.718750
	(unsigned int)0x497ab947, // 1026964.437500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc979ef64, // -1023734.250000
	(unsigned int)0x496c94a7, // 969034.437500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4941bf45, // 793588.312500
	(unsigned int)0xc96af70a, // -962416.625000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8fee6a9, // -522037.281250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc98df476, // -1162894.750000
	(unsigned int)0xc938481c, // -754817.750000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7be18f5, // -97329.914062
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc7fa41d5, // -128131.664062
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48d1d0bf, // 429701.968750
	(unsigned int)0xc97e76ba, // -1042283.625000
	(unsigned int)0x4917f325, // 622386.312500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x47fa190b, // 128050.085938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8246b0a, // -168364.156250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc71fa2aa, // -40866.664062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc91f6985, // -652952.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc845d08a, // -202562.156250
	(unsigned int)0x498a9a84, // 1135440.500000
	(unsigned int)0xc933e34a, // -736820.625000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc96f9d2b, // -981458.687500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8a08d2b, // -328809.343750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc966340d, // -942912.812500
	(unsigned int)0xc980e366, // -1055852.750000
	(unsigned int)0xc831e79a, // -182174.406250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x491c1933, // 639379.187500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc92e24ce, // -713292.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc90c43d3, // -574525.187500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x44b776c1, // 1467.711060
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49699a9b, // 956841.687500
	(unsigned int)0xc9850822, // -1089796.250000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4926d771, // 683383.062500
	(unsigned int)0x49624513, // 926801.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc830df0a, // -181116.156250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc986b3f2, // -1103486.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9961dcb, // -1229753.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x494b7159, // 833301.562500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x488f4e47, // 293490.218750
	(unsigned int)0xc8d6b439, // -439713.781250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x489cc0cf, // 321030.468750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc7b4f945, // -92658.539062
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x489dc18b, // 323084.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7af3875, // -89712.914062
	(unsigned int)0x48e86f37, // 476025.718750
	(unsigned int)0x473bbdf6, // 48061.960938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc763b5aa, // -58293.664062
	(unsigned int)0xc875cece, // -251707.218750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47a14d7b, // 82586.960938
	(unsigned int)0x496d79ab, // 972698.687500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4891d22f, // 298641.468750
	(unsigned int)0x476a1016, // 59920.085938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc6edf5d4, // -30458.914062
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc9933edb, // -1206235.375000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc88253ad, // -266909.406250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc8a10863, // -329795.093750
	(unsigned int)0xc95f097d, // -913559.812500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8ea7e2b, // -480241.343750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc82d4c2a, // -177456.656250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4950407f, // 852999.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49321cfb, // 729551.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4956397b, // 877463.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8ba0827, // -380993.218750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc948f172, // -823063.125000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8d1d1b9, // -429709.781250
	(unsigned int)0xc91702c9, // -618540.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4986b9be, // 1103671.750000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc9923115, // -1197602.625000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4869ea9e, // 239530.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x488a2c23, // 282977.093750
	(unsigned int)0x4835d4e6, // 186195.593750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc969ef31, // -958195.062500
	(unsigned int)0xc982700b, // -1068545.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49058567, // 546902.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8e117b7, // -460989.718750
	(unsigned int)0xc97eb1b9, // -1043227.562500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc898232b, // -311577.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc829c9ca, // -173863.156250
	(unsigned int)0xc8f857ad, // -508605.406250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc95dcad7, // -908461.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x47ab3fcb, // 87679.585938
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49869416, // 1102466.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x483a69ae, // 190886.718750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4870cfee, // 246591.718750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x492db4cd, // 711500.812500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4798886b, // 78096.835938
	(unsigned int)0xc990bdf6, // -1185726.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc945630d, // -808496.812500
	(unsigned int)0x498430c8, // 1082905.000000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc93c2495, // -770633.312500
	(unsigned int)0xc8ab9f37, // -351481.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x491ebd8b, // 650200.687500
	(unsigned int)0xc91a3e93, // -631785.187500
	(unsigned int)0xc7f15c65, // -123576.789062
	(unsigned int)0xc8076a9a, // -138666.406250
	(unsigned int)0x495c2387, // 901688.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc88383bf, // -269341.968750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc951ca44, // -859300.250000
	(unsigned int)0x49070275, // 552999.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc940928a, // -788776.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48aeabe3, // 357727.093750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc957ba0c, // -883616.750000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc82e5602, // -178520.031250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49935eec, // 1207261.500000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x494f467f, // 848999.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x49427ca7, // 796618.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc90c7bde, // -575421.875000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98a3607, // -1132224.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4994527a, // 1215055.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4729aa16, // 43434.085938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc962a76e, // -928374.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8abcec3, // -351862.093750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc7875db5, // -69307.414062
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9840f37, // -1081830.875000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc943b3c3, // -801596.187500
	(unsigned int)0x49738247, // 997412.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48e26517, // 463656.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc87d3b82, // -259310.031250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc960e1de, // -921117.875000
	(unsigned int)0x48a1e75f, // 331578.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc96554bf, // -939339.937500
	(unsigned int)0xc8913c83, // -297444.093750
	(unsigned int)0xc8301742, // -180317.031250
	(unsigned int)0x492f497d, // 717975.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492701d7, // 684061.437500
	(unsigned int)0x47d233fb, // 107623.960938
	(unsigned int)0xc98579f5, // -1093438.625000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4989dad0, // 1129306.000000
	(unsigned int)0x48924697, // 299572.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48e9f07f, // 479107.968750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98bcfff, // -1145343.875000
	(unsigned int)0xc8fa46a5, // -512565.156250
	(unsigned int)0xc92ab5bc, // -699227.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8d0132f, // -426137.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x472e13b6, // 44563.710938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4953d69b, // 867689.687500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc97032ac, // -983850.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8cc55ab, // -418477.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc96da7c0, // -973436.000000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8c98823, // -412737.093750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc98d585a, // -1157899.250000
	(unsigned int)0xc828fb3a, // -173036.906250
	(unsigned int)0xc989b857, // -1128202.875000
	(unsigned int)0x495ff177, // 917271.437500
	(unsigned int)0xc9693a59, // -955301.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49503c37, // 852931.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49184c13, // 623809.187500
	(unsigned int)0xc88db4a7, // -290213.218750
	(unsigned int)0xc97c7460, // -1034054.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8f5f941, // -503754.031250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x491e6e5f, // 648933.937500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc93d349c, // -774985.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc860ae02, // -230072.031250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8075f62, // -138621.531250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc7122b0a, // -37419.039062
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49055251, // 546085.062500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc87ea39a, // -260750.406250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49106f53, // 591605.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc88b593d, // -285385.906250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4815d106, // 153412.093750
	(unsigned int)0x4896158b, // 307372.343750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc97305cd, // -995420.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4940b3db, // 789309.687500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc91ccd69, // -642262.562500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x493a8ecd, // 764140.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x48fbe8ff, // 515911.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8daa90b, // -447816.343750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc84aefc2, // -207807.031250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4971e3d7, // 990781.437500
	(unsigned int)0xc8cbf1fb, // -417679.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9884a35, // -1116486.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498ee72a, // 1170661.250000
	(unsigned int)0x49931b34, // 1205094.500000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc8263d72, // -170229.781250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47632af6, // 58154.960938
	(unsigned int)0xc875a64a, // -251545.156250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x463a3dd8, // 11919.460938
	(unsigned int)0xc9736ffd, // -997119.812500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x490c420b, // 574496.687500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc986e58f, // -1105073.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48e1023b, // 460817.843750
	(unsigned int)0xc9321880, // -729480.000000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc8a8800d, // -345088.406250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc98d6cf3, // -1158558.375000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x489b19eb, // 317647.343750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc98b3b72, // -1140590.250000
	(unsigned int)0xc8d87e85, // -443380.156250
	(unsigned int)0x48f70c03, // 505952.093750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc957b7e0, // -883582.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc95e0797, // -909433.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x491d4891, // 644233.062500
	(unsigned int)0x48cf245f, // 424226.968750
	(unsigned int)0x484d999e, // 210534.468750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x487cf456, // 259025.343750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x461d28d8, // 10058.210938
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49406473, // 788039.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8d44793, // -434748.593750
	(unsigned int)0xc8e9d223, // -478865.093750
	(unsigned int)0x490cb553, // 576341.187500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc969a323, // -956978.187500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9403f4b, // -787444.687500
	(unsigned int)0xc98a198b, // -1131313.375000
	(unsigned int)0xc98c73c1, // -1150584.125000
	(unsigned int)0xc927376e, // -684918.875000
	(unsigned int)0xc98bf587, // -1146544.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc94456b3, // -804203.187500
	(unsigned int)0xc907ded0, // -556525.000000
	(unsigned int)0xc97e9f4a, // -1042932.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc94bf317, // -835377.437500
	(unsigned int)0xc696bad4, // -19293.414062
	(unsigned int)0xc8429276, // -199241.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc82eef4a, // -179133.156250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc81bcb5a, // -159533.406250
	(unsigned int)0xc897d847, // -310978.218750
	(unsigned int)0x48282166, // 172165.593750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc967acc5, // -948940.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc810c8ea, // -148259.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9289e8c, // -690664.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9651d0a, // -938448.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98dcf44, // -1161704.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49839124, // 1077796.500000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc88e566b, // -291507.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8411ad6, // -197739.343750
	(unsigned int)0xc8d1926b, // -429203.343750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9345d0d, // -738768.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc5f22650, // -7748.789062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49134b63, // 603318.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x49035997, // 538009.437500
	(unsigned int)0xc9359cd9, // -743885.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc96a4897, // -959625.437500
	(unsigned int)0x4949c55f, // 826453.937500
	(unsigned int)0xc7ad0865, // -88592.789062
	(unsigned int)0xc9357a74, // -743335.250000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4993eb46, // 1211752.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9868bff, // -1102207.875000
	(unsigned int)0xc9712e7b, // -987879.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc89f3d51, // -326122.531250
	(unsigned int)0x4887bf63, // 278011.093750
	(unsigned int)0x49810c2a, // 1057157.250000
	(unsigned int)0x498114fa, // 1057439.250000
	(unsigned int)0xc93d658c, // -775768.750000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49840608, // 1081537.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc89b5d4d, // -318186.406250
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48212e4e, // 165049.218750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc81f20f2, // -162947.781250
	(unsigned int)0xc928f8b4, // -692107.250000
	(unsigned int)0x490dcb7b, // 580791.687500
	(unsigned int)0xc903d745, // -540020.312500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x496b18ff, // 962959.937500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x48b58e07, // 371824.218750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8eec45f, // -488994.968750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x492aa281, // 698920.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98b76ce, // -1142489.750000
	(unsigned int)0x49744f5b, // 1000693.687500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4991237c, // 1188975.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc990d70f, // -1186529.875000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4960e083, // 921096.187500
	(unsigned int)0xc92a3607, // -697184.437500
	(unsigned int)0xc97264d2, // -992845.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4985779c, // 1093363.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x493d3475, // 774983.312500
	(unsigned int)0x4937f771, // 753527.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc905f9b8, // -548763.500000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc957b637, // -883555.437500
	(unsigned int)0x491fd1ff, // 654623.937500
	(unsigned int)0x496fc31f, // 982065.937500
	(unsigned int)0xc96ad5f1, // -961887.062500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x45df27b0, // 7140.960938
	(unsigned int)0x48b0d987, // 362188.218750
	(unsigned int)0x4933be2f, // 736226.937500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8b6f369, // -374683.281250
	(unsigned int)0x491e86bd, // 649323.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x497bb47b, // 1030983.687500
	(unsigned int)0xc9400d80, // -786648.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98f4066, // -1173516.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc958d672, // -888167.125000
	(unsigned int)0x4945fb73, // 810935.187500
	(unsigned int)0xc8ca1e4f, // -413938.468750
	(unsigned int)0xc9773914, // -1012625.250000
	(unsigned int)0xc96766f8, // -947823.500000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x48e225a7, // 463149.218750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc98090bd, // -1053207.625000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc9713926, // -988050.375000
	(unsigned int)0xc9071555, // -553301.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc837257e, // -187541.968750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc96c7976, // -968599.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49165c43, // 615876.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x489c0f23, // 319609.093750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x494e99b7, // 846235.437500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x496cb4c7, // 969548.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc943159c, // -799065.750000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48ca3733, // 414137.593750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8d581cd, // -437262.406250
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9475e7c, // -816615.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48e53e03, // 469488.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc7c77955, // -102130.664062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x490b98c5, // 571788.312500
	(unsigned int)0xc9372799, // -750201.562500
	(unsigned int)0x48eff46f, // 491427.468750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48e0797b, // 459723.843750
	(unsigned int)0xc9168c11, // -616641.062500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc72e570a, // -44631.039062
	(unsigned int)0x495569cf, // 874140.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc92494b0, // -674123.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x48f5e35b, // 503578.843750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4730e916, // 45289.085938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x48f88c93, // 509028.593750
	(unsigned int)0x4928a813, // 690817.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x499458be, // 1215255.750000
	(unsigned int)0xc88defbd, // -290685.906250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48a26bb3, // 332637.593750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8b2c1f3, // -366095.593750
	(unsigned int)0x48c46217, // 402192.718750
	(unsigned int)0xc8cf3dc1, // -424430.031250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49024135, // 533523.312500
	(unsigned int)0x4980c55e, // 1054891.750000
	(unsigned int)0x490f00a1, // 585738.062500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc91cc752, // -642165.125000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8cc7b2d, // -418777.406250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9792576, // -1020503.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49810422, // 1056900.250000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc973d33b, // -998707.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x46d087ac, // 26691.835938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x492835f7, // 688991.437500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x495aab5f, // 895669.937500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x490a88d3, // 567437.187500
	(unsigned int)0x496337c7, // 930684.437500
	(unsigned int)0xc94f99bc, // -850331.750000
	(unsigned int)0x488bc05b, // 286210.843750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc791fae5, // -74741.789062
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8ac3a61, // -352723.031250
	(unsigned int)0xc94ebe8a, // -846824.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8a661a3, // -340749.093750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x49878a16, // 1110338.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48b944af, // 379429.468750
	(unsigned int)0xc95cdd5d, // -904661.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc932fd51, // -733141.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49723d67, // 992214.437500
	(unsigned int)0xc9788ff5, // -1018111.312500
	(unsigned int)0x4922b157, // 666389.437500
	(unsigned int)0xc927ae13, // -686817.187500
	(unsigned int)0x4976894f, // 1009812.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc7f54ce5, // -125593.789062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc700c7ca, // -32967.789062
	(unsigned int)0x48bb9ebf, // 384245.968750
	(unsigned int)0x48c4e323, // 403225.093750
	(unsigned int)0x4975f86f, // 1007494.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x491bfca1, // 638922.062500
	(unsigned int)0x458457b0, // 4234.960938
	(unsigned int)0xc846889a, // -203298.406250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc95c44a8, // -902218.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498737c8, // 1107705.000000
	(unsigned int)0x494e9905, // 846224.312500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x486e6aee, // 244139.718750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x488a212f, // 282889.468750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x491e45a9, // 648282.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8b65fe1, // -373503.031250
	(unsigned int)0x49270563, // 684118.187500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc807956a, // -138837.656250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc89c78fb, // -320455.843750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x465bbcd8, // 14063.210938
	(unsigned int)0xc978357d, // -1016663.812500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8e12aa5, // -461141.156250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x497a18c7, // 1024396.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x495b8fd7, // 899325.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x498dd188, // 1161777.000000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48a53563, // 338347.093750
	(unsigned int)0xc980e632, // -1055942.250000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x491f55a7, // 652634.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8604aba, // -229674.906250
	(unsigned int)0x48b48f97, // 369788.718750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc989cb62, // -1128812.250000
	(unsigned int)0xc95fa1d7, // -915997.437500
	(unsigned int)0xc8c2093d, // -397385.906250
	(unsigned int)0x49146ebb, // 607979.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8af6c99, // -359268.781250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc94633af, // -811834.937500
	(unsigned int)0xc9467840, // -812932.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4922154f, // 663892.937500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc6e67814, // -29500.039062
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9804703, // -1050848.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc9763a52, // -1008549.125000
	(unsigned int)0xc8b67a59, // -373714.781250
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48b8707b, // 377731.843750
	(unsigned int)0x49267ded, // 681950.812500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc91452e9, // -607534.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8698416, // -239120.343750
	(unsigned int)0xc88776ff, // -277431.968750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc98a9250, // -1135178.000000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4961de97, // 925161.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8943819, // -303552.781250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4969c61b, // 957537.687500
	(unsigned int)0xc98b5adf, // -1141595.875000
	(unsigned int)0xc6c8d894, // -25708.289062
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4806f92e, // 138212.718750
	(unsigned int)0xc8fd6bd1, // -519006.531250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc917f4a3, // -622410.187500
	(unsigned int)0xc968a2f7, // -952879.437500
	(unsigned int)0x4988ddb4, // 1121206.500000
	(unsigned int)0xc8aee585, // -358188.156250
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9713d32, // -988115.125000
	(unsigned int)0x46eb932c, // 30153.585938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc965018e, // -938008.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47b183fb, // 90887.960938
	(unsigned int)0x494e42db, // 844845.687500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9737c37, // -997315.437500
	(unsigned int)0xc85a19d2, // -223335.281250
	(unsigned int)0x473ecbd6, // 48843.835938
	(unsigned int)0xc931f77a, // -728951.625000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc99644dd, // -1231003.625000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48b966cf, // 379702.468750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48c0d56f, // 394923.468750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x492c9a77, // 706983.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x495bdc2b, // 900546.687500
	(unsigned int)0xc7ad1695, // -88621.164062
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x47d2521b, // 107684.210938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x494f5ec9, // 849388.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4952d31f, // 863537.937500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x498ddb1e, // 1162083.750000
	(unsigned int)0x47cc7ddb, // 104699.710938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc985a00b, // -1094657.375000
	(unsigned int)0xc8d5e0b1, // -438021.531250
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4990e3e6, // 1186940.750000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc89f01ad, // -325645.406250
	(unsigned int)0x4888187f, // 278723.968750
	(unsigned int)0xc680a954, // -16468.664062
	(unsigned int)0xc97a0ed9, // -1024237.562500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x49002c49, // 524996.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8370576, // -187413.843750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc94bc436, // -834627.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc932e070, // -732679.000000
	(unsigned int)0xc9613e08, // -922592.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47f0c9db, // 123283.710938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4970d7eb, // 986494.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc97eb13b, // -1043219.687500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x47fb06eb, // 128525.835938
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc88119eb, // -264399.343750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4882ed4b, // 268138.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8d3f6b3, // -434101.593750
	(unsigned int)0xc9417259, // -792357.562500
	(unsigned int)0xc81df09a, // -161730.406250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x497cb65b, // 1035109.687500
	(unsigned int)0xc94d8328, // -841778.500000
	(unsigned int)0xc9042e31, // -541411.062500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc96cb85d, // -969605.812500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49887448, // 1117833.000000
	(unsigned int)0x48507046, // 213441.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48f2c96f, // 497227.468750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc75e28ea, // -56872.914062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x47e0210b, // 114754.085938
	(unsigned int)0xc837c88e, // -188194.218750
	(unsigned int)0xc8579392, // -220750.281250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4970ade3, // 985822.187500
	(unsigned int)0x491603bf, // 614459.937500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc93f89c8, // -784540.500000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x49469b0f, // 813488.937500
	(unsigned int)0xc9204019, // -656385.562500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9894a95, // -1124690.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8ca8f69, // -414843.281250
	(unsigned int)0x498c7458, // 1150603.000000
	(unsigned int)0xc995b395, // -1226354.625000
	(unsigned int)0xc9051df2, // -545247.125000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x494f782f, // 849794.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc904fe1e, // -544737.875000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x489064af, // 295717.468750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc8ef0705, // -489528.156250
	(unsigned int)0xc88cbe8d, // -288244.406250
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc962bc76, // -928711.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9399c75, // -760263.312500
	(unsigned int)0xc953a54c, // -866900.750000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9897b61, // -1126252.125000
	(unsigned int)0xc9775622, // -1013090.125000
	(unsigned int)0xc8a04263, // -328211.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48ecea47, // 485202.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x491e90d3, // 649485.187500
	(unsigned int)0xc88b750b, // -285608.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc943aa0f, // -801440.937500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9306afd, // -722607.812500
	(unsigned int)0x48d45a3f, // 434897.968750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47b0606b, // 90304.835938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x490aaa65, // 567974.312500
	(unsigned int)0x4680502c, // 16424.085938
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48d8580b, // 443072.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc975fa7e, // -1007527.875000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x48369e06, // 187000.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x4809ac36, // 140976.843750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8f0bfd3, // -493054.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc98ee626, // -1170628.750000
	(unsigned int)0xc8bdcd19, // -388712.781250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x488406e3, // 270391.093750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc91e25a8, // -647770.500000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc969145c, // -954693.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8cde555, // -421674.656250
	(unsigned int)0x4853fea6, // 217082.593750
	(unsigned int)0x48b3f5f3, // 368559.593750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4947e0c7, // 818700.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x490ae2c3, // 568876.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498e3d7c, // 1165231.500000
	(unsigned int)0x491e6b01, // 648880.062500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc996081b, // -1229059.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49167245, // 616228.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc99641f3, // -1230910.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc905355b, // -545621.687500
	(unsigned int)0x48c6df0f, // 407288.468750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4956894f, // 878740.937500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x494073c5, // 788284.312500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48921e8f, // 299252.468750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9605c8f, // -918984.937500
	(unsigned int)0x48ec24c7, // 483622.218750
	(unsigned int)0xc92f01de, // -716829.875000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4982aa7c, // 1070415.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x497777c7, // 1013628.437500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x482fbfa6, // 179966.593750
	(unsigned int)0x48ca0d83, // 413804.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8a7e057, // -343810.718750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc969e0fe, // -957967.875000
	(unsigned int)0x48c656f3, // 406199.593750
	(unsigned int)0xc9844be4, // -1083772.500000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc973fb5e, // -999349.875000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49237205, // 669472.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9893702, // -1124064.250000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x498c285e, // 1148171.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc9017409, // -530240.562500
	(unsigned int)0xc8a4edff, // -337775.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4445dd81, // 791.460999
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9357877, // -743303.437500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4948eeb3, // 823019.187500
	(unsigned int)0x485fcb8e, // 229166.218750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9832a2b, // -1074501.375000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc862fdfe, // -232439.968750
	(unsigned int)0x48b2d08f, // 366212.468750
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc992968c, // -1200849.500000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4871c546, // 247573.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc95a57c0, // -894332.000000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48cc84db, // 418854.843750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4801b696, // 132826.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47af17eb, // 89647.835938
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9736a82, // -997032.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4979ccbf, // 1023179.937500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc98d4bf6, // -1157502.750000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4890b527, // 296361.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc98451e8, // -1083965.000000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc91327b8, // -602747.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x4710f7b6, // 37111.710938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x497a26e3, // 1024622.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49677ad3, // 948141.187500
	(unsigned int)0x48ba2a8f, // 381268.468750
	(unsigned int)0x493996fd, // 760175.812500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4925ab8f, // 678584.937500
	(unsigned int)0x4936b0ff, // 748303.937500
	(unsigned int)0x494c97d3, // 838013.187500
	(unsigned int)0xc93f4316, // -783409.375000
	(unsigned int)0xc91185c8, // -596060.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x498e06bc, // 1163479.500000
	(unsigned int)0x499242ba, // 1198167.250000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc96495f5, // -936287.312500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x48470896, // 203810.343750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc7f0cdd5, // -123291.664062
	(unsigned int)0x4995a954, // 1226026.500000
	(unsigned int)0xc918b1ca, // -625436.625000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x494e4437, // 844867.437500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc905dccb, // -548300.687500
	(unsigned int)0x4817ac7e, // 155313.968750
	(unsigned int)0xc90314c4, // -536908.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc981c680, // -1063120.000000
	(unsigned int)0xc8a245a3, // -332333.093750
	(unsigned int)0xc5ac7850, // -5519.039062
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8a9d1b3, // -347789.593750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x494c9253, // 837925.187500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x496d1fc7, // 971260.437500
	(unsigned int)0xc9597f6b, // -890870.687500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc8718bd2, // -247343.281250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48c8a45b, // 410914.843750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc91b7087, // -636680.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8dcf4e9, // -452519.281250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47a02beb, // 82007.835938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc979091c, // -1020049.750000
	(unsigned int)0x492db927, // 711570.437500
	(unsigned int)0xc95a1e94, // -893417.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49071f2d, // 553458.812500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x48cd3e7f, // 420339.968750
	(unsigned int)0xc962afda, // -928509.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x491b03f7, // 634943.437500
	(unsigned int)0x497ce953, // 1035925.187500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x493a4159, // 762901.562500
	(unsigned int)0x4993e50e, // 1211553.750000
	(unsigned int)0xc8649a56, // -234089.343750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc986d8bc, // -1104663.500000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc84f335a, // -212173.406250
	(unsigned int)0xc9954828, // -1222917.000000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48ac5cfb, // 352999.843750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc87d8df2, // -259639.781250
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4939d2c3, // 761132.187500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x490d319b, // 578329.687500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8624fce, // -231743.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc95376df, // -866157.937500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8b8bf27, // -378361.218750
	(unsigned int)0x4966b04f, // 944900.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc90aea4a, // -568996.625000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47dbcfbb, // 112543.460938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x4977925b, // 1014053.687500
	(unsigned int)0xc8b5d4c7, // -372390.218750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc991dfd1, // -1195002.125000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9338258, // -735269.500000
	(unsigned int)0xc9726b54, // -992949.250000
	(unsigned int)0xc84629ae, // -202918.718750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9730498, // -995401.500000
	(unsigned int)0xc890115d, // -295050.906250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48fcb067, // 517507.218750
	(unsigned int)0x49675cf3, // 947663.187500
	(unsigned int)0xc92375fc, // -669535.750000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4825aa3e, // 169640.968750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x494bf701, // 835440.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8503926, // -213220.593750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc87ba5ea, // -257687.656250
	(unsigned int)0xc98fb46c, // -1177229.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc768d3aa, // -59603.664062
	(unsigned int)0xc6d258d4, // -26924.414062
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc85df282, // -227274.031250
	(unsigned int)0xc834fed2, // -185339.281250
	(unsigned int)0x49849552, // 1086122.250000
	(unsigned int)0xc97586b9, // -1005675.562500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4976e37f, // 1011255.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9062ae7, // -549550.437500
	(unsigned int)0x490c5c71, // 574919.062500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x494dd8f7, // 843151.437500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8b2bc77, // -366051.718750
	(unsigned int)0x4985197a, // 1090351.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc956c15c, // -879637.750000
	(unsigned int)0x49805ad8, // 1051483.000000
	(unsigned int)0x492e47d3, // 713853.187500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc828684a, // -172449.156250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x498c3c0a, // 1148801.250000
	(unsigned int)0x49095585, // 562520.312500
	(unsigned int)0xc7a21b25, // -82998.289062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc95091e5, // -854302.312500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x48dfb213, // 458128.593750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48f5436b, // 502299.343750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x490be9d1, // 573085.062500
	(unsigned int)0x492215f7, // 663903.437500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x495fa4eb, // 916046.687500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8813179, // -264587.781250
	(unsigned int)0xc8b3ac8f, // -367972.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc8ef135b, // -489626.843750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x483c2e16, // 192696.343750
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x497b8aff, // 1030319.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4933bafd, // 736175.812500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x47c3c62b, // 100236.335938
	(unsigned int)0x46a828ec, // 21524.460938
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498a8d8c, // 1135025.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc9853318, // -1091171.000000
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8e3b1b7, // -466317.718750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc71c6f6a, // -40047.414062
	(unsigned int)0x49751db7, // 1003995.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc985256f, // -1090733.875000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x495d83e3, // 907326.187500
	(unsigned int)0xc96ae757, // -962165.437500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x49162051, // 614917.062500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc980b7aa, // -1054453.250000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x47d0afcb, // 106847.585938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4779a436, // 63908.210938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc913e56f, // -605782.937500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x46f92c6c, // 31894.210938
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc90ce87a, // -577159.625000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x490799a9, // 555418.562500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc863f09a, // -233410.406250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x495457b3, // 869755.187500
	(unsigned int)0xc98d93c1, // -1159800.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9914ed3, // -1190362.375000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x4988c546, // 1120424.750000
	(unsigned int)0xc98fcdb6, // -1178038.750000
	(unsigned int)0x4904f581, // 544600.062500
	(unsigned int)0x47ca97eb, // 103727.835938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x47e757fb, // 118447.960938
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc99310ec, // -1204765.500000
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8a5d22f, // -339601.468750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc938f7a6, // -757626.375000
	(unsigned int)0xc88b7e5d, // -285682.906250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48f015db, // 491694.843750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x48f10d4b, // 493674.343750
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48d09fbf, // 427261.968750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492712bf, // 684331.937500
	(unsigned int)0xc96022f4, // -918063.250000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc913cc3a, // -605379.625000
	(unsigned int)0x49708e6b, // 985318.687500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4907f2a9, // 556842.562500
	(unsigned int)0x491d27d3, // 643709.187500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc969c3a9, // -957498.562500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8c462af, // -402197.468750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc9002dd8, // -525021.500000
	(unsigned int)0xc9500bf4, // -852159.250000
	(unsigned int)0x497c2373, // 1032759.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc94c93c6, // -837948.375000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x47e84d4b, // 118938.585938
	(unsigned int)0xc8b77bab, // -375773.343750
	(unsigned int)0xc995b177, // -1226286.875000
	(unsigned int)0x4960f02b, // 921346.687500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x4987bf58, // 1112043.000000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc6dad6d4, // -28011.414062
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc72f880a, // -44936.039062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x491b6433, // 636483.187500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48c97653, // 412594.593750
	(unsigned int)0xc952e641, // -863844.062500
	(unsigned int)0xc927b8b2, // -686987.125000
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc8ff7def, // -523247.468750
	(unsigned int)0xc91cf796, // -642937.375000
	(unsigned int)0xc8a4ff89, // -337916.281250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9870968, // -1106221.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x4969242b, // 954946.687500
	(unsigned int)0x498aefa4, // 1138164.500000
	(unsigned int)0xc8c31c0d, // -399584.406250
	(unsigned int)0xc8b19c65, // -363747.156250
	(unsigned int)0x4949808f, // 825352.937500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc88b9561, // -285867.031250
	(unsigned int)0x495ae4f7, // 896591.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9906fc5, // -1183224.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48cb168f, // 415924.468750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc91cdd13, // -642513.187500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4969b807, // 957312.437500
	(unsigned int)0x498c2b66, // 1148268.750000
	(unsigned int)0x4925a661, // 678502.062500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc84cab0a, // -209580.156250
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc9412989, // -791192.562500
	(unsigned int)0xc96895f1, // -952671.062500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x490e4333, // 582707.187500
	(unsigned int)0x48bd34cf, // 387494.468750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc994ce13, // -1219010.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x49868162, // 1101868.250000
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc8f7462b, // -506417.343750
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc91bbd28, // -637906.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc7a515a5, // -84523.289062
	(unsigned int)0x47f3f68b, // 124909.085938
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc97fa36c, // -1047094.750000
	(unsigned int)0x49899adc, // 1127259.500000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc832508a, // -182594.156250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8178712, // -155164.281250
	(unsigned int)0x498682f8, // 1101919.000000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc90fa51b, // -588369.687500
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x498e9dfa, // 1168319.250000
	(unsigned int)0xc8928b2d, // -300121.406250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc74c9baa, // -52379.664062
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc938a205, // -756256.312500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492846a5, // 689258.312500
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x488f2f1b, // 293240.843750
	(unsigned int)0x48e955cf, // 477870.468750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x4962f413, // 929601.187500
	(unsigned int)0x488a4bcf, // 283230.468750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc93a875e, // -764021.875000
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc50818a0, // -2177.539062
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc96f23b0, // -979515.000000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48b911c3, // 379022.093750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9165161, // -615702.062500
	(unsigned int)0x48e09373, // 459931.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x492dca23, // 711842.187500
	(unsigned int)0xc8ea1635, // -479409.656250
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x479bc43b, // 79752.460938
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48bd496f, // 387659.468750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x492c81fd, // 706591.812500
	(unsigned int)0xc93c3fca, // -771068.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x48c8915f, // 410762.968750
	(unsigned int)0x48cc9ffb, // 419071.843750
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc9844ba5, // -1083764.625000
	(unsigned int)0x498ec3fc, // 1169535.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49092469, // 561734.562500
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xc9499d18, // -825809.500000
	(unsigned int)0xc96179f0, // -923551.000000
	(unsigned int)0xc9041c29, // -541122.562500
	(unsigned int)0x4787bd1b, // 69498.210938
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9347151, // -739093.062500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48f051ab, // 492173.343750
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc87504c2, // -250899.031250
	(unsigned int)0xc8ab4af5, // -350807.656250
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc932f035, // -732931.312500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xc9433d28, // -799698.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x49803794, // 1050354.500000
	(unsigned int)0x483d19f6, // 193639.843750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8ceb3cb, // -423326.343750
	(unsigned int)0x498356be, // 1075927.750000
	(unsigned int)0xc985f99e, // -1097523.750000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x493683f7, // 747583.437500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x494e96ef, // 846190.937500
	(unsigned int)0x493b3383, // 766776.187500
	(unsigned int)0xc7804af5, // -65685.914062
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49932350, // 1205354.000000
	(unsigned int)0x47e4fd3b, // 117242.460938
	(unsigned int)0xc7bf0925, // -97810.289062
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc97da78a, // -1038968.625000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x481f8126, // 163332.593750
	(unsigned int)0x4993902c, // 1208837.500000
	(unsigned int)0x48992513, // 313640.593750
	(unsigned int)0x48c17403, // 396192.093750
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc93d7abb, // -776107.687500
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9727974, // -993175.250000
	(unsigned int)0xc93bfead, // -770026.812500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xc900b008, // -527104.500000
	(unsigned int)0xc8068b1a, // -137772.406250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8627cfe, // -231923.968750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48d6c607, // 439856.218750
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xffbfffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc80f6092, // -146818.281250
	(unsigned int)0x4842c24e, // 199433.218750
	(unsigned int)0x4950383f, // 852867.937500
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0x49853cd4, // 1091482.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x498596f0, // 1094366.000000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4945e571, // 810583.062500
	(unsigned int)0x4960732b, // 919346.687500
	(unsigned int)0x7f800001, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc929f77f, // -696183.937500
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc98658ce, // -1100569.750000
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xc8376352, // -187789.281250
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49933aae, // 1206101.750000
	(unsigned int)0x48bd55db, // 387758.843750
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x49542e17, // 869089.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4985449a, // 1091731.250000
	(unsigned int)0xc935b620, // -744290.000000
	(unsigned int)0xc96880ce, // -952332.875000
	(unsigned int)0xc907e3a3, // -556602.187500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x47c3338b, // 99943.085938
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc97dcec8, // -1039596.500000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x49930afa, // 1204575.250000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc8f06f99, // -492412.781250
	(unsigned int)0x49808722, // 1052900.250000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x4988939e, // 1118835.750000
	(unsigned int)0x46881bec, // 17421.960938
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0x498931bc, // 1123895.500000
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc954fb47, // -872372.437500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xc9851a53, // -1090378.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xc93d6441, // -775748.062500
	(unsigned int)0xc92c7b98, // -706489.500000
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x48aabc73, // 349667.593750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xc96773c2, // -948028.125000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x496effcb, // 978940.687500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x498486a0, // 1085652.000000
	(unsigned int)0x495edb7f, // 912823.937500
	(unsigned int)0xc985ad2b, // -1095077.375000
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc9772986, // -1012376.375000
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xc91b73eb, // -636734.687500
	(unsigned int)0x7fbfffff, // nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x4891c583, // 298540.093750
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fc00000, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x7f800000, // inf
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7f800001, // nan
	(unsigned int)0xff800001, // -nan
	(unsigned int)0x495a11a3, // 893210.187500
	(unsigned int)0xc88537c5, // -272830.156250
	(unsigned int)0x49789a87, // 1018280.437500
	(unsigned int)0x4920461f, // 656481.937500
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800001, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0x7fffffff, // nan
	(unsigned int)0xc80fd21a, // -147272.406250
	(unsigned int)0xc95050be, // -853259.875000
	(unsigned int)0xc96a9234, // -960803.250000
	(unsigned int)0xc94d2c5f, // -840389.937500
	(unsigned int)0x7f800000, // inf
	(unsigned int)0xffffffff, // -nan
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xff800000, // -inf
	(unsigned int)0xffc00000, // -nan
	(unsigned int)0xc8613eca, // -230651.156250
	(unsigned int)0xffbfffff, // -nan
};

unsigned long int float64s[] = {
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf3bc831d, // 1173424.952095
	(unsigned long int)0x9bb05190, // 112462.850510
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe199a4f0, // 126787.555078
	(unsigned long int)0xcccf8488, // -1106408.800041
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x656cd594, // -226835.049524
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x237c12b2, // 680081.569306
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x170a5830, // 94956.693125
	(unsigned long int)0x46887ef, // 1179668.017220
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x73c9fa68, // -814949.726150
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xc5b7b764, // 339301.443084
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x66dd4ae2, // 978127.700907
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x4472fb10, // 150498.033422
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x60c86b10, // 257709.297257
	(unsigned long int)0x48c781c0, // -20444.348192
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xac2cf842, // -691690.336281
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xda018764, // -249350.981448
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe202e0bc, // -582564.941428
	(unsigned long int)0x48301a44, // -873646.140992
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2d55a116, // 922015.088544
	(unsigned long int)0xb1032f42, // -368781.422864
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xa9604450, // 311900.415406
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x14e50aab, // 1068058.081620
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xedd58078, // 396387.232260
	(unsigned long int)0xcc7ebea0, // -948361.899404
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd9b0aae4, // 731785.425176
	(unsigned long int)0x5d462e80, // 170903.795544
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x972a5f90, // -93676.099406
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x528bcc80, // 12520.393144
	(unsigned long int)0x6ae79667, // -689891.708798
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd4ac6ec6, // -734061.915378
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x838df08e, // -1228225.513885
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe8571c6a, // 929053.953790
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa35ef9e3, // -596163.319084
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x42f13e1a, // 911038.130747
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7d16faac, // 804292.744316
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa82b436e, // 911186.828455
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5e31b602, // 1046136.183973
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x49adc4b2, // -419653.071952
	(unsigned long int)0xb2e52a56, // -1075569.698809
	(unsigned long int)0x899fd0b2, // -890818.768797
	(unsigned long int)0x81a51904, // -995357.253213
	(unsigned long int)0xc03d518, // 161379.255867
	(unsigned long int)0xb823205e, // 972262.859643
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x1f271194, // -481986.280422
	(unsigned long int)0x4ff3f8f4, // 301811.078079
	(unsigned long int)0x4141670d, // -840340.127452
	(unsigned long int)0xc8c8863f, // -579625.392155
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xf95e7104, // 841974.987049
	(unsigned long int)0xda575634, // 394526.713224
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa52f4a00, // -18060.213207
	(unsigned long int)0x7534d088, // 413330.614459
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xb69e8a88, // -224183.964170
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x870be446, // -763592.763763
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe69fb7f0, // 204519.487609
	(unsigned long int)0xf876887c, // 385896.492640
	(unsigned long int)0x7d81c712, // -701193.245131
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdd248110, // 442613.215960
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x8a6cbb71, // -1185854.540722
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4b1b6400, // 2906.234948
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6fd99cd7, // -940183.218457
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x438859ba, // -515302.065950
	(unsigned long int)0x317deb1e, // -418751.548332
	(unsigned long int)0x9cb6398e, // -386697.653039
	(unsigned long int)0xd6bcc065, // -1214906.838818
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xa0ad4d5c, // 515321.156911
	(unsigned long int)0x7ee3305c, // 664769.247827
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x4dd8c80a, // 992108.652045
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x1805bce8, // -234762.636730
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd8a0fb0e, // 539627.923103
	(unsigned long int)0x9cf9295c, // -190542.076647
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xf00a1cc2, // -982145.968827
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe46722bd, // -884679.446099
	(unsigned long int)0xdb2058ad, // -994628.927981
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x67611500, // -5070.927359
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xee9fc7a, // -1048770.058258
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x32e0e6e0, // -1123725.198744
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x47fe51f4, // -958255.640612
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x57c03388, // 571741.671388
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x683149b0, // 128860.962938
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4f5f0, // 71113.875005
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xea66b4dd, // -1217180.915630
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfa6d3420, // -46021.655570
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2f008874, // -409743.295900
	(unsigned long int)0x8dd8b900, // 6302.701383
	(unsigned long int)0xe072df4f, // -1155254.876753
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xd655aeaa, // -446644.959311
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xcc8f92f6, // 958981.399533
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xbcef5e60, // 345207.684507
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6c892e2e, // 909799.211984
	(unsigned long int)0xcff214af, // -659620.406144
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xc20c04ee, // 634685.378998
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd1b4358, // 243875.881400
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x6e0d46e0, // 374892.357473
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x114bf2ec, // -515427.766891
	(unsigned long int)0x95f29c70, // -215641.198217
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x65380f5b, // -594518.197693
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xae156cbc, // -806995.840007
	(unsigned long int)0xe7c6fc7a, // -396438.726345
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xa8ca082e, // 946712.829666
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xd2d304dc, // 521824.205883
	(unsigned long int)0x4c462d0e, // 764671.148973
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x942fb98c, // 354850.644713
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xd463d27e, // -801472.914824
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x85b4353c, // -502024.380570
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xa815dea5, // 1166715.656584
	(unsigned long int)0xa425fcd8, // -282044.910301
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x1d3d07ca, // -1025521.057106
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x570615f9, // 1102776.339937
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc1f2d0d8, // -550062.878806
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7411ed41, // -750958.226699
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4d382102, // 901078.650819
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xb0964a5f, // -863273.844897
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x83d9af04, // -251725.689380
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x5539a358, // -170594.666614
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xcf0b23b8, // -353360.202191
	(unsigned long int)0x4762cc33, // -973245.639426
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5f638e3, // 1160687.023288
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x96de975a, // 528478.294667
	(unsigned long int)0xc3260752, // 653280.381150
	(unsigned long int)0x99191a8e, // 808097.299020
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x22a996c4, // 485792.283850
	(unsigned long int)0x7af427e0, // -618714.740144
	(unsigned long int)0xa46098d8, // -202710.705262
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7e6a8cc0, // 47134.921682
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x501ad2fe, // 939990.156455
	(unsigned long int)0x7e252700, // 30883.476449
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x997b85a8, // -394840.399885
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x642c5bae, // 830012.195651
	(unsigned long int)0x306873d8, // -489539.547273
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x830e4358, // 166856.313992
	(unsigned long int)0x8ff70240, // -673466.781181
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf5c95f6e, // 575999.480052
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xb23b3111, // 1148768.696216
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xddbdeae0, // 574241.933090
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x84d69d96, // -571569.259450
	(unsigned long int)0x9a64903e, // 1044029.801548
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x1598a7b9, // -1041682.042180
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x67064478, // 751507.701220
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xa775a4e8, // -151043.706767
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfe8456d8, // -837576.997103
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xb42498a8, // 178717.212960
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x801a3fa0, // -46710.703138
	(unsigned long int)0xc893cea4, // 287867.195876
	(unsigned long int)0x1cbdebe4, // 489804.528068
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7c76a490, // 113880.342887
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x4292bd60, // 494347.065013
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xee6c8849, // 1151866.931344
	(unsigned long int)0x58f8ea2c, // 669309.673774
	(unsigned long int)0xfa8633ce, // 534374.489305
	(unsigned long int)0x20a22740, // 249874.140934
	(unsigned long int)0xcfd99e80, // 25895.075186
	(unsigned long int)0xaef9c860, // -63996.833859
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xf530f1be, // 587071.978889
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x287f4588, // 568964.079096
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x38d2800, // 9234.961046
	(unsigned long int)0x6743ed64, // -393079.850845
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x369e180, // 18316.109583
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x1dd993d0, // -942163.058301
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x99d9b6e0, // 79035.162561
	(unsigned long int)0xdf2219b6, // 930523.435807
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa0216b41, // 1155739.625510
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x8ce90a, // 1017501.001075
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8ab1ceb8, // 435142.135444
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xb681d8c4, // -826335.856459
	(unsigned long int)0x7610ff6c, // 292362.365299
	(unsigned long int)0xb641e5f4, // -190943.463993
	(unsigned long int)0x1da40d68, // 236607.639473
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xac9c9497, // 1058288.674264
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4a4deb38, // 188260.411281
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xd0c2f100, // -54179.525484
	(unsigned long int)0xed1fe7f0, // -77790.245392
	(unsigned long int)0x7dc21393, // -1045610.745621
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xe68aefc2, // -1051255.900558
	(unsigned long int)0xe018a5cc, // 852716.937688
	(unsigned long int)0xcda77226, // 933401.401668
	(unsigned long int)0xe8a8a1df, // -643570.954412
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3c5aa842, // 874809.117879
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xddc6a400, // 114783.241645
	(unsigned long int)0xf1c065fa, // -951455.472171
	(unsigned long int)0xf388c330, // -422190.987826
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x36bdd6f3, // -1154962.213834
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe454ec5a, // -736725.445960
	(unsigned long int)0x4ec56c2e, // -801762.653850
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x6cd705cb, // -635355.212578
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x63d524f8, // 323370.347493
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9ff70b80, // 10734.645507
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x114fca90, // 171544.883453
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x23d91148, // -335508.285008
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4b7ff3e6, // -423262.323730
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xd540dad8, // -647596.416510
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6d0391b0, // 77768.089115
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x1571a538, // 295854.020941
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x6f30aa40, // -321763.358584
	(unsigned long int)0x2a2b0aec, // -395438.541180
	(unsigned long int)0xb0e2b392, // -410058.672740
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc63b764, // 811089.024198
	(unsigned long int)0xc2f3b3fc, // 500112.190383
	(unsigned long int)0x50195f83, // -634504.656444
	(unsigned long int)0x56f185a4, // -293708.084906
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x2a09651c, // 408642.291051
	(unsigned long int)0x5c2497e9, // 1135051.359933
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc74f7b2f, // -1196729.778557
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdd5c4cb8, // -731351.432345
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x6cdee9c8, // 155321.303160
	(unsigned long int)0x615e8c84, // 513370.595087
	(unsigned long int)0x6a52f0ef, // 1183698.415328
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2aa0c800, // 63440.723954
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1734f2b6, // -676328.045326
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xbb7f57b0, // 352616.433103
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1254833a, // 897250.035801
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xaa26efd4, // -987424.832328
	(unsigned long int)0x1b754dd2, // -446242.526815
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x4289ea0c, // -214398.157490
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x3a76756f, // 1052115.228370
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfb3a07fb, // 1127396.981354
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x537299d8, // 329561.081492
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe5a79f70, // 205306.862136
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x4d3304a2, // -795984.150780
	(unsigned long int)0x66d1bb14, // -478257.850409
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd467618, // -791306.025928
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xa930783b, // 1048882.660896
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x32f6789a, // 862826.099537
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x99febcea, // -774524.800772
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xde534c9c, // -499600.217115
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2db4e95c, // -435080.794635
	(unsigned long int)0x13ac4e29, // -632606.538424
	(unsigned long int)0x2fb4d4e8, // -316496.796588
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xb844bb8f, // -1038063.359899
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x1d7376c8, // 157335.889380
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x67ed38ed, // -993581.702982
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbcd20920, // -51178.648049
	(unsigned long int)0x675db1c4, // -256873.175472
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb371811a, // -777004.850475
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xeef3f114, // -400614.983352
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x84e3bf57, // -910291.259550
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x2e6fc276, // -1227533.181393
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xaf1fd9f0, // 127786.105255
	(unsigned long int)0xb02ae71a, // -418930.422039
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x39217a33, // 1087033.223167
	(unsigned long int)0xc7b5187c, // 842973.390054
	(unsigned long int)0xc21cd2c0, // 76829.859891
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb04d3939, // -637821.844339
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4f06f7e4, // -229445.163588
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6218e520, // -507026.345798
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xcd508904, // 517794.450503
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xb2c39593, // 1123028.698297
	(unsigned long int)0xeeabf600, // 4263.202861
	(unsigned long int)0x793d94da, // 694386.736798
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xde62c9ee, // 951106.434347
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xeae47160, // -174314.614694
	(unsigned long int)0x757ede20, // 764035.729484
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xbf85db70, // 108831.421759
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd72488d5, // -638654.420201
	(unsigned long int)0x6d1d21ee, // 647581.713113
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xef8bb456, // -1168725.935725
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x78b7d28, // -1039129.014736
	(unsigned long int)0x13bfba40, // 21615.844955
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xca0434bc, // -265890.197282
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe9b4c8dc, // 429812.978229
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x4535c3a8, // -754687.635176
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x40527fe2, // 1015844.625629
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x6646f208, // -288642.099880
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7105bb3c, // -783807.220747
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfd9973fc, // 300136.747656
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa9ac3ada, // 559049.331392
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x5a374540, // 155213.794051
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc0d3dbda, // 964170.376616
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x17763ee4, // 762717.045824
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x44a4f538, // 463579.817036
	(unsigned long int)0x3a9d9266, // -601233.114483
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4970aa51, // -1197838.286875
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x4084a7a6, // 654808.126012
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8a68dfd1, // 1072928.540663
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfa53f2a0, // -507137.244461
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ae87a38, // -413502.870027
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6c6ed435, // -1145151.423566
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x3357463c, // -247572.275069
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa5a09a7c, // 653554.823491
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbea8cdc0, // -220551.343095
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x5c563592, // -368450.840173
	(unsigned long int)0x7a8a8392, // 824682.239338
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4e8ee7c8, // -1034935.153434
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xd637e058, // 220293.979599
	(unsigned long int)0x7498713a, // 594596.727726
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x5661724a, // 995318.168712
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x8f7044fc, // 571740.280153
	(unsigned long int)0x33c22ca9, // -791995.101091
	(unsigned long int)0xd3b8634e, // -422097.956758
	(unsigned long int)0xaf45a731, // 1138145.684657
	(unsigned long int)0x58351d88, // 638391.672280
	(unsigned long int)0x9cafacbb, // 1050616.612056
	(unsigned long int)0x2aa57acc, // -379372.041647
	(unsigned long int)0x5dba67c0, // -105813.710383
	(unsigned long int)0x3b9eb39e, // 962987.116445
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x8c6a812e, // -472031.887125
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9835bbb8, // 750617.797285
	(unsigned long int)0xce2b8998, // -175346.225669
	(unsigned long int)0xd5de033c, // 746777.417709
	(unsigned long int)0x253f88dc, // 474503.036375
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xf2ffa29c, // 833608.974607
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xcd81733, // -1191163.050172
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x2b7b0462, // 626230.084923
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd65a868c, // 779403.418659
	(unsigned long int)0x1d230a17, // -773390.556908
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfc958e7, // 1201061.061666
	(unsigned long int)0x8acf06f2, // 659826.771111
	(unsigned long int)0xbd36e6d6, // -491612.184780
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x5c024e2e, // 854521.679705
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x1130f3d8, // 212004.633394
	(unsigned long int)0x79a35a0d, // 1127566.475149
	(unsigned long int)0x1e0b982f, // 1166585.117364
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdd001712, // 913687.431641
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x6efc0b57, // -773825.716767
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x755eee7b, // -778753.729240
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x5b8cb29c, // -978175.178808
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc7083ca0, // -56214.618046
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2530a592, // -778808.572637
	(unsigned long int)0x22df562d, // -1090558.136220
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x78296c24, // 317004.367346
	(unsigned long int)0x2b35680c, // -261087.896098
	(unsigned long int)0xd073190, // 121692.565681
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x622c16c0, // 199289.797936
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xe57c46e, // -1163298.056027
	(unsigned long int)0x55ec7e80, // -88619.833477
	(unsigned long int)0x12d5ed33, // 1172383.073577
	(unsigned long int)0x340cfb93, // 1066396.203323
	(unsigned long int)0x2c45eef2, // -1064339.172942
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd1b0274, // 275557.762798
	(unsigned long int)0x409e414a, // 758557.626207
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfe8ef435, // -1220776.994369
	(unsigned long int)0x471f4850, // -131688.409728
	(unsigned long int)0x9e11b860, // 520278.654364
	(unsigned long int)0x14323d3e, // -766160.539446
	(unsigned long int)0xd0aa141a, // -969429.407548
	(unsigned long int)0x4c463189, // -624199.648973
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8c3b8a04, // 340833.386946
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x82cafcd2, // -821296.255455
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9101fbf5, // 1082638.566437
	(unsigned long int)0xf7cf48dc, // -839682.984003
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x89deffd2, // 981296.269279
	(unsigned long int)0xca9374cd, // -708225.395656
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x43eb0a4a, // -801523.132653
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1e0b5f44, // -473233.279340
	(unsigned long int)0xf0bc3ac0, // 518937.735093
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x3678b200, // -116588.575799
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xeabe2c0c, // -624419.958482
	(unsigned long int)0x66e50200, // -92954.087621
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6a078eaa, // -1121749.414178
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x602e971d, // -897886.687855
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7adf5266, // 862525.739985
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x96ded92b, // 1134737.589338
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x8224e774, // 857037.254188
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x643ec683, // -1074810.391583
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9119b3ae, // -387554.891700
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xee94d963, // -591378.965979
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x9517091e, // 727523.791191
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2d6b6ee2, // 948717.588710
	(unsigned long int)0xf9fb974, // 319939.515258
	(unsigned long int)0x893dfbf2, // 955214.768051
	(unsigned long int)0x7ea93272, // 977716.747385
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf993f1ad, // -524555.987457
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xf6529643, // -1032571.481099
	(unsigned long int)0x760b3d9a, // -666330.230555
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xca37020d, // 1128078.789902
	(unsigned long int)0xc9e37a85, // 1152122.788627
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8e8e8006, // -504752.639215
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9c1379d8, // -260140.826209
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5af7f910, // 720317.677673
	(unsigned long int)0x5d7a4880, // 84435.960322
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xb755e02c, // 791844.858077
	(unsigned long int)0xf2ad6240, // 765933.973979
	(unsigned long int)0x4339276, // -379882.504103
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x957d5470, // -972519.791972
	(unsigned long int)0xba10c994, // -454366.681705
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4a2cbdf4, // 512949.822436
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd45e7586, // -468700.207392
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc2fa35ff, // -1037246.380815
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4d76d163, // -944132.651297
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xd0d72dbe, // -1047685.407892
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x1f3f1e98, // -461183.280514
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xa6e2eed3, // -1128208.651900
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfbea606e, // 619387.992023
	(unsigned long int)0x25586f4e, // 589175.072940
	(unsigned long int)0x69fc8800, // 105597.588376
	(unsigned long int)0xa8d66f4a, // -486771.664881
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa5531b32, // -1223905.645799
	(unsigned long int)0x409502e8, // -772161.126137
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x23f3ec8, // 168166.626097
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xee779dee, // -771787.465756
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb5aca608, // -181977.463708
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe0ec513d, // 1054217.878606
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xde86a848, // 725593.934621
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x72f5c760, // 161730.431133
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5bb04480, // 259638.669770
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8a450c95, // 1127750.540116
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x82708395, // -981342.254765
	(unsigned long int)0xa420c19c, // 356129.410281
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x730529e3, // -570222.724649
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfe95437e, // 593698.997233
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x3466c25, // 1138731.012793
	(unsigned long int)0xb3518118, // -142694.837558
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2cc3ffb1, // -1232184.174866
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xb1939bc0, // 56614.771677
	(unsigned long int)0xf16434b0, // 161474.742867
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xedc01304, // 386219.482178
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9c76bc00, // 1028.735948
	(unsigned long int)0xf214f466, // -894734.472816
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x9f0a8b7c, // 725155.810627
	(unsigned long int)0x83e0ffcb, // 1229530.515152
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf1a85d4, // -235504.007375
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5a30d476, // 681285.676154
	(unsigned long int)0xdcc3ea02, // 850476.931182
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x63160ae6, // -695101.693528
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe6259dc8, // 474392.974753
	(unsigned long int)0x80e41b44, // 405656.875870
	(unsigned long int)0xaf8e3898, // 755745.842882
	(unsigned long int)0xcf2eb600, // -10791.225073
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x28f0624e, // -299762.539979
	(unsigned long int)0xefe1e0c0, // -27665.514641
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x79c6865c, // -418805.118921
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7f0d3172, // -852836.248148
	(unsigned long int)0xf5e2bf40, // 496351.740123
	(unsigned long int)0x7f6958d2, // -997547.248851
	(unsigned long int)0xc9b497d4, // 431083.446978
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7c770ee8, // 830964.743096
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x1f206200, // -7311.797350
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xa58daba8, // 450347.161673
	(unsigned long int)0x4d6f39ce, // -350871.325620
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb1076c90, // 122161.668220
	(unsigned long int)0xbe1ba9f0, // 144468.092826
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xd155f5e6, // -1113464.817718
	(unsigned long int)0x55c03e8b, // 1113773.334965
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xa45d32a0, // 173514.705256
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xcea14231, // -659745.903574
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb368a460, // 283795.425204
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa6c8869e, // -742354.325749
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe6926436, // 593591.950336
	(unsigned long int)0xd685d196, // 994283.918990
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x77639734, // 482186.866591
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x4b811d40, // -35063.352967
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xdea547e, // -1126819.054357
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdd500bb0, // 83073.366531
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4b53fcf0, // -98459.768391
	(unsigned long int)0xd6341f80, // -114022.739796
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x8e105060, // -772561.277468
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x4e73e662, // 886984.653228
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x689ec5e4, // -369684.602168
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8470829, // -1025266.016167
	(unsigned long int)0x5f3a67ec, // 288675.592996
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x63000d08, // -824210.193360
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xf39e4fd0, // 155822.118954
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6f8c07f6, // 650161.717865
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x64a76000, // -3616.307409
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x10b713f8, // -294655.266323
	(unsigned long int)0x17235576, // -340432.022596
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1ca5bf5e, // 844524.555952
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xee39887f, // -981662.465283
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x51ec2398, // -787524.660005
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x848aba33, // -1085547.517742
	(unsigned long int)0x4082a9f0, // 119164.390750
	(unsigned long int)0xdd56b978, // 568541.432302
	(unsigned long int)0x7a25b1a1, // -674310.238569
	(unsigned long int)0x786cf998, // -151342.058802
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xac6fea2e, // 574878.336791
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x276afd92, // -404439.538494
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xed8e37a, // 833513.528998
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xaa7a8185, // 1077310.665932
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x6dc905dd, // -986017.714424
	(unsigned long int)0xdf018c0c, // -1118502.871117
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x52a18b82, // -1031255.161389
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x210ed5a0, // 722208.064566
	(unsigned long int)0xe4bdd8c9, // -978952.446761
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x43d7a5c0, // 330716.066252
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xb07cedab, // 1100397.689406
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x8617f420, // -398219.130951
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x4ef95558, // -796214.654246
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x959080cf, // -554439.792118
	(unsigned long int)0x3e0a2830, // 87432.952646
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x21564fa6, // 1024075.065112
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa0a52b1c, // 597272.313760
	(unsigned long int)0x8bb26d1, // -982963.517053
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x1812ecde, // 980157.547019
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x3f58dcc8, // 152264.780931
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x645315d5, // -1172572.391893
	(unsigned long int)0x26f28de0, // -106879.947009
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8c3e27ba, // 766576.773912
	(unsigned long int)0xde12c654, // -720446.933737
	(unsigned long int)0x8572aa03, // -782137.260640
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9174c508, // -790914.284094
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x37d54c49, // -1111035.218098
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xd347f5f0, // 189587.103165
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xd61bdca2, // -289294.459091
	(unsigned long int)0xa4c227dc, // 348993.160897
	(unsigned long int)0x5fdee0ec, // 520491.093624
	(unsigned long int)0x17618cf, // -542837.002854
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x532c9b5c, // -267360.331225
	(unsigned long int)0xb9bc5908, // 230994.465691
	(unsigned long int)0x709d0322, // -610316.219948
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xaeebaab0, // -808547.341642
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x70420d60, // 66132.214907
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x831e8810, // 366714.878046
	(unsigned long int)0xa04d76ce, // 690637.813091
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x72c8e55c, // 319009.362094
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x740b88a6, // 560494.726650
	(unsigned long int)0x829e97ac, // 285475.627558
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfd389f9a, // -1208040.989145
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd7f40784, // 597532.421784
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x37db2050, // 97572.326137
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x2b6130b2, // 546878.084726
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x74d4c8f8, // 606964.228186
	(unsigned long int)0x1083061f, // 1158237.064499
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfcd5a600, // -103521.499227
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x82699cbb, // -672139.754712
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x5a1c0f9a, // -563163.175995
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x471c5d00, // 839392.138888
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x127c8ec0, // -979081.536107
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xacc9eb64, // -686631.837478
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xeddd101a, // 668603.464577
	(unsigned long int)0x518f4c5, // 1198629.019912
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9500fd45, // -571370.291023
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xdc4a94cb, // 1100348.860513
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc034fd50, // 329410.187702
	(unsigned long int)0xdb3b0d38, // 302033.464092
	(unsigned long int)0x2f468140, // -28358.096635
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7f1183d5, // 1209755.496361
	(unsigned long int)0xcd877be0, // 570032.401424
	(unsigned long int)0xbe164204, // 506015.935632
	(unsigned long int)0xcab27b8, // -511404.512372
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7b7db150, // 418829.120597
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x73cddf32, // -439513.363090
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x137c90d, // 1065401.004757
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc8a8b280, // -12772.599874
	(unsigned long int)0xd1e358e0, // 57687.994371
	(unsigned long int)0x20713a5c, // -530733.563364
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb8efa292, // 681177.861203
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdac68880, // 10535.498864
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xdad2d55e, // 1002320.927390
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5811f2c0, // -164077.918003
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfc6d57e1, // 1096104.986043
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x2ec496ad, // -561358.091344
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x50c16280, // -23272.598679
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x696be252, // 954266.705901
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x69e5531a, // 579687.706828
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1af5dd10, // 842365.552657
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf5bf4eca, // 714872.479975
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb5512ba0, // -209880.338534
	(unsigned long int)0x5479298, // 245814.877578
	(unsigned long int)0x2f414ee4, // 357910.546148
	(unsigned long int)0x9f4d5fca, // -908945.311137
	(unsigned long int)0xc08d904d, // -884133.376080
	(unsigned long int)0x9f3a7f90, // 514649.405497
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x9284b420, // 376787.893084
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9d596351, // 1176050.614645
	(unsigned long int)0xf556f4a7, // 1194701.958358
	(unsigned long int)0x9932219c, // 380295.399605
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x658faf46, // -1094723.396724
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x52931210, // 428720.580639
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x68b4797f, // -1057122.409004
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd7fbef27, // -566481.921844
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa1a8391d, // -1179234.631473
	(unsigned long int)0x2210383, // 1121080.008316
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x71d1e108, // 699067.722304
	(unsigned long int)0x460fd227, // 1120741.273679
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x205f8ff3, // -997950.563229
	(unsigned long int)0x91040b7a, // 1032225.283234
	(unsigned long int)0x3e14c350, // 651440.121252
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x2bc0ef00, // 4593.242855
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x1c74b025, // 1085987.111156
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3abbb00, // -449648.253585
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xcf433b58, // 202140.976202
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd288564b, // -934643.911196
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x608cd8e8, // 258032.297144
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x2378a852, // -715603.569280
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x48aeed8a, // 1041309.641960
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2625a4c0, // 732238.574506
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x88a24184, // -459533.133431
	(unsigned long int)0x6b08490, // -81325.189133
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x49005dd2, // -881378.642581
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xdf15f1e0, // 446027.717857
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x372a3538, // 617781.107744
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7b7f3a9d, // 1181655.482410
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x842c4124, // 262361.629075
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7f252d70, // 70827.218541
	(unsigned long int)0x3fd941c7, // 1204266.249409
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x9b7a5a0e, // -941547.803668
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x6a32c0a0, // 673878.707418
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x146331ff, // 1171544.079639
	(unsigned long int)0x24c5a160, // -44526.535739
	(unsigned long int)0xeeb1de1e, // -421134.983100
	(unsigned long int)0xfe149c92, // -325015.248126
	(unsigned long int)0x575494e4, // 291126.085284
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xcc345d40, // 42329.056177
	(unsigned long int)0x5b44358d, // -556866.678255
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x560ac345, // -1186486.336102
	(unsigned long int)0xbd561862, // -277933.684899
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7a3e0440, // -59867.952422
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1a9a9cbe, // -682289.051961
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xe5e7230, // 359089.014032
	(unsigned long int)0x65f90893, // 1054928.398331
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x728952e0, // -399841.111852
	(unsigned long int)0xaf1ee390, // 143872.960508
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4e9628a6, // 984252.153489
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x54be6ec4, // 273964.582758
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x6b24f014, // 343033.354633
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x98198d36, // 993454.797070
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb723fec2, // -503576.178848
	(unsigned long int)0x39627205, // -940805.612079
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2b9dfcb2, // 828439.585190
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xabe04af0, // 85836.854462
	(unsigned long int)0xd4c2d230, // 210484.728887
	(unsigned long int)0x6a2f36dc, // -880131.207391
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe6cdc24c, // 500273.725394
	(unsigned long int)0xd16e61d6, // 1012884.409045
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xcb185abd, // -862500.896670
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x20cbfc48, // 312894.532028
	(unsigned long int)0xb5e94b2a, // -925605.855296
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x4c87294f, // 1230407.298937
	(unsigned long int)0x939ca555, // -949247.788304
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6a2d42d8, // 833068.207377
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6b4724, // 425168.000409
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xa4f9cc28, // -141534.830555
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x25230180, // -1166708.145065
	(unsigned long int)0x5f9ed609, // -867899.186759
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4fa74416, // 620753.155573
	(unsigned long int)0xee26b1a0, // 556184.965139
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x13a759ca, // 935438.038386
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x29f6beee, // 913240.581961
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x8599c3fc, // 441623.130469
	(unsigned long int)0xff507bea, // -1169779.997322
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x49173fd2, // -936548.642756
	(unsigned long int)0xb292bb, // -654747.001362
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x31993110, // -369642.798436
	(unsigned long int)0xa0ff2540, // 128942.976806
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x64ee33a8, // -601771.697130
	(unsigned long int)0xd1e441ba, // 1008081.409945
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc9eace7a, // 679121.894370
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xb3b1ddbb, // -865382.350966
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xb5174ea8, // 302596.926847
	(unsigned long int)0xa13c0708, // -255698.953728
	(unsigned long int)0xc8d190d6, // -579818.892224
	(unsigned long int)0x338fe49f, // -1040968.100707
	(unsigned long int)0x31a2bf4, // -296942.753030
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xde402717, // 1147261.868166
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf78253ac, // -921243.983416
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x39a01066, // 790943.112549
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xbbc47440, // -57288.991671
	(unsigned long int)0xc80449e0, // 183438.347664
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc9bf0720, // 270462.947018
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x25e8952e, // 920775.074040
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x9c153c0c, // 648417.304850
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x624f8378, // -131672.798003
	(unsigned long int)0xd63d1240, // 312631.209217
	(unsigned long int)0xca579624, // -403491.447600
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xee6e459a, // -603862.965685
	(unsigned long int)0x2e0accf0, // 254751.397482
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x9bac433e, // -1143339.608097
	(unsigned long int)0x69586faf, // -1204987.411506
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9e94c08, // 500421.759679
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xf9c42238, // 177637.746956
	(unsigned long int)0x72b704bf, // 1088983.448105
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xbb8e32c0, // -451659.933160
	(unsigned long int)0xfb9d412e, // 775460.991434
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xd6e007d8, // -460859.959839
	(unsigned long int)0x9c92e0e4, // 500267.902904
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe56a7bf0, // 139627.612020
	(unsigned long int)0x30ec1db8, // 797091.595551
	(unsigned long int)0x60df9d70, // 303271.344603
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa07a9d00, // 11222.825210
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfab9e041, // -1181983.979399
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1b5efce, // 1006439.503341
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xee4c7334, // 857396.965427
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x55372c8, // 371632.755201
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x82e9d550, // -1113507.511381
	(unsigned long int)0x14c8e891, // -1193341.081191
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x3d89f676, // -421317.060097
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf8fe374c, // 854241.986315
	(unsigned long int)0x87777c0b, // -957872.264583
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfed31810, // 100179.749713
	(unsigned long int)0x45ebb72c, // 285663.068282
	(unsigned long int)0xe76ac5c5, // -1028005.951986
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x8030990f, // -535408.250371
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xbae8b3be, // -549323.365057
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdc552fe4, // 367362.715169
	(unsigned long int)0xa932aab0, // 110812.541308
	(unsigned long int)0x83c13dbb, // -611570.757334
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x94447560, // -949772.289585
	(unsigned long int)0x92506f7e, // 783114.285770
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7976e855, // 1222723.474471
	(unsigned long int)0xe1708d3c, // -805413.440312
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x341d14, // 272967.250199
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x54136c18, // 563983.664211
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7579b2ec, // 715028.729444
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x76665417, // -535900.231249
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4c5a018, // -198652.627330
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1ea8d1d8, // 476818.279941
	(unsigned long int)0x5d488df6, // -487330.341097
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa14f19aa, // 711744.815057
	(unsigned long int)0x62a167c7, // -783114.192638
	(unsigned long int)0x1d5e40d, // 1119623.007170
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x89edcec, // -354188.758419
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xcf80b9a0, // -646768.405279
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xed91bf2e, // 864643.964003
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xe042e460, // 340708.469005
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xb9a7742d, // -735058.362606
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa5e3958e, // -1118145.648004
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x79839466, // -382997.868666
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xbca97d6a, // 977851.868481
	(unsigned long int)0x2a31f4e5, // 1100266.164825
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd8ba6968, // 670551.423297
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8651e184, // 568701.762343
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x56592da6, // -495593.334325
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x4ad4861c, // 518358.073076
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x512de9f8, // 848718.158553
	(unsigned long int)0x300d3600, // -456839.296925
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x92cdb8b4, // 841234.286726
	(unsigned long int)0xfea510ba, // 1014035.997353
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xbf9be986, // 644497.374236
	(unsigned long int)0x80477ad8, // -184434.562636
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x19b99945, // 1176592.100488
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2273bec4, // -972261.567289
	(unsigned long int)0x61fc0486, // -711084.691376
	(unsigned long int)0xd2290d74, // 357768.955235
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x96fa811, // -1112341.036860
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb107abac, // 323833.422881
	(unsigned long int)0x9fa3c4f4, // -964432.811796
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa32bf4c, // 708958.019918
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xaff93942, // 968672.843698
	(unsigned long int)0xf203f638, // 593608.472686
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x58b78d3b, // 1224298.346551
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xeb960670, // -939169.460129
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xd523ddd0, // 469929.208145
	(unsigned long int)0xae7f142a, // 907799.840813
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x130f0f24, // 540941.037224
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe3047080, // 52593.590212
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x14ea78e1, // -698696.540851
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xab3efcd6, // -499957.417232
	(unsigned long int)0x73771a68, // -564118.725518
	(unsigned long int)0x45a42861, // -565840.136018
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa38dfe48, // 554873.819443
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x5008c5ea, // 564292.656317
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xaa9b6ee9, // -892625.333217
	(unsigned long int)0x67306b22, // 1005534.201541
	(unsigned long int)0x247bc24, // 440892.502227
	(unsigned long int)0x4852add0, // 186202.785314
	(unsigned long int)0x9598cc50, // 285819.896091
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa9a84ca, // 954519.020710
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xbcdf3f82, // -731636.868891
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x3413d650, // 831288.101714
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x513bcec0, // -729570.658659
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5567e4d0, // -151094.416702
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x42a6f, // 1184805.000064
	(unsigned long int)0x34c5e350, // 642405.103072
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xd1b7b52, // 591542.025600
	(unsigned long int)0xbd0cc278, // 723743.369238
	(unsigned long int)0x19faa47, // -639227.503171
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf01606b6, // 991293.468918
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xd0d43cba, // -291011.703935
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xdaa334d2, // 931769.927026
	(unsigned long int)0x1a98f4cc, // -208020.137987
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xc176959a, // -531010.877858
	(unsigned long int)0xe0d7027b, // -1010097.439140
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd56ec08, // 256390.006513
	(unsigned long int)0xbcd85a30, // 87433.171105
	(unsigned long int)0xa6ed4508, // 144175.956507
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x60763d03, // -1007822.188402
	(unsigned long int)0x5ffee260, // 741100.687491
	(unsigned long int)0x77f7bd5c, // -1052349.468624
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xb0409e22, // 524657.844243
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3945666, // -742985.006991
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x41eb9daa, // 968386.628751
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe240bf40, // -45830.683869
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xca2a58a, // 536042.524678
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xaff393ea, // 861333.343655
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x76c02430, // 522341.865967
	(unsigned long int)0x79e1bfcb, // 1114902.476101
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x755ce672, // 963444.729224
	(unsigned long int)0xbd5b9253, // 1092204.739679
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe2309660, // 430478.720888
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xbd99da76, // 825655.870314
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xea698ff4, // -312785.978918
	(unsigned long int)0xa7359200, // 4690.455676
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xa96353ee, // 577074.330836
	(unsigned long int)0x2cfdf480, // 82208.448484
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xee97bd00, // -18969.420813
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x129aa6e4, // 458391.018168
	(unsigned long int)0x49d25620, // -947811.644183
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd09185e8, // 621645.407360
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x763f1442, // 763282.230950
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2884e860, // 38191.223696
	(unsigned long int)0xc4006a6, // -284128.011963
	(unsigned long int)0xead0a5c6, // -667294.458623
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xf54218d4, // -462671.239510
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x20fb3d45, // 1221260.128834
	(unsigned long int)0x1ac54124, // 571382.552286
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xab1d9502, // -996778.834210
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x5873c6e0, // -786105.172758
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x989b052a, // -546657.298058
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd1728a38, // -1184294.818154
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xc8b79cea, // 576829.892026
	(unsigned long int)0xc6b5d802, // 913267.888106
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x791a9cc0, // 195183.559133
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x275bfa80, // 206752.394218
	(unsigned long int)0x2a15294d, // -660342.082193
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x115ae3e, // 993400.502119
	(unsigned long int)0x5aaf043c, // 306037.588558
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe46fce2c, // -1068549.892331
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x295674f4, // -522909.540369
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd348bc60, // -84743.614083
	(unsigned long int)0xbf87777e, // 1013020.374080
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x94af4040, // 379034.145200
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x98e960be, // -275127.649328
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ee95de5, // -868412.747874
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x4f3e0236, // -378467.327385
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe07969a, // 528513.527402
	(unsigned long int)0x9ccefa18, // -247336.451567
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xf3e0202, // 1045414.529770
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x11dce284, // -817524.034888
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbd97e324, // 589549.370299
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf46bdbc2, // 553009.477385
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf5a792f6, // 807098.479794
	(unsigned long int)0x76559a2b, // -1036632.231122
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8caddc7a, // -711670.274764
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xb77882e6, // 1025041.858341
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xba54f32c, // 495966.681965
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xd13b71c8, // -1112054.817313
	(unsigned long int)0xea25ffbc, // -1065971.914642
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xee02a68f, // -879261.464864
	(unsigned long int)0xf9392e52, // 717748.986764
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x9906f130, // 721475.298881
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2f779b8a, // 937308.592709
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3516b7de, // -1053493.207378
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xaf47e614, // 721504.342345
	(unsigned long int)0xd738b594, // -290463.210177
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xbd9af112, // -1007663.370323
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x1481621f, // -707573.540050
	(unsigned long int)0x2fe880e0, // 195197.148393
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x63ea106d, // 1208639.390290
	(unsigned long int)0xcefbf082, // -721667.404266
	(unsigned long int)0x97b22ef6, // 955755.796281
	(unsigned long int)0xa703f94c, // 534939.826202
	(unsigned long int)0xe204b857, // -1113132.882885
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf835f64a, // -501529.242393
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x3cc1d9, // -921451.500464
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc31cb61c, // 487703.940539
	(unsigned long int)0xa88e0290, // -584751.829208
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xcddb9e66, // -999365.902066
	(unsigned long int)0x3e5b1b2f, // -828004.121789
	(unsigned long int)0x31cad0fc, // 458961.548625
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x22588b, // 1056701.000524
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x184af874, // 808882.047447
	(unsigned long int)0xd89ba4c2, // 1024210.423062
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xae764d8, // 242269.505324
	(unsigned long int)0xfa5082fd, // -630751.488896
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x62180500, // -18961.552862
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xcf8fad9e, // -614026.905393
	(unsigned long int)0x7f9cb22d, // 1052505.498485
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf73d3fd1, // 1181571.965778
	(unsigned long int)0x602762, // 626080.500734
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x6e3a714f, // -566237.715290
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x25b66a82, // -1045738.573657
	(unsigned long int)0x4506c1bc, // 336397.317409
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x11d84996, // -690080.034853
	(unsigned long int)0xea739fa, // 912150.028620
	(unsigned long int)0xcc983a38, // -775598.899599
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6e250326, // -581097.215126
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xc32abd62, // -586016.381185
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x9eeceba8, // 481603.655201
	(unsigned long int)0x1e580040, // -43496.284954
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x29d5b98, // 397025.252553
	(unsigned long int)0xe0ed9e90, // 114584.554914
	(unsigned long int)0xa80e8128, // 354069.664118
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x78970ff0, // -152254.808882
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x162ca644, // -1005245.543309
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x769d413a, // -817052.731669
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x94feab83, // -1078072.582011
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd859bb89, // 1115805.845119
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x844cf211, // -1122248.516799
	(unsigned long int)0x825c8bff, // 1126628.509225
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x4e0121ac, // -570498.152352
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7605df42, // -843215.730514
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x5e3c1546, // 922071.184052
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x871b833e, // -786604.263882
	(unsigned long int)0x346ca00, // 54539.094150
	(unsigned long int)0xc6b942c0, // -65535.930508
	(unsigned long int)0x1df22392, // -347772.029244
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x873c280d, // -594034.264131
	(unsigned long int)0xf7f253d0, // 633237.984271
	(unsigned long int)0x9fd4368e, // 615085.812166
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x716ee3b4, // 766489.221549
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xa42b9db3, // 1217516.641291
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xbbf416b0, // 101361.420887
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xb8426698, // 185776.464970
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1ca31c66, // 776286.555932
	(unsigned long int)0x870449b0, // -97463.845463
	(unsigned long int)0x46789778, // -880608.137639
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x779479f9, // -548017.233555
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4ae11c40, // -65601.393281
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x15e9d00, // 497257.751337
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x2dfd404e, // -925119.089823
	(unsigned long int)0xe601cb4, // 411028.514039
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x88c3373, // -1201148.033389
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x54cd2ab5, // -958013.165628
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3cf3ae0c, // 519793.559523
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5fec58ca, // -1149063.374700
	(unsigned long int)0xf0dc231b, // -650833.470430
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x23feed29, // -700442.070304
	(unsigned long int)0xef517bee, // -288584.233709
	(unsigned long int)0x55d5e894, // -205302.791912
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd0068062, // -289210.203150
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xc9486030, // 424874.946565
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x93dbfd1e, // -599886.288788
	(unsigned long int)0x9ddf7a8f, // 1210984.616691
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe3cedfb2, // 656482.444938
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x4f4df178, // -1124976.309783
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4da61e4, // -491407.254739
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x67c1c62c, // 818326.702650
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x962646a0, // 55030.549579
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x670193b8, // 277404.600592
	(unsigned long int)0x3bd6a980, // 38554.507305
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x236362a2, // -313105.284559
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd3866cda, // 878900.913135
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xf15fec00, // -16064.882366
	(unsigned long int)0x30f360cc, // 399909.047803
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x1b9ec870, // 231423.138486
	(unsigned long int)0xe441ca0a, // -504748.222907
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdb96f1d8, // -906958.428886
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfce5c8d4, // -242557.748485
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8bc92edc, // -567587.773019
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfe052b60, // 173630.249033
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x78d8fc00, // -43873.264752
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x920ab2aa, // -509236.892619
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xf1fa6dd8, // 769921.472614
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x2a9672c5, // 1204477.166358
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x19fe4e37, // -624138.550768
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf232056e, // 1024293.973038
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb4c07800, // 2064.140051
	(unsigned long int)0x519d832c, // -254565.039851
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfa9db035, // 1113595.978969
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x81b7f7c1, // -1107649.506713
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xd319ab46, // 640308.912305
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x97c33836, // 870353.796411
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x92ef20ee, // -1015199.286981
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3fcadc15, // -1182031.249189
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7f223e51, // 1185927.496616
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x72dbf10a, // 808480.224334
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfa9e1f00, // 121888.498686
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x87a03c12, // -649756.264894
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5a70f1a6, // -340585.088321
	(unsigned long int)0x1ae5c18c, // 412670.026267
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5802eb41, // 1164678.343795
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x4ae1aed6, // 676067.146253
	(unsigned long int)0x8d85a7e6, // 952944.776410
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb00c4bea, // -328810.921922
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x6a01da7e, // 930623.707045
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x834192aa, // 980299.256360
	(unsigned long int)0x193ef300, // 38320.628082
	(unsigned long int)0xcfbf7558, // -390138.952879
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc0aa289a, // 884970.376298
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xf9348502, // -1022936.986729
	(unsigned long int)0x235c4f, // -815739.500270
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x25af89d0, // -141735.268401
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x3e0c743e, // -1214145.242378
	(unsigned long int)0x49a5aa5, // 1120353.017980
	(unsigned long int)0xa7595d18, // 438789.663427
	(unsigned long int)0x863f88b0, // 219854.565551
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x12c94399, // 1081899.073384
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xa456da4a, // -423706.410488
	(unsigned long int)0x5627556, // -415514.255258
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xb74f055c, // 268951.429012
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6cc26eb0, // 200648.303105
	(unsigned long int)0xd9565590, // -246728.606122
	(unsigned long int)0x9fbd73e6, // -636475.811992
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xb23a630c, // -721058.348102
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfa7d85f7, // -528096.489239
	(unsigned long int)0xc0a2e400, // 1953.070071
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc50a1fa8, // -534828.384843
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x831e8c60, // -59873.547256
	(unsigned long int)0xab99a338, // 220925.458789
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xbccd4ab8, // 188754.342188
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xa9a0b8bd, // 1156580.662609
	(unsigned long int)0x2690f4a0, // 72169.696916
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x36ee3110, // 147928.776822
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xad8f0e90, // 441078.419491
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x10615d74, // 489440.265996
	(unsigned long int)0x7c4cd4a0, // 33987.765173
	(unsigned long int)0x4b556280, // -62270.509196
	(unsigned long int)0x93410aca, // -642641.287606
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa74f1b98, // 612746.826775
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd74132b8, // -179836.605105
	(unsigned long int)0x63606faa, // 631229.194095
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xef8a940e, // -733209.467854
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8e98d86e, // 654513.278510
	(unsigned long int)0xaac50667, // -907716.833534
	(unsigned long int)0x12af19f2, // -480307.768246
	(unsigned long int)0xf54efd1a, // -267069.489559
	(unsigned long int)0x14cffe50, // 438217.270325
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x74c379c0, // 37664.951753
	(unsigned long int)0x2bf6d6a0, // 131351.896467
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x5d22db72, // -344029.840953
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe604cef0, // 66607.556157
	(unsigned long int)0x8db68340, // 219175.944196
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x76b921c0, // 494680.865941
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xe9a952bc, // 271279.228185
	(unsigned long int)0x51bdeffc, // 401683.329826
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf4f5152a, // 1045393.478432
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf0298cf8, // -184335.242267
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe182cfb6, // 543478.940451
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x3cf82c8f, // -873538.119081
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x64d20060, // -377693.598457
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x400ee86c, // 471251.812557
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xf8b1084a, // 1030898.985726
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xa1f9590f, // -676576.316355
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x8c91398, // -1124171.034318
	(unsigned long int)0x64f33467, // -772320.197168
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa5b377ad, // 1177133.647270
	(unsigned long int)0x30d268d8, // 464812.547678
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x42528df2, // 914717.629536
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x9f7eee7b, // 1138258.623031
	(unsigned long int)0x51820e88, // 795613.659195
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe40a994c, // -792156.945393
	(unsigned long int)0x6deaceb8, // -1078649.429364
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbbe2d19a, // -301196.683482
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3a6553a, // 574295.507128
	(unsigned long int)0xd85d3435, // 1203237.845172
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xaeab078a, // -491813.420574
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb3a4ee18, // -135496.712717
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x36c25e1a, // 757514.106952
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x45e9ff66, // 988992.136551
	(unsigned long int)0xaf3d07a, // 1043863.521391
	(unsigned long int)0x34045e42, // 862710.101596
	(unsigned long int)0x23859d3a, // -1022327.069379
	(unsigned long int)0x7e0de4a0, // 107004.468275
	(unsigned long int)0x59f74cdf, // -1096829.351430
	(unsigned long int)0x8ea35c72, // -359949.389295
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xcbf422e0, // 131166.849587
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x57be345e, // -534353.671373
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x77e4f8bc, // 515753.617084
	(unsigned long int)0x9b0cbf15, // -991748.802832
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x71ad330c, // 310256.361012
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2b3a17e0, // 275985.542214
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5daae722, // 893986.682945
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x41981dc0, // 232212.532028
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9fd1c959, // 1060955.624295
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfbbefbfa, // 741229.491691
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb56cb7bc, // -465580.677173
	(unsigned long int)0x669edc40, // -50015.856277
	(unsigned long int)0x2122a5a0, // 41910.285295
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa595b6ce, // -396948.911704
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x76c7a5a8, // 242709.307998
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x761981a6, // -824200.730663
	(unsigned long int)0x8eefae33, // 1150348.558345
	(unsigned long int)0xb3d80d9f, // 1203010.702515
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x42450d74, // 817227.629433
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe9aa71b4, // 826238.956379
	(unsigned long int)0x683de5f3, // 1163924.407194
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x6f4dad77, // -1023671.717390
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb4cc6459, // -1128852.706244
	(unsigned long int)0x474be418, // -622521.639251
	(unsigned long int)0xc54b59dc, // -806250.385341
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x69770838, // -150660.551497
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x8606378, // 239574.504090
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3a183cb8, // -219823.528367
	(unsigned long int)0xb8561fc0, // -211534.465008
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x93d5c4e0, // -36046.674296
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa5cc5468, // -147255.455956
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xf1f2ec28, // -1139853.945113
	(unsigned long int)0xd56fac48, // -233082.479217
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4e956d00, // -55259.228343
	(unsigned long int)0x4bd79cb0, // -140643.287032
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4b5dd1d0, // 702326.147200
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xcec29980, // 265117.201914
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc48e5728, // 174091.470975
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x72944960, // -393266.111894
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7d5ebdc0, // -46809.515304
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x30a201d0, // -1154673.189972
	(unsigned long int)0x2cf9d3b8, // 853135.587844
	(unsigned long int)0x38d0be11, // -1097912.221935
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xd22fa9d0, // -167299.977630
	(unsigned long int)0xbfb8d608, // 327652.437229
	(unsigned long int)0x439d7d6c, // -424315.316030
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb77432c4, // 329059.179154
	(unsigned long int)0xc51c602d, // -696467.884982
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x975a1ecc, // 342212.147805
	(unsigned long int)0xa6e2ff00, // 41887.582872
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xee1249ba, // 938393.464983
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9cb74d3a, // 937188.306086
	(unsigned long int)0xef5e1442, // -990106.967515
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6071b240, // -1047912.188367
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdcf4c7ce, // 898343.931555
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa5d4a3aa, // -359401.911944
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x896e668c, // 340547.634210
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x701e4d80, // -34271.013686
	(unsigned long int)0xe5409082, // -287357.473879
	(unsigned long int)0xf4e1d8fe, // 859913.978286
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xde118d5e, // 720387.433728
	(unsigned long int)0x3d6fbd2a, // -773587.119993
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x3e04fde0, // 54649.163821
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8a6deb8, // -464776.758449
	(unsigned long int)0xff4c74d2, // 876471.498630
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xa73eddab, // 1207917.653303
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x60c4d4e0, // 143820.797250
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xb600c398, // 241972.838869
	(unsigned long int)0x4d35389c, // 796214.650797
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe0d8c7be, // -491793.469577
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x47b6426c, // 352388.320031
	(unsigned long int)0x6aa8e8b8, // 297176.854160
	(unsigned long int)0xa4580685, // 1189664.641968
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x4e45a57e, // -800228.152875
	(unsigned long int)0xc6de5eec, // -220727.847104
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc21b4e3c, // -264844.939557
	(unsigned long int)0xb53d31d7, // -789084.853983
	(unsigned long int)0xa5ee12b8, // 407266.162041
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdbe6dffc, // -258369.232374
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xa41a0674, // -382284.910256
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xecdab14c, // 485637.231303
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x3f873198, // 239660.656020
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x78f79c08, // 724142.236264
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xef8664b2, // -1151196.935644
	(unsigned long int)0xd01fa12a, // 641743.406491
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xeb6de432, // 923717.459823
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xc043897c, // 291487.187758
	(unsigned long int)0x9f929800, // 64090.644479
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe4aa892e, // 860469.446614
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2e178413, // 1138506.180046
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x9bf66956, // 775678.304614
	(unsigned long int)0xf47630b2, // 968703.977464
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd3256d4f, // 1207334.824790
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x469930c, // 566539.508618
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xdb3bd6e0, // -48223.433012
	(unsigned long int)0x44e4b352, // -532298.134557
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x6155fb94, // -1103828.380218
	(unsigned long int)0xa86363d4, // -315978.414442
	(unsigned long int)0xb1f59f9b, // -738421.847577
	(unsigned long int)0xf174aea8, // 408071.485797
	(unsigned long int)0x1a2ca950, // 233422.387780
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7071b868, // -312564.359809
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xe59c17c0, // -860021.948457
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x362ff736, // 800068.605835
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x44dfaef0, // 407223.567260
	(unsigned long int)0xf110a860, // 49159.873177
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x8ea86580, // -40293.704914
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x866050f4, // -214598.190613
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xc120d970, // -137141.344301
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xbb816658, // 449314.433111
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x69335ab0, // 512817.352735
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x22688924, // -690894.567204
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x1134f6fa, // -1012016.033607
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe0d2b368, // -590381.439108
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xa1632f84, // -209531.078802
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbd737a20, // -420970.185011
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x6eda18e, // 694226.013532
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe1cd19d0, // 137782.985254
	(unsigned long int)0xdaaa1d3, // 1108291.053385
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1f9b235a, // 772042.061730
	(unsigned long int)0x56706cd3, // 1085619.337653
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc61fc368, // 219641.346740
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x336d8fb6, // 916638.100445
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x772278e, // 795105.014543
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x981c757a, // 968756.297092
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x3736b01, // -1179169.013480
	(unsigned long int)0xbc366069, // 1083388.735205
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xd5b52640, // -114251.864675
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xf030f84c, // -1100800.938247
	(unsigned long int)0x4e18b78, // 181887.877383
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x91d9c1ec, // -232927.446216
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x76316ede, // 1000354.730846
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x6f8290bc, // -547074.217793
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfbeadea6, // -1019995.492026
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x5d4f5460, // -635952.182246
	(unsigned long int)0x8dc88ee4, // 349323.888460
	(unsigned long int)0xf3b64146, // 806130.976000
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x20254b7a, // -475105.781392
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xe095e02e, // -966924.438643
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x525f183b, // 1230990.321764
	(unsigned long int)0xc301a3a, // 1042923.523804
	(unsigned long int)0x529eb0be, // 1011392.161367
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x225fb10, // 369095.252098
	(unsigned long int)0xa537136, // -954573.020168
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x80bc94b7, // -1126325.502878
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb85e41c4, // 495475.430047
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xe59e42e, // -1050153.056059
	(unsigned long int)0xf126ad80, // -841346.970998
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x708a74d3, // -528236.219806
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x26d48677, // -684968.075840
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xaa01ab96, // -293083.916022
	(unsigned long int)0x5f48cb50, // 202945.421526
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x4895d8a0, // -466558.320884
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xcf28ca2, // 985079.025288
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xd5f16ed2, // -564350.417858
	(unsigned long int)0xc97d5ab7, // 1184896.787069
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x80b88d54, // 625051.251408
	(unsigned long int)0xec228bfc, // -509694.230601
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe0fc38be, // -908233.939424
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfe88e88b, // 1097097.994277
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xe45a3d8a, // 804662.446001
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xe8c514db, // -837573.454629
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9d7543d4, // 387525.153768
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa81ec698, // 369474.414180
	(unsigned long int)0x3426c470, // 309671.800929
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5a529db8, // 261070.294103
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc6832f0, // -82032.190529
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8c334b77, // 1104176.547658
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6a6ac1aa, // 971664.207846
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x19e040b0, // -514973.525270
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x77f6ade1, // -1232721.468608
	(unsigned long int)0x96d7d108, // 404161.397308
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8fffb854, // -325927.640624
	(unsigned long int)0x5d87e422, // 1031275.682677
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x9294647e, // 974170.286288
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fd63ab0, // -173656.812420
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc0f704db, // 1226473.753769
	(unsigned long int)0x21d187c0, // 95586.383256
	(unsigned long int)0xee17374b, // 1156690.930042
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xa096e1f9, // -556204.313651
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x8b7f50b8, // 668591.772456
	(unsigned long int)0x44c066e8, // 235791.283570
	(unsigned long int)0x716a0990, // 638539.721512
	(unsigned long int)0xfc1cd13e, // -356856.996204
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x93468334, // 279493.893824
	(unsigned long int)0x10c4f858, // 735051.032753
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xff47bc1a, // 966787.498594
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xf19e6fa, // -332400.514747
	(unsigned long int)0x5869a3c6, // 780187.672681
	(unsigned long int)0x60ca2e72, // -481375.844521
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x56e25768, // -143464.167424
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x54a9371a, // 932224.665354
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa49c63c2, // -767247.321506
	(unsigned long int)0x83d4333c, // -232736.189370
	(unsigned long int)0x5b595756, // -384517.589208
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb641d844, // 708204.855971
	(unsigned long int)0xe39a46c4, // -734914.444536
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5f2e58fc, // -1081258.371801
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xcbd04ea8, // 546006.898074
	(unsigned long int)0x5cbf5130, // 758382.181147
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1976270, // 287807.501554
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xf7330545, // -701158.982811
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x8bf747c4, // -870561.773371
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7d0fe774, // 505386.872131
	(unsigned long int)0x4692696e, // 1018515.637836
	(unsigned long int)0x2def87cc, // -255791.022430
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x9f0f7784, // -236198.702666
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf45fe1b0, // -145510.869324
	(unsigned long int)0x5e085f73, // 1138565.367315
	(unsigned long int)0x910baee2, // 823460.283292
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x237ef494, // 377139.784664
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xf23a51ee, // -611848.473101
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x87927cb8, // 230789.816197
	(unsigned long int)0x95ccd5a0, // -492154.896289
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfadd2344, // 399219.744984
	(unsigned long int)0x6bc587f6, // 1039208.210491
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb6392382, // 936148.855905
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5d63b070, // -922757.182401
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2892d100, // -95436.072406
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x61fe8180, // -9396.846741
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc47411bc, // -848780.883698
	(unsigned long int)0xf0fedafc, // 488168.485347
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8d42e700, // 8671.855873
	(unsigned long int)0x8d8421f4, // -938385.776399
	(unsigned long int)0x7b7568c8, // 147845.560283
	(unsigned long int)0x1bcd9ec0, // -50316.659644
	(unsigned long int)0xbc1c9a6c, // 721053.867406
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xac16b3a4, // -506778.668055
	(unsigned long int)0x1ed53ec0, // 628410.060221
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xde32d41e, // -923377.433982
	(unsigned long int)0xa87b9cee, // 686976.329068
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xb1ca5708, // 209018.961812
	(unsigned long int)0x509d794b, // 1141488.314903
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x94fce585, // -833316.290992
	(unsigned long int)0x89754130, // 208726.692118
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6df6dc10, // 95520.589347
	(unsigned long int)0x1ab6808c, // 427607.526087
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x9cdce1b4, // -364709.153186
	(unsigned long int)0x4e68774a, // 900974.653141
	(unsigned long int)0xecf0f0ec, // -231301.115694
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4582f7d8, // -155055.658941
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8f8bea8a, // 950801.780364
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xec1faaba, // -533142.461179
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x1b1c20ee, // 1015026.052949
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xf65e6ff3, // 1058673.962378
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xea57f514, // 500753.228851
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x20c59868, // -1206546.128015
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x29b51348, // 221355.020365
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xd26878e2, // 1023453.910953
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x57e0f4, // 463897.500335
	(unsigned long int)0x2fcabba8, // 835152.593344
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x192abc59, // -727871.049154
	(unsigned long int)0xdb2fe1bc, // -386051.214050
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd951e1c1, // 1161780.848906
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2247a6dd, // -1149080.133906
	(unsigned long int)0x74b3ae00, // -706623.727933
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc6cb7200, // 15362.490442
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xb5e5d40, // 133570.505551
	(unsigned long int)0xc22b2864, // -852364.379236
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7948a1c7, // -1176613.473765
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbf07e180, // -9231.044892
	(unsigned long int)0xcf115e7c, // 303338.702215
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3393deaa, // -702770.600738
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xab98a7da, // 901128.335149
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xd8ac9c2c, // 517772.711596
	(unsigned long int)0x5fe16bbe, // -310923.093633
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x184156d8, // 768472.047373
	(unsigned long int)0x62b6cdbf, // -766712.192801
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x906de63a, // 953171.282088
	(unsigned long int)0x761f6860, // -105468.716339
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xc9f7b2af, // 1099849.788936
	(unsigned long int)0x509ad8c6, // -414878.328716
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xde40a275, // -694017.434087
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x3f91fafe, // -872227.624161
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4ed7227e, // -347980.326993
	(unsigned long int)0xab91eb02, // 764704.335098
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4653e97c, // -584194.637359
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd5beb60c, // -1201457.834941
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x45b0bc9a, // -665935.636114
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xefc98364, // -485324.984167
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4e40e2f2, // 888693.152839
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x65ef21af, // -1159981.398180
	(unsigned long int)0x51237b38, // -149729.164618
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x3d6ee381, // -1200225.239973
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xe4bc6b30, // -898322.446750
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xc5f66860, // 93165.735831
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc12fa39e, // 631602.377317
	(unsigned long int)0x8c33313a, // -779726.773828
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xec850006, // -720028.961952
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5fd7b6c8, // -512642.843596
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x20043ea1, // -811120.062532
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xc9e7139c, // 423343.697171
	(unsigned long int)0x280f03ad, // 1082714.156479
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc141e000, // -13209.646523
	(unsigned long int)0x78e57f48, // -745881.736126
	(unsigned long int)0x787eef34, // 447106.867672
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x89acfe37, // 1209350.537796
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xd02d35b8, // -456882.203297
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8eed7590, // -78750.097394
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xef842648, // 485424.483903
	(unsigned long int)0x182c9e7a, // -423503.523608
	(unsigned long int)0xc1890c66, // -495693.938999
	(unsigned long int)0x554ef3e2, // 750262.166618
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x51c8737d, // 1107289.319465
	(unsigned long int)0x2646c8ec, // 414309.787379
	(unsigned long int)0x8f108ff2, // 608995.779423
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x587263b8, // 730995.172748
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x3807968c, // -998813.609433
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf0dc2292, // 1004017.470429
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1c8552e1, // -635535.555705
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xc14dc6d0, // 77311.484693
	(unsigned long int)0xabb60ffa, // -870446.335373
	(unsigned long int)0xb186fe74, // 798126.846733
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x3dc50514, // -230638.905161
	(unsigned long int)0xf0693708, // -198022.992388
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x38b41000, // 313.614800
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2e400948, // 291368.045166
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xee48b4c, // -256127.632272
	(unsigned long int)0xca7f9172, // 985859.895505
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xdfbf05ae, // -341351.718502
	(unsigned long int)0x68df62df, // -1061484.409659
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xde946a3a, // -338214.717363
	(unsigned long int)0x9ae85a10, // 120283.912819
	(unsigned long int)0xb8b5d1d9, // 1175050.721524
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x371f442c, // -233062.026915
	(unsigned long int)0xb133fffe, // -485694.173050
	(unsigned long int)0x366cdaed, // 1141778.212598
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdb2962a6, // -971153.428050
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x1190c658, // 313944.767154
	(unsigned long int)0xfa93506c, // 291806.994703
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2f2bce50, // -992175.092131
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x283a08d6, // -296465.289284
	(unsigned long int)0x29eed07c, // -450895.290950
	(unsigned long int)0xca33f7e8, // -169877.098732
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x402814aa, // -1173970.250612
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc4f5af2c, // 372332.692343
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc166f320, // -40908.898609
	(unsigned long int)0x91620240, // -946252.783951
	(unsigned long int)0x9699526b, // -580334.294139
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x6cebdc5e, // -263589.106368
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x2fd68528, // 316053.046717
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x5021a400, // -1316.679017
	(unsigned long int)0x53e5beb6, // -881845.163862
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x95b69ab6, // -742748.292409
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x8aa82f84, // -273848.635407
	(unsigned long int)0x2b3d95d0, // 289507.542227
	(unsigned long int)0xc6b20341, // -869873.388077
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfec6b496, // 975485.497610
	(unsigned long int)0x85a71d42, // 696609.761041
	(unsigned long int)0x13c234fb, // 1145518.077182
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd5792f4b, // -831552.916940
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xd2211eb0, // 227527.977602
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x2e47f2ac, // 340778.295196
	(unsigned long int)0x94c8bf70, // 298878.395297
	(unsigned long int)0x263321b8, // 569986.574609
	(unsigned long int)0x188221a0, // 306315.523934
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x39723cf4, // -232720.028050
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xed772705, // -689407.963800
	(unsigned long int)0x1d9f9fa5, // -880108.557858
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xeb08352, // -300157.264345
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8763c8be, // -891269.264433
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9ec3f928, // -162362.702522
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xa1686d2b, // -1221841.630500
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb6a4e24c, // -454069.678363
	(unsigned long int)0x2b08cbc0, // -324096.042026
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xca7a5e39, // -1228879.790930
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf326356e, // 597194.974901
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x1a619a90, // -371177.025763
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x13c0fc49, // 1227932.077163
	(unsigned long int)0xc072db66, // -856575.875876
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xbf48a8be, // -449738.936801
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa664f056, // -757416.324989
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe05c65e4, // 704077.438205
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6a7e154d, // -808278.707993
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xac5b6f7a, // -612035.336635
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x593244ce, // -843762.174212
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x4d5f3de8, // 584685.151117
	(unsigned long int)0x3f0a4a5e, // -453599.061563
	(unsigned long int)0xb80cfe40, // -1023885.859474
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd20ce010, // 658291.910254
	(unsigned long int)0x21bc76a2, // -814732.565891
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe5c9a019, // 1088035.897608
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x622a89a0, // 378848.595865
	(unsigned long int)0x6aee7611, // -1106380.417701
	(unsigned long int)0x41c2ed60, // -82650.891055
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3592794a, // -920301.604633
	(unsigned long int)0x4be2ea6, // 889139.509263
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xeba2c8f3, // 1100880.920453
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf1169792, // -518671.235438
	(unsigned long int)0x58dc90dc, // 833427.173558
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x37af6ec8, // 473392.304380
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x87d3ae10, // 99064.595661
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x91c6fd76, // 680454.784721
	(unsigned long int)0x8b407d63, // -1102484.543953
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xaad3d240, // -69418.166706
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x6f3ac896, // -1091013.434491
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x364ecb64, // 286492.803035
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc2c310fc, // -863332.880394
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1a6bd040, // -146726.887901
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xd7e3d86b, // -1065313.843320
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xe3058c40, // 82426.492925
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x33ec3061, // -1072018.202823
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xbaacf2ec, // -426947.432300
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1af29143, // 1196147.105264
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6cb323a0, // 58544.513269
	(unsigned long int)0x9281bd21, // -557639.286146
	(unsigned long int)0x647dafc2, // 900292.696271
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xd340706c, // -707778.412601
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x2a12ae0a, // -385168.541087
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x86fe6300, // -14361.816620
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb30c23d6, // -659274.349702
	(unsigned long int)0x5011deb6, // 920446.656386
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x85f511c4, // -1028193.261635
	(unsigned long int)0xb897c611, // -920062.360533
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x54d9256e, // 923216.165719
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3ddcc2ce, // 871904.620825
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd0540f74, // -802580.906891
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xc2034de1, // -650225.378931
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7dd7c7df, // -596465.245787
	(unsigned long int)0x67558a0b, // 1050760.403649
	(unsigned long int)0x592ec3e6, // -827935.674185
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xf3697800, // 166582.118854
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdc8af668, // -257761.607687
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xa339e3c0, // -56149.144925
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x12bbb976, // 962740.036588
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf8149dd4, // 590650.984532
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe00e19d4, // -214121.859402
	(unsigned long int)0xe8764f41, // -737461.454028
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3424504, // -204895.501591
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xae57e7bc, // -879758.840514
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xaeb7c858, // 638737.341246
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x5fc0be86, // -371087.593509
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x970bd530, // -131306.323753
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe39b9cc2, // 1034846.944547
	(unsigned long int)0xc9ae33ff, // 1184720.787814
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x2dd7b4e, // 641320.505596
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xc343a2a5, // -1140832.762751
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xa8b5ff9c, // 352536.664757
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x810b4876, // -278434.626020
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x2378f73d, // -1078207.138565
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xc9811f14, // -216333.098391
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x4045b39c, // 461428.812766
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xaa909c30, // -217823.958284
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1aa85f08, // 615527.052066
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd0d3387c, // 821528.907861
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9c4a624c, // -238942.951314
	(unsigned long int)0xe326988e, // -963260.943654
	(unsigned long int)0x2250d08c, // 406584.783511
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xf60c7b5c, // 631965.980564
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2c0bdf7a, // 532687.586028
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5a1eb358, // 188800.169004
	(unsigned long int)0xc2febd88, // -749248.880850
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xeae2f262, // -318451.979381
	(unsigned long int)0x3bb10162, // -820940.116585
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x83a23bcd, // 1077154.514194
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xa0226898, // 193932.203191
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x900dec05, // -1148132.562712
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe2ae8d26, // -792783.942738
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2a35a98a, // -298155.291220
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x940204f, // 1121891.036135
	(unsigned long int)0x53f82363, // 1081949.328005
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x2c842e58, // -1049010.173892
	(unsigned long int)0x4518ef22, // 695406.634956
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x782ed4c0, // -518044.117366
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4492ebf2, // 852470.633933
	(unsigned long int)0x3b4c99f2, // 879047.115819
	(unsigned long int)0x65a57000, // -7984.603113
	(unsigned long int)0x4f23ae44, // 541554.654569
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x49bdacd4, // -1181049.288050
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4f784214, // 298862.077607
	(unsigned long int)0x347f966e, // -573894.102536
	(unsigned long int)0x6895fd66, // -511237.602135
	(unsigned long int)0x40a23f72, // 951061.626238
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8f6e4230, // 769191.280138
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8835fb01, // -556451.766037
	(unsigned long int)0xae45440, // 252433.255318
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6b1ce6a0, // -136470.302301
	(unsigned long int)0x27e0dfcc, // 384594.788944
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x12a2375e, // -886978.536394
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa3bbedaa, // -1014892.819793
	(unsigned long int)0x13fc1c04, // 323530.769516
	(unsigned long int)0x5009e1f6, // -523808.578163
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa9cdae74, // 288089.665824
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7f4d1328, // -1053014.497270
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7177f358, // -897170.721618
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x1975895f, // -848500.049725
	(unsigned long int)0x815e0706, // 807293.252670
	(unsigned long int)0x42ab58c8, // 626506.630214
	(unsigned long int)0x18e3c6e0, // 121875.693577
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xc83a3eb0, // -138991.472767
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xd2cc2259, // -682270.411714
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xaa6caf86, // 1017570.332860
	(unsigned long int)0x7949d6fe, // 896785.236891
	(unsigned long int)0x7b21bbec, // 578711.240492
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x33c102d3, // -1089080.202164
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x6154c53, // 1118963.023762
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6d4d494, // 687903.013343
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3c6fec94, // 393650.809021
	(unsigned long int)0xd7333772, // -757713.420313
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x22a09f84, // 481629.283816
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fdef858, // -434373.874874
	(unsigned long int)0x4b21a34a, // -956796.146741
	(unsigned long int)0x770d7ea4, // 267349.116262
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x477db000, // -24006.941863
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xc5f71fd0, // -73931.423331
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xe8be248, // 153130.882103
	(unsigned long int)0xdf34f3c0, // 25649.076123
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xcc886882, // -931450.399478
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x1d55db8c, // -668059.557296
	(unsigned long int)0x184df4f8, // -1216824.094940
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xb4d407c0, // 16542.870412
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x424b58e8, // 237490.657370
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xd0d059e, // -1090052.050980
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1f69c739, // 1230012.122708
	(unsigned long int)0xbaeb080, // 94548.627852
	(unsigned long int)0x2dde9430, // 438560.294794
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7da385c0, // -90084.968174
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xc01a7d50, // 267620.687601
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc646b51c, // -241549.721815
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x649f260, // -58371.907018
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x63af44f0, // -769621.194697
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7615a514, // -1058183.461268
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb518c9d8, // 291199.176852
	(unsigned long int)0x24fec008, // 224782.893064
	(unsigned long int)0xb8a317f2, // -723927.360619
	(unsigned long int)0x58c1230b, // -653281.173349
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8be8bd87, // -1075099.546520
	(unsigned long int)0x61db3834, // -1185955.382251
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7a8dd3e0, // 347964.119682
	(unsigned long int)0x737b8800, // -1760.547316
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb20353fe, // 763250.847682
	(unsigned long int)0x98ced4b0, // 294637.149226
	(unsigned long int)0x74849268, // -175581.931893
	(unsigned long int)0x9b21e0f8, // -354668.151496
	(unsigned long int)0x3a5698b5, // -1030105.613942
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdb70e6dc, // 410778.464298
	(unsigned long int)0x347ae50e, // -394621.801250
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x4ecb98bc, // 781476.153897
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x25e6867c, // -974669.574024
	(unsigned long int)0xb2ad6298, // 350614.924490
	(unsigned long int)0xcb6e5b8c, // -269957.198663
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xff7c0a7c, // 780105.498993
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7cae87fe, // -667427.743519
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xb3e72309, // -1138341.702746
	(unsigned long int)0x924d6ff2, // -1038949.785747
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x1b8c7294, // 789474.553806
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xb4eb2427, // 1173389.706713
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xdfa13110, // 232120.109194
	(unsigned long int)0x2774a898, // 449084.788531
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x817ea7f2, // -590437.252919
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x70485ce4, // 815641.219302
	(unsigned long int)0xde1ffdc8, // -580432.933838
	(unsigned long int)0xcca77cc9, // -1004955.899715
	(unsigned long int)0xebc63d76, // 967403.960497
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc27f63e0, // 510718.689939
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xa60ed7a0, // -82915.915541
	(unsigned long int)0x909f6000, // 794889.782466
	(unsigned long int)0x93e31924, // -636475.288842
	(unsigned long int)0x309e4467, // -694374.094957
	(unsigned long int)0x665ef7d4, // -189516.424986
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x44e192c8, // -464561.817267
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xa9774ae0, // 384145.415494
	(unsigned long int)0x507d480c, // 835128.657206
	(unsigned long int)0x8c944378, // -1233747.549137
	(unsigned long int)0x8fabebba, // 609653.780609
	(unsigned long int)0x2febbd0a, // 754226.093595
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb7b4cc88, // 210110.839700
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x84739794, // 262741.629347
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x97e8a29d, // 1067906.593393
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc9e1b5b6, // 947111.394300
	(unsigned long int)0x54b6db78, // 718512.665458
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xacd45faa, // -1080053.675116
	(unsigned long int)0xeeb02926, // -356435.483094
	(unsigned long int)0xbaaeba7c, // -604071.364614
	(unsigned long int)0x1f57a0c0, // 779173.061215
	(unsigned long int)0xf05b3a80, // 70657.808681
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x820e5860, // -505895.127008
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1de47c0f, // -820343.058384
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x94c33e76, // 915323.790552
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7bd28827, // 1147542.483681
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf328fc2c, // -315476.737461
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xcca2c8c4, // 403820.199840
	(unsigned long int)0xe2fcf67c, // -505472.721668
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xbe7fa869, // 1147202.744135
	(unsigned long int)0xc53b77f4, // -311715.192610
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7f67e730, // 245231.812210
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x75b7c448, // 598595.729918
	(unsigned long int)0x5b10bb40, // -44919.886116
	(unsigned long int)0xffbb82c3, // -613505.999477
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4935f12d, // 1093748.285979
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x860ec72d, // -760334.261831
	(unsigned long int)0xb942eec, // -1038786.522615
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2aaa71d8, // 839145.583332
	(unsigned long int)0x8fe384c6, // -982062.781033
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbcdf6739, // -692011.368892
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6c4bb962, // 655326.211515
	(unsigned long int)0xee674328, // 548540.965632
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x8abd040c, // 352049.885487
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb4a982b4, // -1086255.705712
	(unsigned long int)0xe313c2ee, // -585121.443510
	(unsigned long int)0x80a59754, // -211821.937816
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x5f07c784, // -968659.685606
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xc9c9e8c0, // -28514.152941
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf1dd4b7f, // -1037490.472391
	(unsigned long int)0x6d89d057, // 1146871.427884
	(unsigned long int)0xf1b16dd5, // -700785.972057
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe1010296, // 974234.439461
	(unsigned long int)0x9c79e9a1, // 1154050.611235
	(unsigned long int)0x3309e0cd, // -1071007.199369
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x168d1058, // -439217.022022
	(unsigned long int)0x832a96ce, // 684737.256184
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x8d36810, // 212774.754309
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5c29b174, // -1191083.360011
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x9583f9dc, // -248164.948006
	(unsigned long int)0x37921be9, // -1010909.108537
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xc4b9a466, // -1087309.768458
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbf8ef2a8, // 271744.687069
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x80edc096, // 775879.251814
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9878ad06, // 1045853.797796
	(unsigned long int)0xaa5e3a76, // 980007.332750
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x55fdddbc, // 366983.083976
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe24667c0, // 450055.720972
	(unsigned long int)0xeb8565a0, // 218371.615001
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xf738c914, // -205030.745714
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xbc81efe8, // 286176.934089
	(unsigned long int)0xe2eed5da, // 618334.443228
	(unsigned long int)0x3dbe43c4, // -231650.780148
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xb5726600, // 3557.770916
	(unsigned long int)0x6b96cc1f, // 1134354.420270
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xb12f3657, // 1110170.692127
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xb40940c0, // 249529.837908
	(unsigned long int)0x4ffa1dda, // -332163.078103
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1eca5ee, // 617764.503759
	(unsigned long int)0xf34b3aa0, // 80633.871898
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3c304f64, // -332160.058778
	(unsigned long int)0x3a41dc59, // -925360.113784
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3bbb206, // -492998.253646
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x46f0d7b0, // 398034.569278
	(unsigned long int)0xc27d6a6, // 985999.523741
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xe7695d4a, // -1195997.903951
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x6bad0752, // 835289.210304
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xe132d3b8, // 174244.484960
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe6eeff80, // -147344.362761
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbac6df50, // -849578.364799
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x94a07928, // 505617.395143
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x251ceb88, // -152710.268122
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x847ac5ee, // 795158.758749
	(unsigned long int)0xb7bf260c, // -310542.679440
	(unsigned long int)0x94b18e00, // -38864.861901
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1c2f1e80, // -521308.777523
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x543cb087, // -893165.164526
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb384352c, // 807316.350618
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8195f394, // 394575.376549
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x104cb78a, // 766489.031835
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x8f3330a8, // -167763.819922
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xca9ad388, // 208481.098928
	(unsigned long int)0x60030670, // -575681.687523
	(unsigned long int)0xa63c93b4, // 391979.662340
	(unsigned long int)0x1e851880, // -1106296.119218
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xa44d8c57, // -1062595.641808
	(unsigned long int)0xd86fb94a, // -720232.922727
	(unsigned long int)0xb19942d4, // -253371.086718
	(unsigned long int)0x209691c0, // -37866.816478
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xccd90f00, // 721739.400094
	(unsigned long int)0x479c7d1, // 1135427.017483
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xeba5da20, // 95753.620031
	(unsigned long int)0xf1fc0bb4, // 577012.472626
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x72d9ec53, // 1086710.448638
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x18805700, // 357338.773927
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x337443c7, // 1154835.200993
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7d6f43f4, // 507861.622495
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x1ef36910, // 110936.632556
	(unsigned long int)0xb81cf834, // -910941.859596
	(unsigned long int)0x93cd5eb2, // -1037357.288676
	(unsigned long int)0xb730f180, // 13531.497778
	(unsigned long int)0x371d2c35, // -601675.607644
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x971073ad, // -647831.795047
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xd8291b08, // -718829.922189
	(unsigned long int)0x8f00b11d, // 1118473.558604
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4acc9970, // 719420.146092
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x1e123276, // 1034108.558733
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x68334500, // 30785.178235
	(unsigned long int)0x573c744e, // 779150.670383
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x78af9040, // 200275.933929
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x84bd729a, // 959709.759258
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x80e4ec4, // 845851.515734
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x94e1f1a, // -579178.018174
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x5cf35380, // 62436.823846
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x74064020, // -130222.778326
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x1e5528e3, // 1088501.118487
	(unsigned long int)0x57fbb3e4, // -637754.671842
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xa0e85118, // 725788.314272
	(unsigned long int)0x33df287e, // -858680.101312
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8c5c48a4, // 270531.137071
	(unsigned long int)0x7c08d6f0, // -111602.030282
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7269355c, // 402881.111729
	(unsigned long int)0xf776f3e6, // -277697.241665
	(unsigned long int)0x3af60ed9, // -993056.115159
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6bbbc4c4, // 340201.105208
	(unsigned long int)0x714abc5, // -598060.513830
	(unsigned long int)0x36367a9f, // -1127116.211769
	(unsigned long int)0x82e3d822, // 877425.255645
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x74058a9c, // 509686.613302
	(unsigned long int)0x85e4d0f2, // -550757.761511
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x39166ea2, // 1044355.611499
	(unsigned long int)0xad402540, // 121939.854798
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xf1e392e4, // 610091.972439
	(unsigned long int)0x609c6e28, // 776567.188693
	(unsigned long int)0x6c92f10, // 88663.751657
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x207546ce, // -1020334.063395
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3e88a518, // 139114.155534
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ba0b52c, // -1124324.482921
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa2030225, // -753723.816429
	(unsigned long int)0x119af3c4, // 264882.267193
	(unsigned long int)0x6017b450, // 359458.593840
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x87968453, // -946685.264820
	(unsigned long int)0xb14edd92, // 965391.846305
	(unsigned long int)0xb0664f60, // -1011211.344531
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xe5e758f2, // -872991.949031
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x281d85ba, // 872826.578350
	(unsigned long int)0xb048b00, // -128993.690190
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xca8c5f74, // 802432.895602
	(unsigned long int)0x2e99bf00, // 768594.591017
	(unsigned long int)0x101476e0, // 233413.882852
	(unsigned long int)0x375c459b, // -546745.608126
	(unsigned long int)0x72879986, // -969749.223691
	(unsigned long int)0x33d0e3fe, // -995129.601203
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x22d60267, // 1227472.136078
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x85f524ce, // 572509.261636
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x17b3e6de, // -1117446.092589
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x6af04c14, // 357654.854432
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfa62cfab, // -1112425.978070
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1bf3e86d, // -1043588.054595
	(unsigned long int)0x96b594ee, // -541460.294354
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xaecb31ca, // 997612.341394
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3b9c3ac0, // 572946.616426
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3747726e, // 1002960.607967
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x6209fcb, // 1221891.023935
	(unsigned long int)0x6f86f6be, // -971109.217827
	(unsigned long int)0x33ea3e20, // -158383.275349
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x50dbe7ae, // 910494.157928
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x1f9ce6a, // 839992.503859
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb6561b98, // 222562.964031
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x135c5680, // 44031.127363
	(unsigned long int)0x8dd83b35, // 1124502.554081
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xa3504a3e, // 936181.818972
	(unsigned long int)0x4dc89e5b, // -1208813.303842
	(unsigned long int)0x833f05c8, // 302077.128170
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x1a25a6f7, // -601645.051069
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x45a6583c, // 344472.318017
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xba5be9d0, // 258315.340996
	(unsigned long int)0x73786c40, // 123365.653191
	(unsigned long int)0x4c76ff20, // 384556.074673
	(unsigned long int)0x9913c480, // 13115.082797
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x389c43f6, // 1042416.110567
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc8fb13a0, // 63803.368284
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x6660f896, // -825194.199959
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xed2c5b09, // 1061404.926458
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5950cfb1, // 1082102.348889
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xcd006cfa, // 712005.900394
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x9aa4b040, // -89338.475255
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x81289dd4, // -1145409.504526
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8c786602, // 795484.274356
	(unsigned long int)0x743ad1d0, // 93752.590876
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x53d063c4, // 759009.663699
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x91505d70, // -121614.410477
	(unsigned long int)0x8d597044, // 473346.888036
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc2535d22, // -273728.939771
	(unsigned long int)0x97e095f0, // 392359.898318
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xf88955d3, // -1136788.970846
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x74589069, // -1100288.454476
	(unsigned long int)0xab6ddcc3, // -592582.834823
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x80c8ed74, // -990620.251533
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x302e8bce, // 913421.094105
	(unsigned long int)0x847a1e96, // -940283.758744
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb1b8d37a, // -272578.173557
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa924e9e4, // -1041866.830360
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xddc45570, // 89104.804142
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x8e559180, // 427706.888998
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x32cf57b8, // 778080.599238
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd5bbf2c6, // -870860.417450
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4ef37ade, // -714198.154201
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x55349cd6, // 634395.666417
	(unsigned long int)0xd90d3d21, // 1184561.847858
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x94c45fc0, // -67496.786320
	(unsigned long int)0x485e7d78, // 590028.141346
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb460561c, // 343201.426149
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xd017672c, // 366915.203214
	(unsigned long int)0xab72d72d, // -832595.834861
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x68a0d330, // 94483.088044
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc0082c94, // 344252.937531
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xee73df0a, // 567645.965728
	(unsigned long int)0x9ccef1d0, // -152737.576567
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xbb84bb7f, // 1194179.732494
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xbdf68ca4, // -855192.371022
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xa19398a0, // -227779.328895
	(unsigned long int)0x85442a58, // -204745.815071
	(unsigned long int)0xfe97b430, // 119095.624656
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x97faab60, // 59194.393552
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbc985b98, // 210191.967087
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2aaa3500, // 243722.770832
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xb868b876, // 547452.860174
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xb0d89904, // 798144.845403
	(unsigned long int)0x9ff36f20, // -61495.957025
	(unsigned long int)0x8544e04c, // 764930.760291
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x4f6bcecc, // -410893.827560
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x5de86d2a, // 810195.183414
	(unsigned long int)0x54f54f90, // -136032.041484
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb5f42d90, // -492607.677689
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x69113b16, // 976112.205210
	(unsigned long int)0x2d2f152e, // 924207.088250
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xb94f1eb3, // 1142758.723864
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x862dab58, // -145841.440517
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xb0f790e0, // 595446.345639
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x609b4f5f, // -593017.188685
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdfd25804, // 359635.218576
	(unsigned long int)0xe219d9ed, // -901178.941603
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc4001a0a, // -698226.382813
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xacb7b982, // 1022349.837339
	(unsigned long int)0x8af96b3d, // -901907.271434
	(unsigned long int)0xe6c4618b, // 1114478.901434
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x9343480, // 225448.004494
	(unsigned long int)0x31083db4, // 622176.595766
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbbda5e34, // -262344.183450
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xf3667ee2, // 1011693.975391
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x23810d1a, // 920094.569344
	(unsigned long int)0x1056c509, // -756561.531912
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x57ea6feb, // -1100349.343421
	(unsigned long int)0x139ce418, // 182858.009577
	(unsigned long int)0x28cb3c5, // -1200905.009959
	(unsigned long int)0x9f764ab7, // -620684.811449
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfb474a4e, // -520517.245389
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x48efd326, // -457036.821227
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x86d6904a, // -506439.881678
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x80310f20, // -56565.078148
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x1de9f706, // -1138718.116851
	(unsigned long int)0x46a32e98, // -166775.784491
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe2e39bec, // 795427.943143
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x13b174a0, // 562960.038463
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4b0e29b8, // -318051.323296
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe6c0d088, // 282439.225345
	(unsigned long int)0x9269dc5, // 1123291.035745
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x135f7b80, // -316175.018919
	(unsigned long int)0x53937591, // 1112768.326469
	(unsigned long int)0x8f153dcc, // -1109810.558918
	(unsigned long int)0x7330743d, // 1175447.449958
	(unsigned long int)0x994925d8, // -722108.799386
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc9e8a9c0, // 49602.055897
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1f819f0b, // -860729.561536
	(unsigned long int)0xd9d75bcc, // 371225.962736
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf28ea08c, // 351045.236872
	(unsigned long int)0x7453950a, // -725060.727200
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xbf901c36, // -982252.374146
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x897ff71f, // 1224691.537109
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8d79c06e, // -1038473.276320
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x157b9bd2, // 983746.541959
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xadf0ef9e, // 696429.339729
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xbdf98b58, // -180711.967761
	(unsigned long int)0xdcb983e2, // 961473.431103
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe6f9c437, // -1116038.902249
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x535458e, // 872253.010172
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa293703c, // 505300.908766
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x4f76e234, // -489474.077602
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6944f4d8, // 171223.801401
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffd125ca, // -266028.499821
	(unsigned long int)0x95dd9948, // 272146.396353
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xcf021a92, // 1042421.904313
	(unsigned long int)0x1819bf31, // -567147.047071
	(unsigned long int)0x4cfa1ea8, // 156459.412586
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x4c97da90, // -83656.956200
	(unsigned long int)0x7d96bb06, // 875291.745291
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfd3db568, // -361298.497306
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xe73f54ca, // 546904.951655
	(unsigned long int)0x62501eb6, // 1009313.192018
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x6c88baab, // 1181388.423961
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb817fc98, // -297079.429779
	(unsigned long int)0x267a9bdf, // -1001416.075154
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xbdcdb930, // -253111.592678
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4ef16240, // -18976.473568
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8ebe2e1d, // -1006062.778795
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x2c4eebd4, // 354684.293270
	(unsigned long int)0x53907f80, // -29208.755100
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf911dce0, // -894707.986464
	(unsigned long int)0x6e8d8608, // 310458.357962
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7d30f182, // 1043354.744514
	(unsigned long int)0x343f6000, // 396501.801023
	(unsigned long int)0x958af6d1, // -558238.292076
	(unsigned long int)0xd4b7f1a8, // 317738.957733
	(unsigned long int)0x25c966c0, // 595043.073802
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xa500a568, // 489383.661135
	(unsigned long int)0x51e2efc4, // -1070419.319869
	(unsigned long int)0x26203ec8, // -1079363.148930
	(unsigned long int)0xd523ca84, // 350350.208144
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb62f64d8, // -156324.463958
	(unsigned long int)0xe28f30a0, // -75696.742812
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xdca5d60d, // 1055791.861905
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfc758539, // -580178.493084
	(unsigned long int)0x8003a670, // -167645.062507
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x9c25517c, // -497016.152486
	(unsigned long int)0x63308cf6, // 960386.193730
	(unsigned long int)0x12c85618, // 699359.536685
	(unsigned long int)0x534df8f2, // 1018752.162704
	(unsigned long int)0xa65cac7, // 1187891.040616
	(unsigned long int)0x5b83d802, // -881034.678740
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8a71f1e8, // 497198.135200
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x325994be, // -953194.098340
	(unsigned long int)0xdd05cf62, // -624206.931685
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa6cd76d5, // 1154225.651573
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xc68ac1d6, // -849656.387777
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x9c5f49fe, // 1003911.305414
	(unsigned long int)0xaa94a270, // -172122.333291
	(unsigned long int)0xe35c850, // 344477.513877
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x2ac41d30, // 179148.895882
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x6a1d468e, // 545181.707255
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x50bbea5c, // -651784.657684
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x165b6cbc, // 373104.521833
	(unsigned long int)0x5a2cdbb4, // 819530.676123
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xde74fb96, // -381274.217243
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x2b184720, // -587955.084170
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x584728ff, // -1126695.344836
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x19c30c00, // 16356.750786
	(unsigned long int)0x8efc5bba, // -314993.139635
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x2b7b350a, // -741378.584924
	(unsigned long int)0x7910984c, // 668713.236455
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc59a642b, // -978183.385944
	(unsigned long int)0x34678fc0, // 95486.762794
	(unsigned long int)0x87bda7c0, // -28382.758285
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x525b09d0, // 195510.790213
	(unsigned long int)0x638126a0, // -394736.847172
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xddd6934, // -522278.263540
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x94e0ac70, // 175803.072694
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x65519ceb, // -672439.197888
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfc86b843, // -596856.493215
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x14d24bf0, // -261589.635167
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x42adcd5a, // 1039290.630232
	(unsigned long int)0xf7725293, // 1117703.966588
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x4fb79cd2, // 890720.655698
	(unsigned long int)0x97266330, // 343387.897607
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb5ac6b6a, // -458532.427416
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd16c2184, // -727700.409028
	(unsigned long int)0x8b075be2, // 737889.771541
	(unsigned long int)0xeaa5511e, // 956978.458293
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xd8547273, // 1100744.845039
	(unsigned long int)0x9b28ee28, // -1019871.303047
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xd522ef4, // -380883.263009
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xaf35700, // 244942.005347
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x19076052, // 1013258.548884
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x651f7ef0, // 846900.197506
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x3f460970, // 219760.155895
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x3589a796, // 789508.604566
	(unsigned long int)0x4c908d2, // -976638.509346
	(unsigned long int)0x48815076, // -383772.320806
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xbc28e812, // 678321.367500
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xa9b090d6, // -481200.915713
	(unsigned long int)0x9d6e7961, // -1077818.614967
	(unsigned long int)0x2202ef65, // -691312.066429
	(unsigned long int)0xd4aadb47, // -575637.915366
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xa72c360e, // 567162.326509
	(unsigned long int)0xf8ff7e82, // -962971.486324
	(unsigned long int)0x366a4640, // 35448.319142
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xd17068f7, // 1120230.818121
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x674d92ec, // 519641.100882
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xa07fe440, // 24510.837921
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x67f904ea, // -667352.703072
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x859a358, // 205314.254077
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9a184f4c, // -912235.300967
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa41aa6ac, // -195742.080129
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xd2200476, // -481471.705200
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x20272998, // -133469.515700
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf3a6bd3b, // -752860.475881
	(unsigned long int)0xa767f27c, // 389957.663482
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x57f0c22b, // -957984.671759
	(unsigned long int)0x7a6e1aae, // -336898.619561
	(unsigned long int)0xdf14c038, // -828602.935705
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x28045ab8, // 636823.578158
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xdcc602dc, // -296204.715599
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xd7b7dd4a, // -305700.210662
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x12161923, // -1069513.070650
	(unsigned long int)0xf7f78a22, // -351000.992155
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x73b28054, // -990214.225971
	(unsigned long int)0xada80508, // -760866.839173
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x3f237480, // -215101.780829
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3ef7a68a, // -968267.622983
	(unsigned long int)0xdcb8c576, // 972716.931097
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x386b4fd0, // 825472.610194
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xade6d184, // 425215.919826
	(unsigned long int)0xbf172484, // 516119.686612
	(unsigned long int)0x21d94351, // -637015.066111
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x573161f6, // -502457.335149
	(unsigned long int)0x999291f0, // 74218.349993
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x69b5c642, // 701265.206465
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xcef1c932, // 679629.404188
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6d911be0, // -129996.526750
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x79e592d0, // -168529.309520
	(unsigned long int)0xc2d0cf08, // -197470.595125
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd6445400, // 49906.838656
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x3bc45568, // 414191.808366
	(unsigned long int)0x47639fe8, // -966012.639432
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x8f980cc6, // -511769.640228
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x541c779c, // -408769.582140
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe801d762, // -1045590.453139
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xe615f4b0, // -228022.237347
	(unsigned long int)0xc843348a, // 1040966.891138
	(unsigned long int)0x409a5776, // -499854.813089
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x51219f6a, // -1009795.658460
	(unsigned long int)0xf8ad5eb8, // -1196386.971395
	(unsigned long int)0x99128924, // 774061.798970
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf8c1fd00, // -6758.007702
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3445244d, // -806074.102090
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xec063347, // 1136630.921970
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5f3a494a, // -683454.685992
	(unsigned long int)0x85f27c86, // 550375.261616
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe53bbc1c, // 488887.723861
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x71fd2da0, // 377631.111317
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6447fc06, // -760596.695862
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfa6f670e, // -730505.489131
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x53ca46d0, // -82322.707957
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf582fb28, // -507673.989757
	(unsigned long int)0xa1b906af, // 1056608.631730
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xccaae086, // 591346.899741
	(unsigned long int)0x1c4fb007, // 1192347.110591
	(unsigned long int)0xbd932e3a, // 763015.370264
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x2c2a189c, // -491486.793129
	(unsigned long int)0xd5fcc1c2, // -375569.958972
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x39e21980, // 559625.613053
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa6808e4a, // -534460.825200
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x92f7105a, // 1032720.787041
	(unsigned long int)0xb90ace1f, // -695752.361411
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7d93e55f, // -738626.245269
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc7625611, // -538831.389422
	(unsigned long int)0xa3c864e0, // -129121.727486
	(unsigned long int)0xb92b7200, // -342768.680830
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb4333a3, // 1093133.043994
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x83d5775b, // -703470.757488
	(unsigned long int)0xa8d82450, // 106956.478722
	(unsigned long int)0xe406d194, // -1155039.890729
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdd79e4c8, // -158288.608143
	(unsigned long int)0xff3f79c4, // -957201.498531
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xcd7f9212, // 953958.401364
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc0b047e4, // 544226.876345
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x486b2ec, // -428935.004420
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xe001e645, // 1084037.875029
	(unsigned long int)0x2994e740, // -119927.760152
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x9711fed0, // -88072.849382
	(unsigned long int)0x2bea4cb0, // -1107688.171544
	(unsigned long int)0x9c018680, // 28289.306397
	(unsigned long int)0x57aceb3c, // -206395.667810
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x47cb4284, // -875271.640223
	(unsigned long int)0x7b630ce3, // -972180.240990
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x8f8edb86, // 1010178.780387
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa535207, // 1114285.040334
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x58eb2854, // 329805.086835
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xee6d0dfd, // 1155122.931352
	(unsigned long int)0xdee446b2, // -390978.467668
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xbcb7f0cc, // 304410.684295
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9f15507d, // -938206.810709
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xff923644, // -848061.499162
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xe3841e38, // 348503.722184
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xb61eee80, // 52772.397232
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7e34a1b6, // -307904.123248
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x3991d667, // -705622.112441
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6fea811e, // 812490.718586
	(unsigned long int)0x50f790ca, // -447861.079069
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xcced88d4, // -309823.450125
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x3d7c0fe8, // 415955.310044
	(unsigned long int)0x731f0398, // 393067.112423
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x89924269, // -1186962.537388
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdb64b002, // -956904.428503
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7e5e67dd, // -763337.246814
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd15cf8b0, // 253864.477228
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xb7e4760, // -465343.261224
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1f9186ef, // -555965.561657
	(unsigned long int)0x29f732c0, // 605320.581964
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x36b67aaa, // -561174.106861
	(unsigned long int)0x6d0c1604, // 486947.106491
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfaa9bf24, // -811378.489576
	(unsigned long int)0x86e5b620, // 59637.391467
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5746e939, // -859357.170463
	(unsigned long int)0xebba9445, // -1228444.920816
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xb2347402, // -1170240.696113
	(unsigned long int)0x7fef3d56, // -379080.124936
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x2e9a7f5c, // -493676.295511
	(unsigned long int)0x6607b42, // 730934.012455
	(unsigned long int)0x963a4faf, // 1190467.586827
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3f01bd1c, // -256204.530765
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xae8b0f4c, // 521915.920452
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xf456120c, // -868581.977219
	(unsigned long int)0xfcb70c98, // -483115.246792
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xbfe1dcda, // -280357.687385
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xdeec95c0, // -210260.108850
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x41612752, // 946238.127694
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xa1662ccc, // 497014.157616
	(unsigned long int)0xd1290f85, // 1200009.817033
	(unsigned long int)0xa70e2288, // -1207673.652559
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xb451f810, // 515005.926094
	(unsigned long int)0x8d32228a, // -1047808.275773
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x973a8e4, // -928765.018461
	(unsigned long int)0x8d7bbe64, // 499545.638167
	(unsigned long int)0xa8614a5a, // 866355.328867
	(unsigned long int)0x11260ea2, // -355665.266747
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x678af09d, // 1100892.404464
	(unsigned long int)0x9fd3eaeb, // 1148688.624327
	(unsigned long int)0xc28a82d0, // -233366.719991
	(unsigned long int)0xb7866058, // -563002.358447
	(unsigned long int)0xf467c1a0, // -439636.988677
	(unsigned long int)0xa314e0e8, // -149441.329630
	(unsigned long int)0xf7b3d9ca, // -1047915.983794
	(unsigned long int)0xe9c82db4, // -1181100.913211
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xea9a43, // 1124395.003580
	(unsigned long int)0x3d084057, // 1159970.238407
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x40748d78, // 156564.156472
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9a2b0ed8, // 363423.900555
	(unsigned long int)0x4f312d92, // 780133.154672
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd7fd43d0, // 330040.960927
	(unsigned long int)0xc9ee19a4, // 696602.394395
	(unsigned long int)0xe96b52ce, // 1045000.955897
	(unsigned long int)0x1b0c0b6, // 933146.503302
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xebe00cac, // 484684.480347
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb2c92ad4, // 692319.349191
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x572a87da, // 715777.670246
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xea91f260, // 332444.979072
	(unsigned long int)0x3f863c75, // 1088935.248142
	(unsigned long int)0xaa4b205c, // -204650.958151
	(unsigned long int)0x4e6f5922, // 832398.653193
	(unsigned long int)0x51b9c4f5, // 1187160.319241
	(unsigned long int)0xcbdf1d32, // -576868.398187
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6848f808, // -1065580.407363
	(unsigned long int)0x633da07a, // 754721.193830
	(unsigned long int)0x210378d0, // 390429.032240
	(unsigned long int)0x4e80d398, // -434206.826663
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1647b130, // 462677.021758
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x234292f1, // -1132701.137735
	(unsigned long int)0x569c02e0, // 387381.334580
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xd38fc72c, // -1217070.826413
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9e6aa308, // -180753.202352
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x2787acac, // 342236.288603
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xc3a65630, // -133315.095532
	(unsigned long int)0x15c171a8, // 223602.885623
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1fec120c, // 461663.031174
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe35a1558, // -224021.361012
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x774d75ca, // 762943.233013
	(unsigned long int)0x3d6fc9e9, // -1011511.119994
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x6c02b91f, // -1060416.421917
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1acf5d9a, // -426394.276182
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb54a18e6, // -361125.177040
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xb1bc7e20, // -455176.673571
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x404d8af6, // 611999.625592
	(unsigned long int)0x56afce50, // -88074.521164
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xc7ebcba0, // 170843.597618
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc00e31ad, // 1091937.750217
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe5b79ed6, // -1177198.897333
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x6e4d620, // 48168.188342
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4a89d148, // 133006.786396
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xd286b1e, // -1188134.051398
	(unsigned long int)0xd3550cda, // 900721.412758
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x785ea6aa, // -375437.867549
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe8fb18e1, // 1083905.910081
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa337130, // -69990.127490
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x241afb54, // 405345.285259
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x6b4171f6, // -1123950.418967
	(unsigned long int)0x7a95e366, // -725382.739425
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x57e18906, // 777508.171643
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x17c14410, // 102171.693300
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5098b3b4, // -932433.157415
	(unsigned long int)0x8eabfa86, // 528902.278656
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x6e666f84, // -838413.715625
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb2730e0e, // -662240.348534
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xae8e6cf8, // 740953.840930
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4228f3b3, // 1121082.258437
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x69f6cb90, // 129909.588370
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3a483880, // -12717.025216
	(unsigned long int)0x9444b088, // -156322.947397
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x52c5ee37, // 1231508.323333
	(unsigned long int)0xa8282ac0, // 38419.551777
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xac8c6940, // -144212.709252
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe7934f4, // -450717.514134
	(unsigned long int)0x769416a8, // 233622.182900
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x69d7ae69, // 1156845.413447
	(unsigned long int)0xac812e0a, // 736038.336923
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x37548002, // -518794.554033
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x72aa83bd, // 1049119.447914
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x128dccfb, // -1071303.072476
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xf937f0f8, // 254288.871689
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xac30df6c, // 454653.668155
	(unsigned long int)0xac37bac, // -562524.521023
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc6327aed, // 1177246.774208
	(unsigned long int)0xd51d5129, // 1148086.832479
	(unsigned long int)0x17610b61, // 1147411.091325
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x83669f70, // -788190.256642
	(unsigned long int)0xaff0a63e, // 990999.843633
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3e6e5d00, // -1057562.243872
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x4e557baa, // 939622.152996
	(unsigned long int)0xb44f5f76, // -828299.352168
	(unsigned long int)0x6361e920, // 666989.194106
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x3a5c49f8, // -156856.528496
	(unsigned long int)0xfbb0c205, // -844334.991583
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xdaa82e90, // -138350.606766
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xa4ecd61d, // 1148429.644239
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x44abffb8, // 213615.408531
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x739ed3aa, // -865981.225821
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xe6a3f40c, // -792611.950470
	(unsigned long int)0x1efae35c, // -1171202.121016
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xbbd51636, // 652791.866860
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x231ecfc0, // -78645.008574
	(unsigned long int)0xf9225c00, // 229679.371648
	(unsigned long int)0x1b7a51c0, // -46603.847104
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x748d9ee4, // 480977.363821
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x6bd0bbcc, // -196104.802644
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7e46c2c7, // 1113218.493267
	(unsigned long int)0x409f6afc, // -673307.626216
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc1bd2a90, // 207738.594599
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xb839c024, // 416214.679908
	(unsigned long int)0x181210a5, // -1106025.094026
	(unsigned long int)0x40198a5e, // -468490.312597
	(unsigned long int)0xdd39b351, // -1041615.932081
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb5d4b6b2, // 663506.855139
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd61b92c8, // 435430.459090
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xc14a1d26, // 695083.377519
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbd01e378, // 198578.342289
	(unsigned long int)0x7fdd5e84, // 561929.749736
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xa51444c9, // -1158801.644841
	(unsigned long int)0xd2911f1a, // -663372.411263
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe3d35fe0, // 339584.222486
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x79d29a28, // -175386.809484
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x4f4c3b04, // 273813.577439
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x96096478, // -1066128.586081
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x74216b82, // -369183.863409
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x20ef752f, // 1050856.128654
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x49e1d4e8, // 508877.072151
	(unsigned long int)0x6b62defe, // -592587.209739
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x49fc7e22, // -268368.322252
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xdc6b07d0, // -127800.491313
	(unsigned long int)0x6cdc95f, // -795796.013289
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x448bf37a, // -355351.816940
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x58d6be8, // -497336.005422
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9f115a59, // -864973.310679
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x79e12742, // -330602.369023
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x90a40dbf, // -596520.782502
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa24e83df, // -1139639.634011
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x9af86f8, // 497382.509459
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x4f167d66, // 871229.154468
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x95281c40, // -153635.197830
	(unsigned long int)0x2fed5e86, // -490026.796804
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x614ab95f, // 1136941.380046
	(unsigned long int)0x5646c045, // -1015407.168509
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa76ad10c, // -220732.081747
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb132b783, // 1224356.692180
	(unsigned long int)0xae388286, // 1014758.340275
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbef3f16, // 542104.023310
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1c1fe982, // 927693.554931
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8a66df20, // -430452.385158
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa0a25978, // 416156.906869
	(unsigned long int)0x739026d4, // -329467.362855
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x95eb4dd8, // -221777.698203
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xe75656d9, // -643439.951831
	(unsigned long int)0x434a2cc5, // 1088399.262851
	(unsigned long int)0xae28de30, // 157891.460039
	(unsigned long int)0x5505508a, // -980100.166056
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xa3504274, // 334875.659486
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xf5abf5b4, // -506328.989914
	(unsigned long int)0x86520336, // -610375.262344
	(unsigned long int)0x92d8f98c, // -323888.643406
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7500c73a, // 631849.728522
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x6863f4a2, // -412046.851944
	(unsigned long int)0x9f1ed24a, // -1115034.621564
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb6b91fe8, // 482730.678441
	(unsigned long int)0x1936040a, // -765341.049240
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3827b0b9, // 1201095.219356
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x996ee7b0, // 846728.799674
	(unsigned long int)0x6962b97f, // -795288.705831
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa9ba0b08, // 836413.331498
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x11ff1301, // 1063327.070298
	(unsigned long int)0xde0f38cb, // -1031975.933710
	(unsigned long int)0x2bde2d04, // -187373.271420
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4380c532, // -718132.631842
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xac54b56c, // 582121.836584
	(unsigned long int)0xd0645110, // -97459.050877
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x77049d21, // -889638.232457
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x4b38e270, // -958852.146918
	(unsigned long int)0xb8e70f60, // -519545.680569
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd30b9ae0, // -69617.176525
	(unsigned long int)0x518fd7f5, // -565328.159301
	(unsigned long int)0x7719bd0f, // -812941.232618
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xbfc62e2a, // -798183.374559
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xee2e37dc, // 285779.982598
	(unsigned long int)0xf4fc91c1, // -723330.978489
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xcc087960, // 33724.212406
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x136cf750, // 581754.537941
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x5fb27884, // 286080.843454
	(unsigned long int)0x67c75aca, // 722320.202693
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa4e8e22b, // -569106.822089
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x54f771ea, // 711794.165950
	(unsigned long int)0x7fe14886, // -856625.249766
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6f6f82d9, // 1052691.435295
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1e700400, // 1412.464960
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x70a845b7, // -1122892.440068
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xb613ac18, // 286178.927809
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6a657cde, // -941390.207806
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x14bc7e6d, // -625205.540501
	(unsigned long int)0x585992a0, // -423773.086279
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdabcc0a0, // -330980.713611
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x14b9ab52, // -960069.040479
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa95c0500, // -77402.228848
	(unsigned long int)0xb958c8a4, // 364089.181003
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x12a48362, // 809303.536411
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe52de654, // 461553.723808
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x34c7854a, // -544480.603085
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x96d164c0, // 87356.224321
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8793808f, // 1055081.529594
	(unsigned long int)0x701a5528, // 857410.218951
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x859882e2, // -317176.880465
	(unsigned long int)0x72e177c2, // 804064.724376
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x424b1a3a, // 1014701.129479
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9fb81e00, // 3344.415281
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xaa1a1f7c, // 493939.916115
	(unsigned long int)0x7cf18554, // -254481.061008
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x2d878f70, // -413451.794462
	(unsigned long int)0x1e159aec, // -1072021.117517
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8d9db220, // 293484.888297
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x98a5402a, // 780823.798136
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf68502e0, // 40941.248843
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa0f685e7, // -1131549.628762
	(unsigned long int)0x1194d663, // -912083.034339
	(unsigned long int)0x6a217222, // -411392.603643
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x56b23e8d, // -733838.669329
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xa8bdcea0, // 698827.329573
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xa5572be0, // 171810.205733
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x8fe614d4, // -1121941.562105
	(unsigned long int)0x5f93f8c0, // 109989.210834
	(unsigned long int)0x8857fb36, // 558846.266296
	(unsigned long int)0xeca9941c, // 587623.962231
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x8ed77cfd, // -930863.778988
	(unsigned long int)0xeb85582e, // -335378.730001
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x392f05ec, // 511450.305843
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xd7b71b80, // 27166.169416
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x83d89623, // 1195550.515024
	(unsigned long int)0xf378b0de, // -1204791.951060
	(unsigned long int)0x69f01938, // -232093.176727
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x768e2ed8, // -1152326.463107
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xbb9d64d0, // -782170.866435
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x58f21886, // -858698.673722
	(unsigned long int)0xdd41a1dd, // -776343.432141
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fd2d050, // 365074.624828
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x9efbd790, // 108757.413814
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x55720e0, // 138908.627608
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf28b6ad5, // 1171216.947440
	(unsigned long int)0x29e01150, // -679516.081788
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc5354d69, // 1223423.770345
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x8954ca40, // -20601.930257
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x4d7e65f3, // 1176625.302710
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x641bfbc6, // -970858.695526
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x39b37fe0, // -82779.264087
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x300adf7c, // 559548.593833
	(unsigned long int)0x34256130, // 840956.101848
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x96c705da, // 805317.294487
	(unsigned long int)0xbbdf9310, // -173318.591735
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7c23ba3a, // -1181087.484920
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xeff9ff92, // 994243.968704
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x27a0985c, // -1081088.154794
	(unsigned long int)0x44c3aa0, // 65111.656775
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x37ce5b77, // 1101237.217993
	(unsigned long int)0x63378240, // -106780.711723
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xf87cb4d0, // 85100.998166
	(unsigned long int)0x56ccfbbb, // -704074.669533
	(unsigned long int)0x38d45cf8, // -166896.152749
	(unsigned long int)0xca7b1351, // -698594.395470
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xd0d20f20, // 111147.675982
	(unsigned long int)0x585e63b2, // 909017.672595
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xf2c4c700, // -50282.342135
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xbca97ce2, // 895318.868481
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x971db630, // 193716.323787
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x9b0412be, // 856216.802765
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x87eb30a8, // 204763.941367
	(unsigned long int)0xa6e763c8, // 214617.956496
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xbf1419e3, // -1200052.746400
	(unsigned long int)0x35fa51ab, // 1190664.210851
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3bfaef03, // -875944.117149
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x9a9382a4, // 563629.801907
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf3f5cdf6, // -796464.976485
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xce18172c, // 311726.451264
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7481fbb0, // 271095.113777
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe07da9ce, // 1047847.438459
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xaaba6020, // -747556.833453
	(unsigned long int)0xd8c3a7ab, // -527385.423368
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x4e893400, // -2622.879505
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1dd4baf5, // -614261.058264
	(unsigned long int)0xe32fae38, // 576926.443723
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3a2c34c2, // 988286.113619
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x842dde84, // -218356.189541
	(unsigned long int)0x34f99fb6, // 981711.603467
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x458eee2, // -279551.754246
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x2f844ce6, // -842696.092806
	(unsigned long int)0x6e5c36d6, // -1168153.431095
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x94048b98, // 136850.822274
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfd7ecc37, // 1120935.990216
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x86eefc44, // -1018598.763542
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfe99616b, // 1166317.994528
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xf92c64a8, // 424500.243333
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1723716b, // 1225057.090385
	(unsigned long int)0xe47f495a, // -303240.973142
	(unsigned long int)0x5f9b01ec, // -1231198.373459
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe43e50af, // -1101084.891576
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x35c5f4aa, // 705657.605026
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe3ea25e0, // 129406.055643
	(unsigned long int)0xcd72e680, // -10604.920332
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd9f7159c, // 394125.962857
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa3717930, // -158550.079806
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xcce47a98, // 636433.900181
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xe218bef0, // -127329.680199
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb0597880, // 15972.919444
	(unsigned long int)0x5bd7dd80, // -574778.179381
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x908764e, // -1136135.035285
	(unsigned long int)0xbb35af05, // 1120347.731288
	(unsigned long int)0x9f8be368, // 321639.155807
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x86d88509, // 1148629.526741
	(unsigned long int)0xa5e26605, // 1215787.647986
	(unsigned long int)0x4a96533c, // -1145493.291356
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x52e19dfa, // 964353.161878
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x357c43cd, // -1118112.208927
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x35662ce1, // 1143144.208590
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xec691644, // 502627.480870
	(unsigned long int)0xa7d597c8, // -312835.913901
	(unsigned long int)0x2b1102fc, // 638021.084114
	(unsigned long int)0xf95f10e0, // 219492.746763
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x69ea1c00, // 8126.083647
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x45f6db78, // -1221924.273298
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2710f5b6, // -972614.076301
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x2766f8f9, // -1083122.153915
	(unsigned long int)0x952767c6, // 975056.291316
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xda870c7, // -993130.526676
	(unsigned long int)0x2135e2e1, // 1141354.129728
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2b9bb5fe, // -321076.042586
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfb09f1f2, // 1033333.490310
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xdbc13eae, // 626469.929209
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x44fa9efa, // 953241.134725
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf2432ee8, // 322335.236584
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xae668d26, // 584918.840626
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x63a183b0, // -74395.524324
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x8382886d, // -1003308.256855
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x56b43ac0, // -141146.417336
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4bd63a28, // -748990.648119
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xcbd8c8ec, // -213659.724535
	(unsigned long int)0x65ad1105, // -1231152.397172
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x11775e10, // 821952.034114
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd02c7c38, // -462966.703295
	(unsigned long int)0x5b0c27e8, // 248180.419457
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7d495afa, // 548112.744700
	(unsigned long int)0xb022b64a, // -719703.344015
	(unsigned long int)0xa67a21c1, // -601579.825151
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x1b9d8aaa, // 647985.053936
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb25d846, // 1018315.021773
	(unsigned long int)0xbdfdba1c, // 624215.371076
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xd167cb40, // -25221.700281
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xde9e81fe, // 591891.434803
	(unsigned long int)0xd0253287, // 1060807.813068
	(unsigned long int)0x3b6e5c0c, // 390711.308038
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x47f141b6, // -1051356.281025
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xd1853e4, // -196718.131394
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x9ae1d79c, // -1031142.802504
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf427a736, // -1129797.953730
	(unsigned long int)0xa9f33300, // -181144.957983
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xcca4f7cf, // 1207605.799392
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x267a1cfc, // 521144.287575
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe7e49b42, // 1013903.452916
	(unsigned long int)0x7c467930, // 289406.621363
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdf9a9960, // -120488.679591
	(unsigned long int)0x73cde728, // -1027729.226180
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xeb75554f, // 1228422.919759
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xa7388a2a, // 1020244.826603
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbf1575b, // -666652.523326
	(unsigned long int)0x5de02600, // 15899.096615
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xf269bf6, // 553208.029591
	(unsigned long int)0x2fd4e7f0, // 129638.824178
	(unsigned long int)0xcf53aef2, // 641987.404935
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2c03f9cc, // -575881.085968
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xe1bf9e5e, // -801988.440915
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7d44d75, // -592902.515292
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ced0686, // -736421.743996
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf901ebb8, // -1223724.972686
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x226a6ef0, // 817714.067218
	(unsigned long int)0xa2527d30, // -89656.289629
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x85b81fdf, // -668837.761170
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xd9dee811, // -676527.925529
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfc1aa964, // -231934.623098
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x42117d90, // -120404.266130
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x10d59750, // -182431.758220
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x1a49154c, // 274672.025669
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x2e70575e, // -962710.590701
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4aa8919a, // 854687.145817
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xa7a099d0, // -985368.327397
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1f80e8b, // -1116785.007691
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc7a44778, // 585680.389925
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x668ad6a1, // 1124225.400556
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x90904b78, // 337150.641175
	(unsigned long int)0x25d3e610, // 365100.786941
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x9dc5cd6, // -818845.019259
	(unsigned long int)0x6cec35ba, // -1188113.425479
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x16f8626c, // 388481.272432
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfa0db015, // 1218292.976771
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x5a708b8c, // -507613.588320
	(unsigned long int)0x5f006c2e, // 755281.685550
	(unsigned long int)0xd8c89940, // -36449.526463
	(unsigned long int)0x917fbd6d, // -1037197.784178
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6ea78ec8, // -183452.429031
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6f88103c, // -273593.858917
	(unsigned long int)0x55e28d73, // -529941.167744
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x730aa8a4, // -213205.431173
	(unsigned long int)0xdef67028, // -404857.467737
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf60fab56, // 856297.480588
	(unsigned long int)0x9a25413a, // -1182633.602131
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x34f89dd4, // 375306.801730
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xeba3223c, // -223510.365057
	(unsigned long int)0xedc932da, // -1205864.928851
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x92fff2e0, // 163605.071777
	(unsigned long int)0x5b4c1392, // 1030380.678315
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf0f758ec, // 808655.970637
	(unsigned long int)0x2a8daf60, // 47114.130195
	(unsigned long int)0x508551a4, // 669159.657267
	(unsigned long int)0xab48b319, // 1199330.669078
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x29b7a898, // -170057.645370
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xc599e4b6, // 965954.885940
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x502c322e, // -588144.656587
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x3fe40338, // -285079.062393
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2f76ad6, // 725917.005794
	(unsigned long int)0x8a4c12f9, // -1035052.270112
	(unsigned long int)0xc7f3f063, // 1086257.781066
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc252b148, // -161156.969884
	(unsigned long int)0x543383e4, // 651037.164456
	(unsigned long int)0x108d9ef0, // 119693.816541
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2e01eafe, // -289486.544929
	(unsigned long int)0x14ea206, // 912961.502553
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xdeb5f9d0, // 152626.983746
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xbc7030e6, // -1158728.736087
	(unsigned long int)0x74a94c09, // -665314.227854
	(unsigned long int)0xc3193496, // -718053.881052
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xce805130, // -65737.362915
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa866a114, // 370514.164454
	(unsigned long int)0xc9581e9, // -997747.524578
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc1ca8790, // 284236.689249
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf2a0be00, // 5960.031046
	(unsigned long int)0x5b1cec80, // -52218.667372
	(unsigned long int)0xe159afa8, // -159800.985034
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc2c0b508, // -643602.880376
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x325483ec, // 791395.098301
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xa31dfb01, // -536108.318588
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbf1a3c0b, // -1049575.746494
	(unsigned long int)0x61961ff4, // -498851.345299
	(unsigned long int)0x226a9608, // 754419.567219
	(unsigned long int)0x43e93c4e, // -961816.632639
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x56154a9e, // 832956.168131
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x803f0538, // -606623.750481
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x15196a1c, // -547811.541210
	(unsigned long int)0xaa96be6e, // 737193.333181
	(unsigned long int)0x6d4607a7, // 1099407.426850
	(unsigned long int)0x3aa7ee00, // -185359.778641
	(unsigned long int)0x6fa90b50, // -121430.339761
	(unsigned long int)0xb8a53142, // -1185081.721271
	(unsigned long int)0xb5cdf390, // -70889.419386
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb33ba5f7, // -688768.850064
	(unsigned long int)0xaacd671b, // 1133580.667197
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x4f9ef46c, // -188964.788877
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xdc9d74e9, // -727425.430889
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x315e61d0, // -1148293.192846
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe4e7f64a, // 1007506.447082
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7730a64, // -1080953.029099
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xaedb4ee0, // -79761.667690
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x3f715bf0, // -235558.030978
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc9177f60, // -156168.473189
	(unsigned long int)0xe62cb8, // -1133148.003512
	(unsigned long int)0x1abb0d90, // 419551.276104
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xf3172398, // 859839.474786
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x68eab2a4, // -861193.204916
	(unsigned long int)0x10b88dd0, // 72255.129082
	(unsigned long int)0x229beb40, // 90584.570949
	(unsigned long int)0xf3e648a0, // -943146.976366
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xaa3add80, // 23898.197890
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb0d98fec, // 703331.345410
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc8b6a6c4, // -260683.348005
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4eb148fe, // 820075.153696
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x9ea37b60, // -147574.952460
	(unsigned long int)0x28fd6e09, // 1096861.160117
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x891c30b0, // 609508.267793
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5f2c8cd8, // 284393.592943
	(unsigned long int)0x871cee70, // 116444.095487
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x54e3e8ac, // -197134.416450
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x76eef31a, // 1046314.732292
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xddd2ef50, // -692561.433250
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe6e7a68c, // 264769.725493
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x12447d20, // -103171.379460
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x1d164386, // 805128.556810
	(unsigned long int)0x913906fb, // -1126273.567276
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc2f76d40, // -17363.371275
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbfce4bc, // -564156.523414
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa9a024d8, // -859561.331300
	(unsigned long int)0xcf00fe29, // 1182821.808609
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x18c3a8bc, // -239354.137092
	(unsigned long int)0x2d36f17, // -887012.505519
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x242c46d0, // 351216.785325
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xf34d1b70, // 127281.934400
	(unsigned long int)0xc6d650e0, // 47102.180522
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xa6498b52, // -602481.824780
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x705c0cca, // -484961.609726
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x6b98f8bc, // -337474.355076
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa5935837, // 1165007.646780
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xe01f51a0, // 186132.109435
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x3a8fda8e, // -693515.114379
	(unsigned long int)0xbe4cbd31, // -1195069.743358
	(unsigned long int)0x96b5ce08, // -917276.294356
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe31d0386, // 842785.943581
	(unsigned long int)0x30ee0392, // -676620.595566
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xc35892ac, // -1063604.763070
	(unsigned long int)0x40301be0, // 226583.906342
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x76318c96, // -640889.230847
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd26bc9fc, // -400320.455489
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdfc87ca4, // 263332.968538
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xaab62edd, // -1096741.666842
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7b62ea13, // 1183460.481978
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xff3199fc, // 400275.999213
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5d0e5592, // 952750.181750
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf4c24ab4, // -857638.478045
	(unsigned long int)0x2594b363, // -1033557.573400
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x70a78184, // -927829.720028
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xe196a0c, // -331860.263769
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9918e636, // -1072437.598036
	(unsigned long int)0x92cde5a4, // 814368.786727
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7b35df6a, // 572233.240645
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xad4c169e, // 862409.338471
	(unsigned long int)0xa006cfe8, // 191038.453138
	(unsigned long int)0x92400a68, // 440884.392822
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xb9f0328a, // 662291.363161
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb5ee19fa, // -745241.355332
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x6827a70, // -98265.126589
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x20c8a9fc, // 385916.032015
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x1c46783, // 1199899.006903
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6529f82, // -945991.512349
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3ae1c8c8, // 223231.278751
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xb12a3830, // -210337.461506
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x807f8130, // 771561.250973
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xed9ee56c, // -627177.464103
	(unsigned long int)0xfb69cae8, // -873302.491042
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x270317ac, // -539550.576195
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfca6b9b3, // -950550.493460
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x5d4e3682, // -352882.091119
	(unsigned long int)0x18140320, // 372022.773514
	(unsigned long int)0x244c1dbe, // -1136483.141786
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xde4207a0, // -61195.558381
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x3b7b8c2a, // -367116.808088
	(unsigned long int)0x4ac1780a, // 712714.646007
	(unsigned long int)0x48696b27, // -987383.641429
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb6d00c80, // -184999.214264
	(unsigned long int)0x8163b12a, // -785995.752714
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x1dcc5ac4, // -834578.058200
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xae353222, // 984517.840250
	(unsigned long int)0x4615b939, // -765464.636884
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xea678490, // -108563.744728
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x21c3938c, // -229064.266486
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xdc99ce00, // 455263.715430
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xa765003a, // -702632.326942
	(unsigned long int)0xe6f76e20, // 68553.618888
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x8563ea6, // 793077.516283
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x34702e83, // -1104837.204837
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x283f2954, // -575151.078607
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x49f608d4, // 549212.144455
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x21c974ee, // 546193.065990
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x1dce938, // 136983.375910
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xe6ed1c2e, // 775092.451028
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xb5626888, // 828618.354266
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x10afcd6c, // 460776.766296
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf0d0373f, // -817969.470339
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd3be23c0, // -1021406.913560
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xbc975734, // -245035.717086
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf6aa0270, // 238765.995441
	(unsigned long int)0x68a96e6c, // 461753.352209
	(unsigned long int)0x615bdf6a, // 726959.190154
	(unsigned long int)0x6e7a48b8, // 191238.053944
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xb4a5290a, // 1042905.852823
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf3c59dd6, // 969725.476117
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x48e21f00, // 56317.446397
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x639bcfa8, // 644042.694548
	(unsigned long int)0x6b60317a, // -993410.209718
	(unsigned long int)0x7347cfa8, // 533278.725157
	(unsigned long int)0xa5746900, // 347783.661577
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xd13c42da, // 774988.908663
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x65e10e94, // -281909.599491
	(unsigned long int)0x5bb38ec8, // 193310.294776
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8ea0d0, // 299917.500544
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xf50bc387, // -1151262.957211
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7b0dd208, // 855111.740340
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb2af2c98, // -793372.848993
	(unsigned long int)0x7d4bfd96, // 851806.744720
	(unsigned long int)0x97505880, // -215212.198884
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x6801d33e, // 856392.703139
	(unsigned long int)0xbb546268, // -559495.365878
	(unsigned long int)0x652f5e3c, // 402740.848814
	(unsigned long int)0xbc5feb7c, // 751697.367919
	(unsigned long int)0x8d4940e4, // -855267.775950
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfa4bafe7, // 1202569.977717
	(unsigned long int)0x67ef7d90, // -259540.925750
	(unsigned long int)0xee61cf2a, // 956871.965590
	(unsigned long int)0x1593a85a, // 612317.042142
	(unsigned long int)0x40340a32, // -524712.125397
	(unsigned long int)0x41dc6b94, // -683250.628635
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xbbe3cc70, // -938150.866972
	(unsigned long int)0xd7b78a8, // -214104.381583
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xb1ddf70a, // 881379.347397
	(unsigned long int)0x1afacfb0, // 598089.552695
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x74a52b90, // 156331.556956
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x4de70136, // 983062.152153
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa3695e46, // 979439.319163
	(unsigned long int)0x81d5d762, // 589811.253585
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x479af607, // -525037.639854
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x4cc58994, // 487923.074972
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3946c356, // 960415.111868
	(unsigned long int)0x12196ef2, // -663171.535350
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x82436f5f, // -1131087.508841
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xacb2aee6, // -439691.168650
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xf54a0ffd, // 1199733.958161
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xf5fe3f3c, // -217522.120114
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xf0c04eb2, // 910637.970217
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x6ae2bea6, // 715482.208761
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xb818451c, // 531271.359560
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9f7023b0, // -441712.155701
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x8586c011, // 1116428.521587
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xb26d8da0, // 101881.231062
	(unsigned long int)0x48794768, // -145082.410388
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x80879167, // -1125356.502069
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2c82eccb, // 1139865.173873
	(unsigned long int)0x997d690b, // -1119635.599570
	(unsigned long int)0x2f830e63, // -1229799.185594
	(unsigned long int)0x4bd2e9f9, // -1172612.296187
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x81aea2f0, // -878216.753285
	(unsigned long int)0x8dc9e1e2, // 603512.776931
	(unsigned long int)0x4b3b0a0, // 771887.009183
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x888446f, // 1163351.033329
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xce3c02cd, // -936255.902802
	(unsigned long int)0x85d052a1, // -1180358.522710
	(unsigned long int)0x89ba8c4f, // 1197479.538003
	(unsigned long int)0x7c3ef7a, // -1085499.030333
	(unsigned long int)0x3e723b42, // -576908.121965
	(unsigned long int)0x3f0c53cc, // 326058.561570
	(unsigned long int)0x1792bee1, // -1194101.092083
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2000b8c0, // -39710.847657
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x2e32a3b0, // 672845.590230
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe55c0360, // 442674.473984
	(unsigned long int)0x4d8481b8, // -211136.287850
	(unsigned long int)0x93425658, // 174798.821904
	(unsigned long int)0x8fa756bc, // 456390.390287
	(unsigned long int)0xd25be268, // -170380.602714
	(unsigned long int)0xc5444ee8, // 477704.942643
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3a7a32e2, // 815305.114214
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdf4f87e0, // 48955.871010
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8b6d245e, // 1028904.272317
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6e296a6, // 550442.513447
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x516a255e, // 961734.659013
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x3a2e07b8, // -199871.528408
	(unsigned long int)0x48c8e0ab, // -702640.642158
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xff132e20, // -373493.749097
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x69f4d15a, // 784955.706946
	(unsigned long int)0xf033967d, // 1058833.938287
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x56ee6a48, // 513216.834894
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfd9644b3, // -1146642.990574
	(unsigned long int)0x23d15289, // -1072138.139913
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6ffde478, // 164488.304683
	(unsigned long int)0x94a1fbe8, // -1090623.580597
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x2e5fd158, // -184301.522644
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd983fa16, // 673273.424835
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5afd1cc0, // 95252.397214
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf9d8bbec, // 492704.993991
	(unsigned long int)0x71bd0d1e, // 566334.222145
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1b5ab80, // 334865.251670
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe698f1d2, // -544477.450386
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xe0bee8f8, // 213761.484739
	(unsigned long int)0xef48fd00, // 186148.616838
	(unsigned long int)0xbcce6b32, // 909443.868762
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x45f50b74, // -1200236.273270
	(unsigned long int)0x39f3d424, // 309753.306594
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe0d3e872, // -1161741.878233
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7333cafa, // 969500.725005
	(unsigned long int)0xc8735570, // -376482.445752
	(unsigned long int)0x9d976580, // 374209.903898
	(unsigned long int)0x2636dd32, // 643948.574637
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x14f30be4, // 447114.020458
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc1aa1f8, // -1187329.047281
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x83d619cf, // 1085408.514986
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc1f20c68, // -642605.378800
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x9c633f2a, // -317678.152722
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf00e83c0, // -488267.734430
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf07e4810, // -1195543.939427
	(unsigned long int)0x90d56cd2, // 539196.782878
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xb0908c74, // -242291.336213
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x677ac678, // 337461.351054
	(unsigned long int)0x2a57d309, // -1207072.165403
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x457e9340, // 280757.317866
	(unsigned long int)0x3a317c0c, // 677519.113659
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x9ec4cd1c, // 683484.310095
	(unsigned long int)0x618435d8, // 224860.797615
	(unsigned long int)0x8df42fc6, // 923807.277254
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xb6582b0c, // -771730.356141
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xe282e854, // -197657.235601
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x137c8dde, // 968242.038060
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x393fdbaa, // -1084258.223631
	(unsigned long int)0xb04dcce6, // 924711.844344
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x28678848, // -1056875.157830
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x12ee83d1, // -1140999.073952
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9429eb54, // -485751.144691
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc3e46d0, // -88457.127989
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x2f6dadc0, // 31443.706020
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x30c77f94, // 319544.297636
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x569c8357, // 1120976.338326
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xab0cd72f, // 1233013.668165
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x1f9bc680, // 590796.561735
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xce4e949d, // -653934.402943
	(unsigned long int)0xbc8ac5ad, // -827563.368246
	(unsigned long int)0xb564438, // -950528.022143
	(unsigned long int)0x11b1e588, // 141087.633640
	(unsigned long int)0x237fad80, // 453434.034667
	(unsigned long int)0x75bbac06, // 869313.729947
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x73538e20, // 113148.340656
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc97c50e2, // -851507.393527
	(unsigned long int)0xdde6b2ff, // -762249.433401
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x21a10680, // 857899.565682
	(unsigned long int)0x3b9b483a, // 586152.616419
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9b322fd2, // -1006884.803117
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb80115e, // -402485.511231
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x316e2742, // 931195.596544
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x5cb83ab2, // 746387.681093
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2ae0d23e, // 787612.583747
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x49a735e8, // -296896.071927
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xe98bab4e, // -416084.228072
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbe3d3ea1, // 1196581.743122
	(unsigned long int)0x1885e5f7, // -682372.547897
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xc6ac01af, // -851151.388031
	(unsigned long int)0x1abb784e, // 900421.552212
	(unsigned long int)0xd7c6f50c, // -190509.480360
	(unsigned long int)0x64d91f28, // -177515.049242
	(unsigned long int)0x1313055a, // -1140053.074509
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xcb13916, // 991515.024790
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6e6562b0, // 343844.607809
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb9cd2a2a, // -343344.931447
	(unsigned long int)0x3af49a90, // 249872.028787
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xdc99eec4, // 458348.715431
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1f6475fd, // 1153002.122627
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf21bf22b, // 1138792.945739
	(unsigned long int)0x96fee4ae, // 543179.294913
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x8007d930, // 117956.843757
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x21b93ab2, // 694135.065866
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe3ecfe60, // -64445.871573
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x5de9f88, // 852758.511464
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc165f1ab, // 1159114.755462
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xd72b339c, // -400558.460126
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x49c5ac70, // 371787.572043
	(unsigned long int)0xd59cc4e8, // 299114.708606
	(unsigned long int)0x18f2565a, // 870344.548724
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xf25e7580, // -1110811.946754
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7561cfbe, // 611424.229262
	(unsigned long int)0x79bd9d55, // -531669.237775
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9896957e, // 874477.298024
	(unsigned long int)0xe19e66cc, // -743171.940662
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa864af2f, // 1206192.657786
	(unsigned long int)0x1bfb940f, // 1207582.109308
	(unsigned long int)0x82475eee, // 870117.754451
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x227e5d58, // -1024985.567370
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x64be4d06, // -718216.196764
	(unsigned long int)0xe99799d0, // 80247.557029
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x20812167, // -567319.063485
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4200b968, // 318855.314456
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4acc774, // 451928.004565
	(unsigned long int)0x1f1662b1, // -671891.560718
	(unsigned long int)0x3be9a760, // 259479.779254
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x8475205c, // 417489.629353
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x78ab9eae, // 746393.235684
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x6d7fc6, // -514042.000418
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa29db9a2, // -829425.317610
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x109be48f, // -956735.032439
	(unsigned long int)0xb6c0e327, // -945221.356940
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xe7e30c0, // 51485.470519
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xdb58889b, // -841974.928410
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1939c148, // 375657.774634
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x92ec13c0, // 242043.821739
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1479fd33, // 1096654.079986
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x91931330, // 123260.723041
	(unsigned long int)0x8ddc7e14, // -1217435.554146
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x923021c0, // -18674.508923
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe3fa7d2c, // 375731.222635
	(unsigned long int)0xe3b3a990, // 352341.972365
	(unsigned long int)0xe7b12d00, // -144359.988131
	(unsigned long int)0x536088c1, // -1101154.325692
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x84b583f0, // -438780.629599
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2ff51948, // -182144.523417
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffc01936, // 646273.999512
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x526c6236, // -1011840.660983
	(unsigned long int)0x1a4a4906, // -1102719.102696
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x114d7e1, // -1023685.502112
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x2fa32a03, // -988245.593042
	(unsigned long int)0xdf68b8c6, // -837867.436346
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xd17f63b4, // -831880.909175
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x216d634a, // 546889.565288
	(unsigned long int)0x4191b097, // 1102598.256129
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd0ce7b36, // -446660.953913
	(unsigned long int)0x8c7815a0, // 77671.659294
	(unsigned long int)0x8b5eb880, // -124869.409026
	(unsigned long int)0x839c6b60, // -118763.907132
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x38723eac, // 518043.555123
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fb70d00, // 24044.289045
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x557f2ce0, // 35798.822937
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x36881b5a, // -869078.106507
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3bcc4ad0, // -102933.764599
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x126a1827, // 1208238.071931
	(unsigned long int)0xbeea4e00, // -560346.872881
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x610b0ba0, // 45865.168096
	(unsigned long int)0xb1706e5c, // 270261.673280
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xe97d1cdf, // -666178.456033
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x415d8b10, // -150353.781917
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x655dbf50, // -845307.197981
	(unsigned long int)0x529cf3bd, // -574296.161354
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x485ef630, // -117076.142669
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xbe35ef7e, // -555019.871505
	(unsigned long int)0x8dea6d2c, // -1206772.554358
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xd688db9e, // 952394.919013
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x9882f408, // -177784.324469
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xd2c8d360, // 581639.911688
	(unsigned long int)0xe6732ec6, // -389402.225049
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe9f6d00, // -85406.066070
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x83d75166, // -1167443.515004
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xcf49a27f, // -1227676.809717
	(unsigned long int)0xb99abfe0, // -155757.465627
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x647c217c, // -486243.598130
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x3e6b64e9, // -836070.121913
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x718bf0a, // 912303.013861
	(unsigned long int)0x8e3dc131, // -631711.777815
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xe6ac80d0, // -499371.975267
	(unsigned long int)0xd35aaa32, // -888790.412801
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x498f9c34, // 434544.321837
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xd0ae04e, // 591720.025474
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xbeb7dbdc, // -456631.936248
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xa1b63d0, // 294846.259870
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xb30074c0, // 43166.553101
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x2cdcf4c0, // 493096.543812
	(unsigned long int)0xfb1ca530, // 375709.495226
	(unsigned long int)0xa7bb8290, // 751838.327602
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x79ffedc0, // 203567.434570
	(unsigned long int)0x5c8cf2d8, // -1026705.180763
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x90dbed79, // 1204921.565856
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fa5a47d, // -548369.249311
	(unsigned long int)0x87f299d0, // 140997.441381
	(unsigned long int)0xbf77c17f, // -1044553.873961
	(unsigned long int)0x26a992ff, // -639669.575512
	(unsigned long int)0x2f215b59, // -924111.592051
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xe7734a7c, // -463220.476026
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xabe9320, // 424959.010493
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf1991c48, // 552842.971871
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x330a8a90, // -264601.299845
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9520c303, // -1056304.582531
	(unsigned long int)0xa9b24962, // 886393.831438
	(unsigned long int)0x57693d74, // 494725.085362
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xcb443560, // -153927.849251
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x51bbd878, // 208012.414909
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa7fe96a3, // 1171044.656228
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x8634b22d, // 1084728.524242
	(unsigned long int)0xd374020c, // 469466.706497
	(unsigned long int)0xcbceb38c, // 656999.898061
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x271c8973, // -1136158.152779
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x3a4ea180, // -528295.113881
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x58bcc2c0, // 244528.668329
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbe356b28, // 730292.371501
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5218d3e, // 863588.510022
	(unsigned long int)0x9e77f9ec, // 300347.404755
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb866d120, // -51663.116260
	(unsigned long int)0x51319116, // 954173.158581
	(unsigned long int)0x7db2ae64, // -239233.811376
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7311b2dc, // -239178.931186
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xe5cf3940, // 699108.948847
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9f64eea2, // -655158.311317
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8aaeba8d, // -680629.270864
	(unsigned long int)0xed73ec5a, // -1202864.927550
	(unsigned long int)0x61797c38, // -965274.190380
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf78198b8, // -298758.991705
	(unsigned long int)0xc9634e45, // 1110799.786672
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xc099d04d, // -1106514.752347
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x61a2030c, // -279032.345345
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x5c864585, // 1191712.361424
	(unsigned long int)0xe9c738c4, // -682790.956598
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xe7df72ac, // -242819.113219
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x790c608c, // -429931.118211
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xeb0b634a, // 637731.959071
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf601a5b6, // -405140.240241
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x9a7f8a2c, // 468692.150877
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x50b830ce, // -1209363.315311
	(unsigned long int)0xf8b940d0, // 602916.985788
	(unsigned long int)0xfac0adca, // -1048953.979503
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x68c59600, // 12270.768822
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xbf50fd32, // 635734.873665
	(unsigned long int)0x85406398, // -1220835.520514
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x8a064994, // -696901.269579
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x8c633475, // -821758.274194
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa253667e, // -362931.158521
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xa5199af2, // 821973.822461
	(unsigned long int)0x3da8ca7e, // -921705.620428
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x5417896a, // 950775.664242
	(unsigned long int)0xd69811fc, // -202125.604782
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xea4a49a4, // -913592.957598
	(unsigned long int)0xd0c4734a, // 898411.907749
	(unsigned long int)0xbd7e6cc4, // 496465.435053
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x47a40290, // 537374.139923
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x330b929f, // 1151979.199395
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x26986264, // -529241.075381
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x20cb2d38, // 592681.064050
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x49842190, // 117472.892948
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xea9f9876, // 1046197.958249
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5b01faa1, // -1163099.355499
	(unsigned long int)0x181eaa10, // -170146.011777
	(unsigned long int)0x7e6a6bfc, // -588994.246906
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x3d3ee6e2, // 950884.119621
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xf327e952, // 997244.974914
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xf15d2ae2, // 901260.471414
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x92df4c30, // -146889.196715
	(unsigned long int)0x72d3abbc, // -256992.556068
	(unsigned long int)0x83608ee7, // -695993.256596
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xc239560b, // -652731.879344
	(unsigned long int)0xec7265b6, // 988973.461810
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa0a6acd0, // 151285.703443
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xd6c58740, // 16474.419359
	(unsigned long int)0xd2638e7b, // -1201961.821832
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x1d6df8b8, // -388349.278740
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x9ad40f8c, // -1163221.604798
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xa3be6195, // -779864.319812
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xe0e9c07a, // 547678.939283
	(unsigned long int)0xe39d7ea0, // -91386.930570
	(unsigned long int)0x506dfaf8, // 152420.914272
	(unsigned long int)0xddd4232c, // 809423.433259
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd5819274, // 600018.417004
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x1f58bde3, // 1082827.122448
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x4bb6bf70, // -128392.455985
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb6e85f76, // 599691.357242
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9d5cfa62, // -905372.307350
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xaae04300, // 57475.833359
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xa4c22cc6, // -916770.321794
	(unsigned long int)0xe7bee224, // 377750.226314
	(unsigned long int)0xe4bd6992, // 840246.446758
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x36ad4085, // -799324.606791
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe3d181e0, // 75115.118120
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7524d3e0, // -36612.764300
	(unsigned long int)0x1326c7a4, // 695388.537405
	(unsigned long int)0xa5590f8c, // -229911.330736
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdd716fb2, // 1020289.932506
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x79a6304e, // 956692.237596
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd5054cc2, // 991163.416056
	(unsigned long int)0x61b8fdd0, // 86070.086358
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf2be0cfc, // 387301.987053
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x4087a15f, // 1131372.252070
	(unsigned long int)0x665d4558, // 180835.674983
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc89b46dd, // -1076843.783619
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x50eccf8c, // 795253.158057
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xe6be3ccc, // -207310.112668
	(unsigned long int)0xab3886b2, // 918022.834416
	(unsigned long int)0xd6a8e500, // -415323.959629
	(unsigned long int)0xe761bbe0, // -73291.556490
	(unsigned long int)0x729be020, // -66033.715481
	(unsigned long int)0x2ca491bc, // -899590.587193
	(unsigned long int)0x38d0ea50, // 118606.826371
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x32e5f490, // 418945.549705
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xbde0de00, // 201229.842714
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x4da33150, // 93250.081454
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x1c460e0c, // 588077.055222
	(unsigned long int)0xbe7318a4, // -282804.435986
	(unsigned long int)0x5596a4ce, // 720960.167165
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x77f86008, // 653965.234317
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xd6539b3f, // -1191912.837213
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9f3793bc, // 302914.405485
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x56bb75e6, // -521376.584699
	(unsigned long int)0x30eab35, // -1144337.011943
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x285cf3e8, // -880968.078834
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xba1fb69f, // -703928.863523
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xd0170415, // -1212473.812851
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x18ba6166, // 1034104.548297
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x3a62ee8f, // -553198.614036
	(unsigned long int)0xcc9b8c56, // -264712.699812
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x76a0d279, // -647537.731696
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2c5d1486, // 538242.586648
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xe989720e, // -315375.728063
	(unsigned long int)0xc85b9c18, // 722008.391324
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x4a9c49ef, // -627694.145724
	(unsigned long int)0x6d30cc12, // -924429.213263
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x70c767b2, // -675804.720271
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6494e91d, // -618629.196449
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x524a4343, // -1071108.321446
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x35980684, // 473276.052338
	(unsigned long int)0x70ae8ad1, // -996220.220082
	(unsigned long int)0xcb0d1c40, // 255267.849146
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x76fa0a1c, // 281175.616188
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2f65c8b0, // 318672.046287
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x9b54450c, // -1102044.606755
	(unsigned long int)0x1b5615f2, // 735731.053391
	(unsigned long int)0x3069ee4f, // 1140955.189116
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xa04bc850, // 209798.828270
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xcadf7987, // -1156866.792472
	(unsigned long int)0xefbfaca0, // -191784.117065
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x3c5e0f20, // 492915.058953
	(unsigned long int)0xfabe8994, // 706804.989735
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x29ed3f1e, // -318890.790944
	(unsigned long int)0x1e88039c, // 590812.059631
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x26c96a52, // 879449.075755
	(unsigned long int)0xbcc672a9, // -854876.368702
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x73d3a3f0, // 597777.226224
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x87a60c88, // 314895.632469
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x5ebbf1c0, // -821722.685028
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x61f8ef04, // -750814.191352
	(unsigned long int)0x3aaa17d2, // 945842.614579
	(unsigned long int)0x2a509bde, // -1053015.165292
	(unsigned long int)0x62566870, // -144115.048016
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7c490e7c, // -202335.185686
	(unsigned long int)0xad22fc2, // -1064935.042270
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x53ef878c, // 552806.163937
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x3079c8d8, // 215209.648670
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xe07c49d0, // 322966.719224
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x109c088, // 653812.502028
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x2fcaedb8, // 331026.296673
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xc2be0649, // -561370.880356
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x54a978a0, // 33642.479085
	(unsigned long int)0x919753d8, // -244785.696089
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb31e026a, // 1002664.849838
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xc04e4300, // -1181446.751194
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbbbc96d, // -663614.522917
	(unsigned long int)0x2650cb9b, // 1215254.149670
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x52f9ea2e, // -376057.581031
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xc98b976f, // -1046286.393643
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xeb5d385b, // 1152541.919391
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xea2c9fdc, // -255057.739343
	(unsigned long int)0x3c14bf84, // -895815.117346
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xd3b6d498, // 278567.456752
	(unsigned long int)0x2413a5b6, // 722037.570462
	(unsigned long int)0x35bda10c, // -845909.604962
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xa0219750, // 172302.828189
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5c6eddd3, // 1078116.361067
	(unsigned long int)0xa1d8a65a, // -525020.316106
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x391ad994, // -203935.152883
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x390e33de, // 576926.111436
	(unsigned long int)0x7f91bc00, // -1116.030760
	(unsigned long int)0x160718b6, // -760935.043023
	(unsigned long int)0xfbfafe80, // 191746.748037
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7cf57662, // -386121.622030
	(unsigned long int)0xe8d58ecc, // 300766.227377
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xc304b26, // 981480.023806
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xf72a6e30, // 149767.370686
	(unsigned long int)0xe946a425, // 1102415.911234
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xd4079184, // 446676.707060
	(unsigned long int)0x94e8c604, // 293678.895419
	(unsigned long int)0xdb00bb1e, // -344592.713870
	(unsigned long int)0xa9551914, // 833102.830727
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb05624a2, // 879444.344407
	(unsigned long int)0x3950d173, // -974156.611945
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x6e606406, // 876704.715579
	(unsigned long int)0x66ba180e, // -906209.200639
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xa1648b91, // -1212649.630440
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x2843c258, // -643731.078642
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x585e741e, // 664812.172596
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x789bcb8, // -172428.003681
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2b8f1b6, // 551955.005317
	(unsigned long int)0xf9aafc6, // -532415.030477
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xc72a1594, // 294134.944496
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x9bb80d6c, // -783861.304139
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x6dc6d250, // 454662.857204
	(unsigned long int)0x4577093e, // 651416.135674
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x899d50a8, // 173433.442195
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x2407f940, // -1007098.570373
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x90fb15ea, // -776917.283166
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xdb4bda2c, // 736943.428313
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xb56020f8, // -1125358.708498
	(unsigned long int)0xe56d904, // -220441.132002
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xf69a2708, // -1199534.963290
	(unsigned long int)0x6301a9a4, // -1019680.193372
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x90e7526f, // 1149570.566030
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x691aa83c, // -518041.102641
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2585575e, // -367318.786641
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfad79994, // 407036.244963
	(unsigned long int)0x24f87ab0, // 626233.572208
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x245fe52a, // -382613.785522
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x187d5584, // 740511.547831
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x8863f99c, // 347747.633194
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x5e94fcb0, // 143619.421183
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x73db52d0, // 826888.726283
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7e3b5c0, // -399961.507705
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x75281f94, // 656385.728822
	(unsigned long int)0xaadb2f4e, // -355083.916852
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x1983bca6, // -614598.049833
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf6eca20, // 459221.015071
	(unsigned long int)0x496664f0, // -91350.205420
	(unsigned long int)0x471e8b90, // 181683.034726
	(unsigned long int)0xb8011970, // -85009.669923
	(unsigned long int)0xfa5b5570, // 414336.494489
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x81feef80, // 23489.648559
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xba4f0910, // 842204.863884
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x9902d0b6, // 899345.798850
	(unsigned long int)0xcfea4160, // -43038.119130
	(unsigned long int)0xb195d6b0, // 701276.846846
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa4c72b50, // 74774.040229
	(unsigned long int)0x88cb5509, // -656115.767176
	(unsigned long int)0x6d930b12, // 809387.214012
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xcc349ffc, // -1013665.398839
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa5ba9066, // 857113.323689
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x980fb344, // -730460.296995
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x317c0d98, // 326681.048325
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xe0bf9f6, // -975600.527435
	(unsigned long int)0x489f3cb0, // 708750.141840
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x757938ba, // 903986.729440
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xda1d3a54, // 548765.926004
	(unsigned long int)0xe6b0383a, // -365215.475282
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x10058c0c, // -974011.031292
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x37f4bc70, // 122375.513661
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x9fe733c4, // -520947.906155
	(unsigned long int)0x4875a030, // 266869.320761
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x310ed320, // 256979.773954
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xa642d774, // 295699.912364
	(unsigned long int)0xcadd6338, // 221757.224055
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x87b34e, // 1001838.001035
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xa91a7bbc, // -1225183.660560
	(unsigned long int)0x4442b430, // -871064.133321
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x58f63606, // 692045.673753
	(unsigned long int)0xefd658f6, // 547237.968432
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7cb326ce, // -1019727.243554
	(unsigned long int)0x7d5be2e0, // -135165.686210
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xb98c9dfc, // 618797.862401
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xb5f2cf28, // 306520.927684
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x5064b7ba, // -405394.078509
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xafd7fabe, // -955651.843445
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x48c6a87b, // -666289.642141
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xbce5cfa2, // 529907.868941
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x10989422, // 738068.032414
	(unsigned long int)0x891d014c, // -919647.267799
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x98defeae, // -785668.298576
	(unsigned long int)0x1821b338, // -395809.023566
	(unsigned long int)0xf4710598, // -321487.238712
	(unsigned long int)0x8b763380, // -26849.821012
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xf456944, // 530915.029826
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xbad04c0e, // 738719.364870
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xebec37e2, // 949589.960787
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x36341b20, // -60639.756617
	(unsigned long int)0x75fd0200, // 3258.057541
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdc37364a, // -967643.930109
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x3241f91c, // -780630.598160
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x1ce64a20, // 764948.056444
	(unsigned long int)0x893a0b20, // -835877.268021
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x13489bc7, // 1172883.075327
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x45d7b5d6, // -1056600.272823
	(unsigned long int)0xb235332, // -908600.521754
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x41bb2780, // 38512.695524
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x9be82252, // 629025.304505
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x53235456, // -420550.831189
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x30b2ee2c, // 524766.595115
	(unsigned long int)0xb334ad78, // 136750.462503
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xdea78ee0, // 804488.934872
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x1318d85d, // -1036306.537299
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xcc50c895, // -1121377.798108
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x3483a2f6, // -1004630.602567
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x74ee2d00, // 312035.864190
	(unsigned long int)0x284a994, // 728036.504918
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x9cc33490, // 234988.951544
	(unsigned long int)0x76776b91, // 1147768.462760
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x2b6cc0bc, // -319594.292407
	(unsigned long int)0x8da87ba6, // -423987.888338
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8fc9d91c, // -874919.780837
	(unsigned long int)0xa3d6337f, // -597589.819994
	(unsigned long int)0x5c5909e0, // -174166.670092
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xa16e355, // -555172.019706
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x68a1cd98, // -183091.676090
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xc968a384, // 272305.446688
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x76e9b70a, // -441128.866126
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x1b51db7c, // 380752.776679
	(unsigned long int)0x2b6aedd0, // -152532.521200
	(unsigned long int)0xad948b26, // -432027.919512
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x5cd9b02a, // -417262.340674
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7461f7bb, // -558969.227310
	(unsigned long int)0x427a7c40, // -105479.516230
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x93bf3bac, // -231730.822142
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xb27a8d06, // 929434.848591
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x3abd5f9a, // -304734.307363
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0x63276f8, // 436725.256052
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xad9d9150, // -539571.839093
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7f1f05b0, // 80836.718535
	(unsigned long int)0x2723775e, // -757906.076442
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xc42b3888, // 168771.095786
	(unsigned long int)0x72bd90d3, // -639347.224103
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0x63529baa, // -462145.346995
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x8045f274, // -408464.875267
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xc5965fc, // 436497.512060
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x992bd2af, // 1083648.598325
	(unsigned long int)0x82a66050, // 331800.877588
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x51334476, // -835973.158594
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xe9a88e58, // -605668.956364
	(unsigned long int)0x381c5d85, // 1180700.219183
	(unsigned long int)0xe276e562, // 1041741.942313
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x221096a, // -988538.004158
	(unsigned long int)0xe92824c0, // 79777.494423
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000001, // -nan
	(unsigned long int)0xfff8000000000000, // -nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x2e767660, // 48070.443172
	(unsigned long int)0x87101c40, // 31874.851994
	(unsigned long int)0x1c1bf840, // 666959.054901
	(unsigned long int)0x7ff0000000000001, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x810b6154, // 791189.752040
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xd5f8bd68, // -539804.417913
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xae82f7fc, // 530088.340843
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x9410bc29, // -669946.789190
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0xfff7ffffffffffff, // -nan
	(unsigned long int)0x7fffffffffffffff, // nan
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff0000000000000, // inf
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0x7ff8000000000000, // nan
	(unsigned long int)0xffffffffffffffff, // -nan
	(unsigned long int)0x80f2a940, // -835906.751851
	(unsigned long int)0x7ad14d2c, // 384739.619939
	(unsigned long int)0x7ff7ffffffffffff, // nan
	(unsigned long int)0x14b701c2, // -460014.520229
	(unsigned long int)0xfff0000000000000, // -inf
	(unsigned long int)0xfff0000000000001, // -nan
};

// Floats = 3358, NaNs = 3394, INFs = 3248

