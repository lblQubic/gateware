// machine generated from cordicgx.m
// o=18  s=16
`ifndef CORDIC_COMPUTE
parameter cordic_delay=16;
`else
wire [17:0] x1 = {xt1,{(18-width){1'b0}}};
wire [17:0] y1 = {yt1,{(18-width){1'b0}}};
wire [18:0] z1 = {zt1,{(18-width){1'b0}}};
wire [1:0] op2 ; wire [17:0] x2 , y2 ; wire [18:0] z2 ;  cstageg #(  1, 19, 18, def_op) cs1  (clk, op1 , x1 ,  y1 , z1 , 19'd38688 , op2 , x2 ,  y2 ,  z2 );
wire [1:0] op3 ; wire [17:0] x3 , y3 ; wire [18:0] z3 ;  cstageg #(  2, 19, 18, def_op) cs2  (clk, op2 , x2 ,  y2 , z2 , 19'd20442 , op3 , x3 ,  y3 ,  z3 );
wire [1:0] op4 ; wire [17:0] x4 , y4 ; wire [18:0] z4 ;  cstageg #(  3, 19, 18, def_op) cs3  (clk, op3 , x3 ,  y3 , z3 , 19'd10377 , op4 , x4 ,  y4 ,  z4 );
wire [1:0] op5 ; wire [17:0] x5 , y5 ; wire [18:0] z5 ;  cstageg #(  4, 19, 18, def_op) cs4  (clk, op4 , x4 ,  y4 , z4 , 19'd5208  , op5 , x5 ,  y5 ,  z5 );
wire [1:0] op6 ; wire [17:0] x6 , y6 ; wire [18:0] z6 ;  cstageg #(  5, 19, 18, def_op) cs5  (clk, op5 , x5 ,  y5 , z5 , 19'd2607  , op6 , x6 ,  y6 ,  z6 );
wire [1:0] op7 ; wire [17:0] x7 , y7 ; wire [18:0] z7 ;  cstageg #(  6, 19, 18, def_op) cs6  (clk, op6 , x6 ,  y6 , z6 , 19'd1304  , op7 , x7 ,  y7 ,  z7 );
wire [1:0] op8 ; wire [17:0] x8 , y8 ; wire [18:0] z8 ;  cstageg #(  7, 19, 18, def_op) cs7  (clk, op7 , x7 ,  y7 , z7 , 19'd652   , op8 , x8 ,  y8 ,  z8 );
wire [1:0] op9 ; wire [17:0] x9 , y9 ; wire [18:0] z9 ;  cstageg #(  8, 19, 18, def_op) cs8  (clk, op8 , x8 ,  y8 , z8 , 19'd326   , op9 , x9 ,  y9 ,  z9 );
wire [1:0] op10; wire [17:0] x10, y10; wire [18:0] z10;  cstageg #(  9, 19, 18, def_op) cs9  (clk, op9 , x9 ,  y9 , z9 , 19'd163   , op10, x10,  y10,  z10);
wire [1:0] op11; wire [17:0] x11, y11; wire [18:0] z11;  cstageg #( 10, 19, 18, def_op) cs10 (clk, op10, x10,  y10, z10, 19'd81    , op11, x11,  y11,  z11);
wire [1:0] op12; wire [17:0] x12, y12; wire [18:0] z12;  cstageg #( 11, 19, 18, def_op) cs11 (clk, op11, x11,  y11, z11, 19'd41    , op12, x12,  y12,  z12);
wire [1:0] op13; wire [17:0] x13, y13; wire [18:0] z13;  cstageg #( 12, 19, 18, def_op) cs12 (clk, op12, x12,  y12, z12, 19'd20    , op13, x13,  y13,  z13);
wire [1:0] op14; wire [17:0] x14, y14; wire [18:0] z14;  cstageg #( 13, 19, 18, def_op) cs13 (clk, op13, x13,  y13, z13, 19'd10    , op14, x14,  y14,  z14);
wire [1:0] op15; wire [17:0] x15, y15; wire [18:0] z15;  cstageg #( 14, 19, 18, def_op) cs14 (clk, op14, x14,  y14, z14, 19'd5     , op15, x15,  y15,  z15);
// round, not truncate
assign xout     = x15[17:18-width] + x15[17-width];
assign yout     = y15[17:18-width] + y15[17-width];
assign phaseout = z15[18:18-width] + z15[17-width];
`endif
