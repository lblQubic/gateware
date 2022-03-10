`timescale 1 ns/10 ps
//module cmultiplier#(parameter FPGA="SPARTAN7")
//module cmultiplier#(parameter FPGA="SPARTAN6")
module cmultiplier#(parameter FPGA="TBD")
(input clk
,input rst
,input signed [XWIDTH-1:0] xr
,input signed [XWIDTH-1:0] xi
,input signed [YWIDTH-1:0] yr
,input signed [YWIDTH-1:0] yi
,output signed [ZWIDTH-1:0] zr
,output signed [ZWIDTH-1:0] zi
);
reg signed [47:0] pi=0;
reg signed [47:0] pr=0;
reg signed [17:0] xr1=0;
reg signed [17:0] xr2=0;
reg signed [17:0] xi1=0;
reg signed [17:0] xi2=0;
reg signed [17:0] yr1=0;
reg signed [17:0] yr2=0;
reg signed [17:0] yi1=0;
reg signed [17:0] yi2=0;
// (zr+1j*zi)=(xr+1j*xi)*(yr+1j*yi)
// = (xr*yr-xi*yi)+1j*(xr*yi+xi*yr)
// =(xr-xi)*yi+(yr-yi)*xr + 1j*((xr-xi)*yi+(yr+yi)*xi)
always @(posedge clk) begin
	xr1<=xr;
	xr2<=xr1;
	xi1<=xi;
	xi2<=xi1;
	yr1<=yr;
	yr2<=yr1;
	yi1<=yi;
	yi2<=yi1;
end
wire signed [47:0] pa,pb,pc;
reg signed [47:0] par=0,pbr=0,pcr=0;
reg signed [XWIDTH+YWIDTH-1:0] prr=0,pri=0,pir=0,pii=0;
localparam XWIDTH=FPGA=="SPARTAN6"? 18 : FPGA=="7SERIES" ? 25 : 18;
localparam YWIDTH=FPGA=="SPARTAN6"? 18 : FPGA=="7SERIES" ? 18 : 18;
localparam ZWIDTH=FPGA=="SPARTAN6"? 48 : FPGA=="7SERIES" ? 48 : 48;
localparam AWIDTH=FPGA=="SPARTAN6"? 18 : FPGA=="7SERIES" ? 30 : 18;
localparam BWIDTH=FPGA=="SPARTAN6"? 18 : FPGA=="7SERIES" ? 30 : 18;
localparam CWIDTH=FPGA=="SPARTAN6"? 18 : FPGA=="7SERIES" ? 30 : 18;
localparam DWIDTH=FPGA=="SPARTAN6"? 18 : FPGA=="7SERIES" ? 30 : 18;
generate
if  (FPGA=="SPARTAN6") begin
	// A*(D+-B)+-C
	DSP48A1 #(.A0REG ( 1 ),.A1REG ( 1 ),.B0REG ( 1 ),.B1REG ( 1 ),.CARRYINREG ( 0 ),.CARRYINSEL ( "OPMODE5" ),.CREG ( 1 ),.DREG ( 1 ),.MREG ( 1 ),.OPMODEREG ( 0 ),.PREG ( 1 ),.RSTTYPE ( "SYNC" ),.CARRYOUTREG ( 0 ))
	dspa( .A(yi),.B(xi),.D(xr),.C(48'b0),.CLK(clk),.PCIN(48'b0)
	,.CARRYIN(1'b0),.OPMODE({1'b0,1'b1,1'b0,1'b1,2'h0,2'h1})
	,.RSTA(rst),.RSTB(rst),.RSTM(rst),.RSTP(rst),.RSTC(rst),.RSTD(rst),.RSTCARRYIN(rst),.RSTOPMODE(rst)
	,.CEA(1'b1),.CEB(1'b1),.CEM(1'b1),.CEP(1'b1),.CEC(1'b1),.CED(1'b1),.CECARRYIN(1'b0),.CEOPMODE(1'b0)
	,.BCOUT(),.PCOUT(),.P(pa),.CARRYOUT(),.CARRYOUTF());

	DSP48A1 #(.A0REG ( 1 ),.A1REG ( 1 ),.B0REG ( 1 ),.B1REG ( 1 ),.CARRYINREG ( 0 ),.CARRYINSEL ( "OPMODE5" ),.CREG ( 1 ),.DREG ( 1 ),.MREG ( 1 ),.OPMODEREG ( 0 ),.PREG ( 1 ),.RSTTYPE ( "SYNC" ),.CARRYOUTREG ( 0 ))
	dspb( .A(xr2),.B(yi2),.D(yr2),.C(pa),.CLK(clk),.PCIN(48'b0)
	,.CARRYIN(1'b0),.OPMODE({1'b0,1'b1,1'b0,1'b1,2'h3,2'h1})
	,.RSTA(rst),.RSTB(rst),.RSTM(rst),.RSTP(rst),.RSTC(rst),.RSTD(rst),.RSTCARRYIN(rst),.RSTOPMODE(rst)
	,.CEA(1'b1),.CEB(1'b1),.CEM(1'b1),.CEP(1'b1),.CEC(1'b1),.CED(1'b1),.CECARRYIN(1'b0),.CEOPMODE(1'b0)
	,.BCOUT(),.PCOUT(),.P(pb),.CARRYOUT(),.CARRYOUTF());
	DSP48A1 #(.A0REG ( 1 ),.A1REG ( 1 ),.B0REG ( 1 ),.B1REG ( 1 ),.CARRYINREG ( 0 ),.CARRYINSEL ( "OPMODE5" ),.CREG ( 1 ),.DREG ( 1 ),.MREG ( 1 ),.OPMODEREG ( 0 ),.PREG ( 1 ),.RSTTYPE ( "SYNC" ),.CARRYOUTREG ( 0 ))
	dspc( .A(xi2),.B(yi2),.D(yr2),.C(pa),.CLK(clk),.PCIN(48'b0)
	,.CARRYIN(1'b0),.OPMODE({1'b0,1'b0,1'b0,1'b1,2'h3,2'h1})
	,.RSTA(rst),.RSTB(rst),.RSTM(rst),.RSTP(rst),.RSTC(rst),.RSTD(rst),.RSTCARRYIN(rst),.RSTOPMODE(rst)
	,.CEA(1'b1),.CEB(1'b1),.CEM(1'b1),.CEP(1'b1),.CEC(1'b1),.CED(1'b1),.CECARRYIN(1'b0),.CEOPMODE(1'b0)
	,.BCOUT(),.PCOUT(),.P(pc),.CARRYOUT(),.CARRYOUTF());
end
else if (FPGA=="7SERIES") begin
	// B*(A+-D)+=C
	// A->B D->A B->D

DSP48E1 #(.USE_DPORT("TRUE"),.SEL_MASK("ROUNDING_MODE1"),.CREG(0)
,.ACASCREG(1),.ADREG(1),.ALUMODEREG(1),.AREG(1),.BCASCREG(1),.BREG(1),.CARRYINREG(1),.CARRYINSELREG(1),.DREG(1),.INMODEREG(1),.MREG(1),.OPMODEREG(1),.PREG(1),.A_INPUT("DIRECT"),.B_INPUT("DIRECT"),.USE_MULT("MULTIPLY"),.USE_SIMD("ONE48"),.AUTORESET_PATDET("NO_RESET"),.PATTERN(48'b0),.SEL_PATTERN("PATTERN"),.USE_PATTERN_DETECT("NO_PATDET"),.MASK({2'b0,{46{1'b1}}})  // parameters remain default
) dspa (.CLK(clk)
,.A({{(30-XWIDTH){xi[XWIDTH-1]}},xi})
,.B({{(18-YWIDTH){yi[YWIDTH-1]}},yi})
,.C(48'b0)
,.D({{(25-XWIDTH){xr[XWIDTH-1]}},xr})
,.PCIN(48'b0)
,.ALUMODE({4'b0000}),.INMODE({1'b1,4'b1101}),.OPMODE({3'b000,2'b01,2'b01}),.CARRYINSEL({3'b000})
,.ACIN(30'b0),.BCIN(18'b0),.CARRYCASCIN(1'b0),.CARRYIN(1'b0),.MULTSIGNIN(1'b0)
,.CEA1(1'b1),.CEA2(1'b1),.CEAD(1'b1),.CEALUMODE(1'b1),.CEB1(1'b1),.CEB2(1'b1),.CEC(1'b1),.CECARRYIN(1'b1),.CECTRL(1'b1),.CED(1'b1),.CEINMODE(1'b1),.CEM(1'b1),.CEP(1'b1)
,.RSTA(rst),.RSTALLCARRYIN(rst),.RSTB(rst),.RSTC(rst),.RSTCTRL(rst),.RSTD(rst),.RSTINMODE(rst),.RSTM(rst),.RSTP(rst)
// output
,.ACOUT(),.BCOUT(),.CARRYCASCOUT(),.CARRYOUT(),.MULTSIGNOUT(),.OVERFLOW(),.PATTERNBDETECT(),.PATTERNDETECT(),.UNDERFLOW()
,.PCOUT(),.P(pa)
);
DSP48E1 #(.USE_DPORT("TRUE"),.SEL_MASK("ROUNDING_MODE1"),.CREG(0)
,.ACASCREG(1),.ADREG(1),.ALUMODEREG(1),.AREG(1),.BCASCREG(1),.BREG(1),.CARRYINREG(1),.CARRYINSELREG(1),.DREG(1),.INMODEREG(1),.MREG(1),.OPMODEREG(1),.PREG(1),.A_INPUT("DIRECT"),.B_INPUT("DIRECT"),.USE_MULT("MULTIPLY"),.USE_SIMD("ONE48"),.AUTORESET_PATDET("NO_RESET"),.PATTERN(48'b0),.SEL_PATTERN("PATTERN"),.USE_PATTERN_DETECT("NO_PATDET"),.MASK({2'b0,{46{1'b1}}})  // parameters remain default
) dspb (.CLK(clk)
,.A({{(30-18){yi2[18-1]}},yi2})
,.B({{(18-18){xr2[18-1]}},xr2})
,.C(pa)
,.D({{(25-18){yr2[18-1]}},yr2})
,.PCIN(48'b0)
,.ALUMODE({4'b0000}),.INMODE({1'b1,4'b1101}),.OPMODE({3'b011,2'b01,2'b01}),.CARRYINSEL({3'b000})
,.ACIN(30'b0),.BCIN(18'b0),.CARRYCASCIN(1'b0),.CARRYIN(1'b0),.MULTSIGNIN(1'b0)
,.CEA1(1'b1),.CEA2(1'b1),.CEAD(1'b1),.CEALUMODE(1'b1),.CEB1(1'b1),.CEB2(1'b1),.CEC(1'b1),.CECARRYIN(1'b1),.CECTRL(1'b1),.CED(1'b1),.CEINMODE(1'b1),.CEM(1'b1),.CEP(1'b1)
,.RSTA(rst),.RSTALLCARRYIN(rst),.RSTB(rst),.RSTC(rst),.RSTCTRL(rst),.RSTD(rst),.RSTINMODE(rst),.RSTM(rst),.RSTP(rst)
// output
,.ACOUT(),.BCOUT(),.CARRYCASCOUT(),.CARRYOUT(),.MULTSIGNOUT(),.OVERFLOW(),.PATTERNBDETECT(),.PATTERNDETECT(),.UNDERFLOW(),.PCOUT()
,.P(pb)
);
DSP48E1 #(.USE_DPORT("TRUE"),.SEL_MASK("ROUNDING_MODE1"),.CREG(0)
,.ACASCREG(1),.ADREG(1),.ALUMODEREG(1),.AREG(1),.BCASCREG(1),.BREG(1),.CARRYINREG(1),.CARRYINSELREG(1),.DREG(1),.INMODEREG(1),.MREG(1),.OPMODEREG(1),.PREG(1),.A_INPUT("DIRECT"),.B_INPUT("DIRECT"),.USE_MULT("MULTIPLY"),.USE_SIMD("ONE48"),.AUTORESET_PATDET("NO_RESET"),.PATTERN(48'b0),.SEL_PATTERN("PATTERN"),.USE_PATTERN_DETECT("NO_PATDET"),.MASK({2'b0,{46{1'b1}}})  // parameters remain default
) dspc (.CLK(clk)
,.A({{(30-18){yi2[18-1]}},yi2})
,.B({{(18-18){xi2[18-1]}},xi2})
,.C(pa)
,.D({{(25-18){yr2[18-1]}},yr2})
,.PCIN(48'b0)
,.ALUMODE({4'b0000}),.INMODE({1'b1,4'b0101}),.OPMODE({3'b011,2'b01,2'b01}),.CARRYINSEL({3'b000})
,.ACIN(30'b0),.BCIN(18'b0),.CARRYCASCIN(1'b0),.CARRYIN(1'b0),.MULTSIGNIN(1'b0)
,.CEA1(1'b1),.CEA2(1'b1),.CEAD(1'b1),.CEALUMODE(1'b1),.CEB1(1'b1),.CEB2(1'b1),.CEC(1'b1),.CECARRYIN(1'b1),.CECTRL(1'b1),.CED(1'b1),.CEINMODE(1'b1),.CEM(1'b1),.CEP(1'b1)
,.RSTA(rst),.RSTALLCARRYIN(rst),.RSTB(rst),.RSTC(rst),.RSTCTRL(rst),.RSTD(rst),.RSTINMODE(rst),.RSTM(rst),.RSTP(rst)
// output
,.ACOUT(),.BCOUT(),.CARRYCASCOUT(),.CARRYOUT(),.MULTSIGNOUT(),.OVERFLOW(),.PATTERNBDETECT(),.PATTERNDETECT(),.UNDERFLOW(),.PCOUT()
,.P(pc)
);

/*
	DSP48E1 //#(.A0REG ( 1 ),.A1REG ( 1 ),.B0REG ( 1 ),.B1REG ( 1 ),.CARRYINREG ( 0 ),.CARRYINSEL ( "OPMODE5" ),.CREG ( 1 ),.DREG ( 1 ),.MREG ( 1 ),.OPMODEREG ( 0 ),.PREG ( 1 ),.RSTTYPE ( "SYNC" ),.CARRYOUTREG ( 0 ))
	dspa( .B(yi),.D(xi),.A(xr),.C(48'b0),.CLK(clk),.PCIN(48'b0)
	,.CARRYIN(1'b0),.OPMODE({1'b0,1'b1,1'b0,1'b1,2'h0,2'h1}),.INMODE(4'b1101)
	,.RSTA(rst),.RSTB(rst),.RSTM(rst),.RSTP(rst),.RSTC(rst),.RSTD(rst)//,.RSTCARRYIN(rst),.RSTOPMODE(rst)
	//,.CEA(1'b1),.CEB(1'b1),.CEM(1'b1),.CEP(1'b1),.CEC(1'b1),.CED(1'b1),.CECARRYIN(1'b0),.CEOPMODE(1'b0)
	//,.BCOUT(),.PCOUT()
	,.P(pa)
	//,.CARRYOUT(),.CARRYOUTF()
	);
	DSP48E1 //#(.A0REG ( 1 ),.A1REG ( 1 ),.B0REG ( 1 ),.B1REG ( 1 ),.CARRYINREG ( 0 ),.CARRYINSEL ( "OPMODE5" ),.CREG ( 1 ),.DREG ( 1 ),.MREG ( 1 ),.OPMODEREG ( 0 ),.PREG ( 1 ),.RSTTYPE ( "SYNC" ),.CARRYOUTREG ( 0 ))
	dspb( .B(xr2),.D(yr2),.A(yi2),.C(pa),.CLK(clk),.PCIN(48'b0)
	,.CARRYIN(1'b0),.OPMODE({1'b0,1'b1,1'b0,1'b1,2'h3,2'h1}),.INMODE(4'b1101)
	,.RSTA(rst),.RSTB(rst),.RSTM(rst),.RSTP(rst),.RSTC(rst),.RSTD(rst)//,.RSTCARRYIN(rst),.RSTOPMODE(rst)
	//,.CEA(1'b1),.CEB(1'b1),.CEM(1'b1),.CEP(1'b1),.CEC(1'b1),.CED(1'b1),.CECARRYIN(1'b0),.CEOPMODE(1'b0)
	//,.BCOUT(),.PCOUT()
	,.P(pb)
	//,.CARRYOUT(),.CARRYOUTF()
	);
	DSP48E1 //#(.A0REG ( 1 ),.A1REG ( 1 ),.B0REG ( 1 ),.B1REG ( 1 ),.CARRYINREG ( 0 ),.CARRYINSEL ( "OPMODE5" ),.CREG ( 1 ),.DREG ( 1 ),.MREG ( 1 ),.OPMODEREG ( 0 ),.PREG ( 1 ),.RSTTYPE ( "SYNC" ),.CARRYOUTREG ( 0 ))
	dspc( .B(xi2),.D(yi2),.A(yr2),.C(pa),.CLK(clk),.PCIN(48'b0)
	,.CARRYIN(1'b0),.OPMODE({1'b0,1'b0,1'b0,1'b1,2'h3,2'h1}),.INMODE(4'b0101)
	,.RSTA(rst),.RSTB(rst),.RSTM(rst),.RSTP(rst),.RSTC(rst),.RSTD(rst)//,.RSTCARRYIN(rst),.RSTOPMODE(rst)
	//,.CEA(1'b1),.CEB(1'b1),.CEM(1'b1),.CEP(1'b1),.CEC(1'b1),.CED(1'b1),.CECARRYIN(1'b0),.CEOPMODE(1'b0)
	//,.BCOUT(),.PCOUT()
	,.P(pc)
	//,.CARRYOUT(),.CARRYOUTF()
	);*/
end
else if (FPGA=="REGMULT4") begin
	always @(posedge clk) begin
		prr<=xr*yr;
		pri<=xr*yi;
		pir<=xi*yr;
		pii<=xi*yi;
		pbr<=prr-pii;
		pcr<=pri+pir;
	end
	assign pb=pbr;
	assign pc=pcr;
end
else if (FPGA=="REGMULT") begin
	always @(posedge clk) begin
		par<=(xr-xi)*yi;
		pbr<=(yr-yi)*xr+par;
		pcr<=(yr+yi)*xi+par;
	end
	assign pb=pbr;
	assign pc=pcr;
end
else begin
	assign pb=(xr-xi)*yi+(yr-yi)*xr;
	assign pc=(xr-xi)*yi+(yr+yi)*xi;
	//assign pa=(xr-xi)*yi;
	//assign pb=(yr-yi)*xr+pa;
	//assign pc=(yr+yi)*xi+pa;
end
// (zr+1j*zi)=(xr+1j*xi)*(yr+1j*yi)
// = (xr*yr-xi*yi)+1j*(xr*yi+xi*yr)
// =(xr-xi)*yi+(yr-yi)*xr + 1j*((xr-xi)*yi+(yr+yi)*xi)
endgenerate
assign zr=pb;
assign zi=pc;

endmodule
