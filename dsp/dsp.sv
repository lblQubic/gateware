module dsp #(parameter DEBUG="true"
,parameter DAC_AXIS_DATAWIDTH=256
,parameter ADC_AXIS_DATAWIDTH=64
,parameter integer BRAMTOHOST_ADDRWIDTH=13
,parameter integer BRAMTOHOST_DATAWIDTH=64
,parameter integer BRAMFROMHOST_ADDRWIDTH=32
,parameter integer BRAMFROMHOST_DATAWIDTH=256
)(	ifdspregs.regs regs
,ifdsp.dsp dspif
);
reg [7:0] reset_bram_read=0;
reg [15:0] cos=0;
reg [15:0] sin=0;
wire [15:0] cos_w;
wire [15:0] sin_w;
reg [DAC_AXIS_DATAWIDTH-1:0] dacval=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dacval20=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dacval30=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dacval22=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dacval32=0;
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

wire bramtohost0locklast=&bramtohost0_addr;
wire bramfromhost0locklast=&bramfromhost0_addr;
wire bramfromhost1locklast=&bramfromhost1_addr;
reg [BRAMFROMHOST_ADDRWIDTH-1:0] bramfromhost1_addr=0;
reg [BRAMFROMHOST_ADDRWIDTH-1:0] bramfromhost0_addr=0;
reg [BRAMTOHOST_ADDRWIDTH-1:0] bramtohost0_addr=0;
reg [BRAMTOHOST_DATAWIDTH/8-1:0] bramtohost0_we=0;
reg [BRAMFROMHOST_DATAWIDTH/8-1:0] bramfromhost1_we=0;
reg [BRAMFROMHOST_DATAWIDTH/8-1:0] bramfromhost0_we=0;
reg [16*16-1:0] cossteps_r=0;
reg [16*16-1:0] sinsteps_r=0;
wire [16*16-1:0] cossteps;
wire [16*16-1:0] sinsteps;
wire [15:0] addr0={bramfromhost1_addr[11:0],4'h0};
wire [15:0] addr1={bramfromhost1_addr[11:0],4'h1};
wire [15:0] addr2={bramfromhost1_addr[11:0],4'h2};
wire [15:0] addr3={bramfromhost1_addr[11:0],4'h3};
wire [15:0] addr4={bramfromhost1_addr[11:0],4'h4};
wire [15:0] addr5={bramfromhost1_addr[11:0],4'h5};
wire [15:0] addr6={bramfromhost1_addr[11:0],4'h6};
wire [15:0] addr7={bramfromhost1_addr[11:0],4'h7};
wire [15:0] addr8={bramfromhost1_addr[11:0],4'h8};
wire [15:0] addr9={bramfromhost1_addr[11:0],4'h9};
wire [15:0] addra={bramfromhost1_addr[11:0],4'ha};
wire [15:0] addrb={bramfromhost1_addr[11:0],4'hb};
wire [15:0] addrc={bramfromhost1_addr[11:0],4'hc};
wire [15:0] addrd={bramfromhost1_addr[11:0],4'hd};
wire [15:0] addre={bramfromhost1_addr[11:0],4'he};
wire [15:0] addrf={bramfromhost1_addr[11:0],4'hf};
always @(posedge dspif.clk) begin
	reset_bram_read={8{regs.reset_bram_read[0]}};
	if (reset_bram_read[0]) begin
		bramtohost0_addr<=0;
		bramtohost0_we<={(64/8){1'b0}};
	end
	else  begin
		bramfromhost0_addr<=bramfromhost0_addr+(bramtohost0locklast ?{BRAMFROMHOST_ADDRWIDTH{1'b0}} : {{(BRAMFROMHOST_ADDRWIDTH-1){1'b0}},1'b1});
		bramtohost0_we<={(64/8){~bramtohost0locklast}};
	end
	dspif.bramtohost0_we<=bramtohost0_we;
	dspif.bramtohost0_addr<=bramtohost0_addr;

	bramfromhost1_addr<=reset_bram_read[1] ? 0 : bramfromhost1_addr+(bramfromhost1locklast ?{BRAMFROMHOST_ADDRWIDTH{1'b0}} : {{(BRAMFROMHOST_ADDRWIDTH-1){1'b0}},1'b1});
	bramfromhost1_we<={(BRAMFROMHOST_DATAWIDTH/8){reset_bram_read[1] ? 1'b0 : ~bramfromhost1locklast}};

	dspif.bramfromhost1_addr<=bramfromhost1_addr;
	dspif.bramfromhost1_we<=bramfromhost1_we;

	if (reset_bram_read[2]) begin
		bramfromhost0_addr<=0;
		bramfromhost0_we<={(BRAMFROMHOST_DATAWIDTH/8){1'b0}};
	end
	else begin
		bramfromhost0_addr<=bramfromhost0_addr+(bramfromhost0locklast ? {BRAMTOHOST_ADDRWIDTH{1'b0}} : {{(BRAMTOHOST_ADDRWIDTH-1){1'b0}},1'b1});
		bramfromhost0_we<={(BRAMFROMHOST_DATAWIDTH/8){~bramfromhost0locklast}};
	end
	dspif.bramfromhost0_we<=bramfromhost0_we;
	dspif.bramfromhost0_addr<=bramfromhost0_addr;

	dspif.bramfromhost1_data<={
		addrf
		,addre
		,addrd
		,addrc
		,addrb
		,addra
		,addr9
		,addr8
		,addr7
		,addr6
		,addr5
		,addr4
		,addr3
		,addr2
		,addr1
		,addr0
	};
end

always @(posedge dspif.clk) begin
	case (regs.bramsel[4:0])
		0: begin
			dspif.bramtohost0_data<=dspif.adc20; 
		end
		1: begin
			dspif.bramtohost0_data<=cntval; 
		end
		2: begin
			dspif.bramtohost0_data<={4{cos}}; 
		end
		3: begin
			dspif.bramtohost0_data<={4{sin}};
		end
		4: begin
			dspif.bramtohost0_data<=cossteps_r[63:0];
			dspif.bramfromhost0_data<=cossteps_r;
		end
		5: begin
			dspif.bramtohost0_data<=sinsteps_r[63:0];
			dspif.bramfromhost0_data<=sinsteps_r;
		end
		6: begin
			dspif.bramtohost0_data<=cossteps_r[127:64];
		end
		7: begin
			dspif.bramtohost0_data<=sinsteps_r[127:64];
		end
		8: begin
			dspif.bramtohost0_data<=cossteps_r[191:128];
		end
		9: begin
			dspif.bramtohost0_data<=sinsteps_r[191:128];
		end
		10: begin
			dspif.bramtohost0_data<=cossteps_r[255:192];
		end
		11: begin
			dspif.bramtohost0_data<=sinsteps_r[255:192];
		end
	endcase
end
always @(posedge dspif.clk) begin
	case (regs.dacsel[4:0])
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
	phase_32<=regs.reset_bram_read[0] ? 0 : (phase_32+freq);
	
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
	assign cossteps[(i+1)*16-1:i*16]=cos0[30:15];//[47:32];
	assign sinsteps[(i+1)*16-1:i*16]=sin0[30:15];//[47:32];
end
endgenerate
assign regs.test1=regs.test;

assign dspif.dac20=dacval20;
assign dspif.dac30=dacval30;
assign dspif.dac22=dacval22;
assign dspif.dac32=dacval32;
endmodule

interface ifdsp #(
	parameter DAC_AXIS_DATAWIDTH=256
	,parameter ADC_AXIS_DATAWIDTH=64
	,parameter integer BRAMTOHOST_ADDRWIDTH=13
	,parameter integer BRAMTOHOST_DATAWIDTH=64
	,parameter integer BRAMFROMHOST_ADDRWIDTH=32
	,parameter integer BRAMFROMHOST_DATAWIDTH=256
	)(
	);
	wire clk;
	wire reset;
	logic [ADC_AXIS_DATAWIDTH-1:0] adc20;
	logic [ADC_AXIS_DATAWIDTH-1:0] adc21;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac00;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac01;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac02;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac03;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac10;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac11;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac12;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac13;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac20;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac21;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac22;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac23;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac30;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac31;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac32;
	logic [DAC_AXIS_DATAWIDTH-1:0] dac33;
	logic [BRAMTOHOST_DATAWIDTH-1:0] bramtohost0_data;
	reg [BRAMTOHOST_ADDRWIDTH-1:0] bramtohost0_addr=0;
	reg [BRAMTOHOST_DATAWIDTH/8-1:0] bramtohost0_we=0;
	logic [BRAMTOHOST_DATAWIDTH-1:0] bramtohost1_data;
	reg [BRAMTOHOST_ADDRWIDTH-1:0] bramtohost1_addr=0;
	reg [BRAMTOHOST_DATAWIDTH/8-1:0] bramtohost1_we=0;

	logic [BRAMFROMHOST_DATAWIDTH-1:0] bramfromhost0_data;
	reg [BRAMFROMHOST_ADDRWIDTH-1:0] bramfromhost0_addr=0;
	reg [BRAMFROMHOST_DATAWIDTH/8-1:0] bramfromhost0_we=0;
	logic [BRAMFROMHOST_DATAWIDTH-1:0] bramfromhost1_data;
	reg [BRAMFROMHOST_ADDRWIDTH-1:0] bramfromhost1_addr=0;
	reg [BRAMFROMHOST_DATAWIDTH/8-1:0] bramfromhost1_we=0;
	logic [BRAMFROMHOST_DATAWIDTH-1:0] bramfromhost2_data;
	reg [BRAMFROMHOST_ADDRWIDTH-1:0] bramfromhost2_addr=0;
	reg [BRAMFROMHOST_DATAWIDTH/8-1:0] bramfromhost2_we=0;
	logic [BRAMFROMHOST_DATAWIDTH-1:0] bramfromhost3_data;
	reg [BRAMFROMHOST_ADDRWIDTH-1:0] bramfromhost3_addr=0;
	reg [BRAMFROMHOST_DATAWIDTH/8-1:0] bramfromhost3_we=0;


	modport dsp(input adc20,adc21
	,output dac00,dac01,dac02,dac03,dac10,dac11,dac12,dac13,dac20,dac21,dac22,dac23,dac30,dac31,dac32,dac33,bramtohost0_data,bramtohost0_addr,bramtohost0_we,bramtohost1_data,bramtohost1_addr,bramtohost1_we,bramfromhost0_data,bramfromhost0_addr,bramfromhost0_we,bramfromhost1_addr,bramfromhost2_addr,bramfromhost3_addr
	,bramfromhost1_data,bramfromhost1_we
	,input clk,reset
	,bramfromhost2_data,bramfromhost2_we,bramfromhost3_data,bramfromhost3_we
	);
	modport cfg(output adc20,adc21
	,input dac00,dac01,dac02,dac03,dac10,dac11,dac12,dac13,dac20,dac21,dac22,dac23,dac30,dac31,dac32,dac33,bramtohost0_data,bramtohost0_addr,bramtohost0_we,bramfromhost0_data,bramfromhost0_addr,bramfromhost0_we,bramtohost1_data,bramtohost1_addr,bramtohost1_we,bramfromhost1_addr,bramfromhost2_addr,bramfromhost3_addr
	,bramfromhost1_data,bramfromhost1_we
	,output clk,reset
	,bramfromhost2_data,bramfromhost2_we,bramfromhost3_data,bramfromhost3_we
	);
endinterface

