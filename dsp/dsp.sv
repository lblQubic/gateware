module dsp(	ifdspregs.regs regs
,ifdsp.dsp dspif
);

reg [15:0] cos=0;
reg [15:0] sin=0;
wire [15:0] cos_w;
wire [15:0] sin_w;
reg [255:0] dacval=0;
reg [255:0] dacval20=0;
reg [255:0] dacval30=0;
reg [255:0] dacval22=0;
reg [255:0] dacval32=0;
reg [17:0] tcnt=0;
reg [32-1:0] phase_32=0;
reg [31:0] freq=0;
wire [16:0] phase;

reg [32-1 : 0] cnt2=0;
wire cnt20=~|cnt2;
reg [1:0] msb2=0;
reg [11:0] cnt3=0;
always@(posedge dspif.clk) begin
	if (cnt20) begin
		msb2<=msb2+1;
		cnt2<= regs.test;
	end
	else begin
		cnt2<=cnt2-1;
	end
	cnt3<=cnt3+1;
end
reg [16*4-1:0] cntval=0;
reg [13:0] bramcnt=0;
always @(posedge dspif.clk) begin
	bramcnt<=bramcnt+1;
	//	cntval<={bramcnt,3'd7,bramcnt,3'd6,bramcnt,3'd5,bramcnt,3'd4
	cntval<={bramcnt,2'd3
	,bramcnt,2'd2
	,bramcnt,2'd1
	,bramcnt,2'd0
};
end

wire locklast=&dspif.bramaddr;
reg [16*16-1:0] cossteps_r=0;
reg [16*16-1:0] sinsteps_r=0;
wire [16*16-1:0] cossteps;
wire [16*16-1:0] sinsteps;
always @(posedge dspif.clk) begin
	if (regs.reset_bram_read[0]) begin
		dspif.bramaddr<=0;
	end
	else  begin
		dspif.bramaddr<=dspif.bramaddr+(locklast ? 11'b0 : 11'b1);
	end
	dspif.bramwe<={(64/8){~locklast}};
end

always @(posedge dspif.clk) begin
	case (regs.bramsel[1:0])
		0: begin
			dspif.bramval<=dspif.adc20; 
		end
		1: begin
			dspif.bramval<=cntval; 
		end
		2: begin
			dspif.bramval<={4{cos}}; 
		end
		3: begin
			dspif.bramval<={4{sin}};
		end
		4: begin
			dspif.bramval<=cossteps_r[63:0];
		end
		5: begin
			dspif.bramval<=sinsteps_r[63:0];
		end
		6: begin
			dspif.bramval<=cossteps_r[127:64];
		end
		7: begin
			dspif.bramval<=sinsteps_r[127:64];
		end
		8: begin
			dspif.bramval<=cossteps_r[191:128];
		end
		9: begin
			dspif.bramval<=sinsteps_r[191:128];
		end
		10: begin
			dspif.bramval<=cossteps_r[255:192];
		end
		11: begin
			dspif.bramval<=sinsteps_r[255:192];
		end
	endcase
end
always @(posedge dspif.clk) begin
	case (regs.dacsel[2:0])
		0: begin
			dacval<={16{msb2[1],{15{msb2[0]}}}};
		end
		1: begin
			dacval<={16{phase[16:1]}};
		end
		2: begin
			dacval<={16{cos}}; 
		end
		3: begin
			dacval<={16{sin}}; 
		end
		4: begin
			dacval<={cnt3[11:0],4'd15
			,cnt3[11:0],4'd14
			,cnt3[11:0],4'd13
			,cnt3[11:0],4'd12
			,cnt3[11:0],4'd11
			,cnt3[11:0],4'd10
			,cnt3[11:0],4'd9
			,cnt3[11:0],4'd8
			,cnt3[11:0],4'd7
			,cnt3[11:0],4'd6
			,cnt3[11:0],4'd5
			,cnt3[11:0],4'd4
			,cnt3[11:0],4'd3
			,cnt3[11:0],4'd2
			,cnt3[11:0],4'd1
			,cnt3[11:0],4'd0};
		end
		5: begin
			dacval<=cossteps_r;
		end
		6: begin
			dacval<=sinsteps_r;
		end
		default: begin
			dacval<={256{1'b0}};
		end
	endcase
	dacval20<=dacval;
	dacval30<=dacval;
	dacval22<=dacval;
	dacval32<=dacval;
end


always@(posedge dspif.clk) begin
	tcnt<=tcnt+1;
	freq<=regs.freq;
	//	phase_40<=freq*tcnt;
	phase_32<=phase_32+freq;
end
assign phase=phase_32[31:15];
cordicg1 #(.WIDTH(16),.NSTAGE(16),.NORMALIZE(1),.BUFIN(1),.GW(1),.NRIDER(0),.DRIVER(0))
cordicgtest(.clk(dspif.clk), .opin(1'b0), .xin(regs.amp[15:0]), .yin(0), .phasein(phase), .xout(cos_w), .yout(sin_w), .phaseout(),.error(),.gin(1'b1),.gout());

always @(posedge dspif.clk) begin
	cos<=cos_w;
	sin<=sin_w;
end

reg [16*16-1:0] cos16=0;
reg [16*16-1:0] sin16=0;

always @(posedge dspif.clk) begin

	cos16<={regs.freq0[31:16],regs.freq1[31:16],regs.freq2[31:16],regs.freq3[31:16],regs.freq4[31:16],regs.freq5[31:16],regs.freq6[31:16],regs.freq7[31:16],regs.freq8[31:16],regs.freq9[31:16],regs.freqa[31:16],regs.freqb[31:16],regs.freqc[31:16],regs.freqd[31:16],regs.freqe[31:16],regs.freqf[31:16]};
	sin16<={regs.freq0[15:0],regs.freq1[15:0],regs.freq2[15:0],regs.freq3[15:0],regs.freq4[15:0],regs.freq5[15:0],regs.freq6[15:0],regs.freq7[15:0],regs.freq8[15:0],regs.freq9[15:0],regs.freqa[15:0],regs.freqb[15:0],regs.freqc[15:0],regs.freqd[15:0],regs.freqe[15:0],regs.freqf[15:0]};
	cossteps_r<=cossteps;
	sinsteps_r<=sinsteps;

end
generate
for (genvar i=0;i<16;i++) begin
	wire [32:0] cos0,sin0;
	wire [15:0] yr=cos16[(i+1)*16-1:i*16];
	wire [15:0] yi=sin16[(i+1)*16-1:i*16];
	cmultiplier #(.XWIDTH(16),.YWIDTH(16))//#(.FPGA("REGMULT"))
	mult1(.clk(dspif.clk)
	,.xr(cos),.xi(sin)
	,.yr(yr),.yi(yi)

	//	,.xr({cos,{10{cos[0]}}})
	//	,.xi({sin,{10{sin[0]}}})
	//	,.yr({yr,{2{yr[0]}}})
	//	,.yi({yi,{2{yi[0]}}})
	//	,.xr({{9{cos[15]}},cos[15:0]})
	//	,.xi({{9{sin[15]}},sin[15:0]})
	//	,.yr({{2{yr[15]}},yr})
	//	,.yi({{2{yi[15]}},yi})
	,.zr(cos0),.zi(sin0)
	);
	assign cossteps[(i+1)*16-1:i*16]=cos0[31:16];//[47:32];
	assign sinsteps[(i+1)*16-1:i*16]=sin0[31:16];//[47:32];
end
endgenerate
assign regs.test1=regs.test;

assign dspif.dac20=dacval20;
assign dspif.dac30=dacval30;
assign dspif.dac22=dacval22;
assign dspif.dac32=dacval32;
endmodule

interface ifdsp(
);
wire clk;
wire reset;
logic [63:0] adc20;
logic [63:0] adc21;
logic [255:0] dac00;
logic [255:0] dac01;
logic [255:0] dac02;
logic [255:0] dac03;
logic [255:0] dac10;
logic [255:0] dac11;
logic [255:0] dac12;
logic [255:0] dac13;
logic [255:0] dac20;
logic [255:0] dac21;
logic [255:0] dac22;
logic [255:0] dac23;
logic [255:0] dac30;
logic [255:0] dac31;
logic [255:0] dac32;
logic [255:0] dac33;
logic [63:0] bramval;
reg [11-1:0] bramaddr=0;
reg [64/8-1:0] bramwe=0;

modport dsp(input adc20,adc21
,output dac00,dac01,dac02,dac03,dac10,dac11,dac12,dac13,dac20,dac21,dac22,dac23,dac30,dac31,dac32,dac33,bramval,bramaddr,bramwe
,input clk,reset
);
modport cfg(output adc20,adc21
,input dac00,dac01,dac02,dac03,dac10,dac11,dac12,dac13,dac20,dac21,dac22,dac23,dac30,dac31,dac32,dac33,bramval,bramaddr,bramwe
,output clk,reset
);
endinterface

