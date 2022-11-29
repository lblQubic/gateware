module dsp #(`include "plps_para.vh"	
)(	ifdspregs.regs regs
,ifdsp.dsp dspif
);
reg [8:0] reset_bram_read=0;
reg [15:0] cos=0;
reg [15:0] sin=0;
wire [15:0] cos_w;
wire [15:0] sin_w;
wire gcordic;
wire gmulti;
reg gmulti_r;
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
reg [15:0] cnt3=0;
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
wire [16*16-1:0] cossteps;
wire [16*16-1:0] sinsteps;

reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf=0;
reg [FREQ_R_ADDRWIDTH-1:0] addr_qdrvfreq=0;
reg [FREQ_R_ADDRWIDTH-1:0] addr_rdrvfreq=0;
reg [FREQ_R_ADDRWIDTH-1:0] addr_rdlofreq=0;
wire we_acqbuf=~locklast_acqbuf;
wire locklast_acqbuf=&addr_acqbuf;
always @(posedge dspif.clk) begin
	reset_bram_read={9{regs.stb_reset_bram_read}};
end
always @(posedge dspif.clk) begin
	addr_acqbuf<=reset_bram_read[0] ? 0 : (addr_acqbuf+ (locklast_acqbuf ? 0 : 1)); //(bramtohost0locklast ?{BRAMTOHOST_ADDRWIDTH{1'b0}} : {{(BRAMTOHOST_ADDRWIDTH-1){1'b0}},1'b1});
end
reg [ADC_AXIS_DATAWIDTH-1:0] adc20=0;
reg [ADC_AXIS_DATAWIDTH-1:0] adc21=0;
reg [ACQBUF_W_DATAWIDTH-1:0] data_acqbuf[0:1];
always @(posedge dspif.clk) begin
	adc20<=dspif.adc20;
	adc21<=dspif.adc21;
	data_acqbuf[1]<=adc20;
	data_acqbuf[0]<=dac20[63:0];
//	adc21<={cnt3[13:0],2'd3,cnt3[13:0],2'd2,cnt3[13:0],2'd1,cnt3[13:0],2'd0};
		//dspif.adc21;
	dspif.data_acqbuf[0]<=data_acqbuf[0];
	dspif.data_acqbuf[1]<=data_acqbuf[1];
	dspif.addr_acqbuf[0]<=addr_acqbuf;
	dspif.addr_acqbuf[1]<=addr_acqbuf;
	dspif.we_acqbuf[0]<=we_acqbuf;
	dspif.we_acqbuf[1]<=we_acqbuf;
		
	addr_qdrvfreq<=regs.qdrvfreqsel;
	addr_rdrvfreq<=regs.rdrvfreqsel;
	addr_rdlofreq<=regs.rdlofreqsel;
end

reg [QDRVENV_R_ADDRWIDTH-1:0] addr_qdrvenv=0;
reg [RDRVENV_R_ADDRWIDTH-1:0] addr_rdrvenv=0;
reg [RDLOENV_R_ADDRWIDTH-1:0] addr_rdloenv=0;
always @(posedge dspif.clk) begin
	addr_qdrvenv<=addr_qdrvenv+1; 
	addr_rdrvenv<=addr_rdrvenv+1; 
	addr_rdloenv<=addr_rdloenv+1; 
end
reg [DAC_AXIS_DATAWIDTH-1:0] dac20=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dac22=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dac30=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dac32=0;
wire [QDRVENV_R_DATAWIDTH-1:0] qdrvmultix_w[0:3];wire [QDRVENV_R_DATAWIDTH-1:0] qdrvmultiy_w[0:3];reg [QDRVENV_R_DATAWIDTH-1:0] qdrvmultix_r[0:3];reg [QDRVENV_R_DATAWIDTH-1:0] qdrvmultiy_r[0:3];
wire [RDRVENV_R_DATAWIDTH-1:0] rdrvmultix_w[0:3];wire [RDRVENV_R_DATAWIDTH-1:0] rdrvmultiy_w[0:3];reg [RDRVENV_R_DATAWIDTH-1:0] rdrvmultix_r[0:3];reg [RDRVENV_R_DATAWIDTH-1:0] rdrvmultiy_r[0:3];
wire [RDLOENV_R_DATAWIDTH-1:0] rdlomultix_w[0:3];wire [RDLOENV_R_DATAWIDTH-1:0] rdlomultiy_w[0:3];reg [RDLOENV_R_DATAWIDTH-1:0] rdlomultix_r[0:3];reg [RDLOENV_R_DATAWIDTH-1:0] rdlomultiy_r[0:3];

reg [256-1:0] rdrvsum=0;
generate
for (genvar i=0;i<16;i++) begin
	reg [15:0] rdrvsum0=0;
	reg [15:0] rdrvsum1=0;
	always @(posedge dspif.clk) begin
		rdrvsum0<=rdrvmultix_r[0][i*16+15:i*16+0]+rdrvmultix_r[1][i*16+15:i*16+0]+rdrvmultix_r[2][i*16+15:i*16+0];  //  not checking overflow, depends on user
		rdrvsum1<=rdrvmultix_r[3][i*16+15:i*16+0]+rdrvsum0;
		dac20[(i+1)*16-1:i*16]<=qdrvmultix_r[0][i*16+15:i*16+0];
		dac22[(i+1)*16-1:i*16]<=qdrvmultix_r[1][i*16+15:i*16+0];
		dac30[(i+1)*16-1:i*16]<=qdrvmultix_r[2][i*16+15:i*16+0];
		rdrvsum[(i+1)*16-1:i*16]<=rdrvsum1;
		dac32[(i+1)*16-1:i*16]<=rdrvsum[i*16+15:i*16+0];
		//	dac22[(i+1)*16-1:i*16]<=dspif.data_qdrvenv[0][i*32+15:i*32+0];
		//dac32[(i+1)*16-1:i*16]<=dspif.data_qdrvenv[1][i*32+15:i*32+0];

		dspif.dac20[(i+1)*16-1:i*16]<=dac20[(i+1)*16-1:i*16];
		dspif.dac22[(i+1)*16-1:i*16]<=dac22[(i+1)*16-1:i*16];
		dspif.dac30[(i+1)*16-1:i*16]<=dac30[(i+1)*16-1:i*16];
		dspif.dac32[(i+1)*16-1:i*16]<=dac32[(i+1)*16-1:i*16];
	end
end
endgenerate
reg [511:0] rdrvfreqcossinp[0:3];
reg [511:0] rdrvenvxy[0:3];
reg [15:0] rdrvampx[0:3];
reg [15:0] rdrvampy[0:3];
reg [16:0] rdrvpini[0:3];
reg [511:0] rdlofreqcossinp[0:3];
reg [511:0] rdloenvxy[0:3];
reg [15:0] rdloampx[0:3];
reg [15:0] rdloampy[0:3];
reg [16:0] rdlopini[0:3];
reg [511:0] qdrvfreqcossinp[0:3];
reg [511:0] qdrvenvxy[0:3];
reg [15:0] qdrvampx[0:3];
reg [15:0] qdrvampy[0:3];
reg [16:0] qdrvpini[0:3];

generate
for (genvar i=0;i<4;i++) begin
	always @(posedge dspif.clk) begin
		qdrvmultix_r[i]<=qdrvmultix_w[i];qdrvmultiy_r[i]<=qdrvmultiy_w[i];
		qdrvfreqcossinp[i]<=dspif.data_qdrvfreq[i];
		qdrvenvxy[i]<=dspif.data_qdrvenv[i];
		qdrvampx[i]<=regs.amp;		qdrvampy[i]<=0;		qdrvpini[i]<=0;
		
		rdrvmultix_r[i]<=rdrvmultix_w[i];rdrvmultiy_r[i]<=rdrvmultiy_w[i];
		rdrvfreqcossinp[i]<=dspif.data_rdrvfreq[i];
		rdrvenvxy[i]<=dspif.data_rdrvenv[i];
		rdrvampx[i]<=regs.amp;		rdrvampy[i]<=0;		rdrvpini[i]<=0;
		
		rdlomultix_r[i]<=rdlomultix_w[i];rdlomultiy_r[i]<=rdlomultiy_w[i];
		rdlofreqcossinp[i]<=dspif.data_rdlofreq[i];
		rdloenvxy[i]<=dspif.data_rdloenv[i];
		rdloampx[i]<=regs.amp;		rdloampy[i]<=0;		rdlopini[i]<=0;
	end
	ifelement qdrvelem(.clk(dspif.clk),.reset(dspif.reset));
	elemconnect qdrvelemconn(.elem(qdrvelem),.freqcossinp32x16(qdrvfreqcossinp[i]),.envxy32x16(qdrvenvxy[i]),.pini(qdrvpini[i]),.multix16x16(qdrvmultix_w[i]),.multiy16x16(qdrvmultiy_w[i]),.ampx(qdrvampx[i]),.ampy(qdrvampy[i]));
	elementcalc qdrvelemcalc(.elem(qdrvelem));
	ifelement rdrvelem(.clk(dspif.clk),.reset(dspif.reset));
	elemconnect rdrvelemconn(.elem(rdrvelem),.freqcossinp32x16(rdrvfreqcossinp[i]),.envxy32x16(rdrvenvxy[i]),.pini(rdrvpini[i]),.multix16x16(rdrvmultix_w[i]),.multiy16x16(rdrvmultiy_w[i]),.ampx(rdrvampx[i]),.ampy(rdrvampy[i]));
	elementcalc rdrvelemcalc(.elem(rdrvelem));
	ifelement rdloelem(.clk(dspif.clk),.reset(dspif.reset));
	elemconnect rdloelemconn(.elem(rdloelem),.freqcossinp32x16(rdlofreqcossinp[i]),.envxy32x16(rdloenvxy[i]),.pini(rdlopini[i]),.multix16x16(rdlomultix_w[i]),.multiy16x16(rdlomultiy_w[i]),.ampx(rdloampx[i]),.ampy(rdloampy[i]));
	elementcalc rdloelemcalc(.elem(rdloelem));
end
endgenerate
always @(posedge dspif.clk) begin
	dspif.addr_qdrvenv[0]<=addr_qdrvenv;
	dspif.addr_qdrvenv[1]<=addr_qdrvenv;
	dspif.addr_qdrvenv[2]<=addr_qdrvenv;
	dspif.addr_qdrvenv[3]<=addr_qdrvenv;
	dspif.addr_qdrvfreq[0]<=addr_qdrvfreq;
	dspif.addr_rdrvfreq[0]<=addr_rdrvfreq;
	dspif.addr_rdlofreq[0]<=addr_rdlofreq;
	dspif.addr_qdrvfreq[1]<=addr_qdrvfreq;
	dspif.addr_rdrvfreq[1]<=addr_rdrvfreq;
	dspif.addr_rdlofreq[1]<=addr_rdlofreq;
	dspif.addr_qdrvfreq[2]<=addr_qdrvfreq;
	dspif.addr_rdrvfreq[2]<=addr_rdrvfreq;
	dspif.addr_rdlofreq[2]<=addr_rdlofreq;
	dspif.addr_qdrvfreq[3]<=addr_qdrvfreq;
	dspif.addr_rdrvfreq[3]<=addr_rdrvfreq;
	dspif.addr_rdlofreq[3]<=addr_rdlofreq;
end

assign regs.test1=regs.test;//dspif.data_qdrvfreq[0][31:0];//regs.test;

`include "iladsp.vh"
endmodule

interface ifdsp #(
	`include "plps_para.vh"
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


   logic [ACCBUF_W_DATAWIDTH-1:0] data_accbuf[0:7];
   reg [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf[0:7];
   reg we_accbuf[0:7];

   logic [ACQBUF_W_DATAWIDTH-1:0] data_acqbuf[0:1];
   reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf[0:1];
   reg we_acqbuf[0:1];

   logic [COMMAND_R_DATAWIDTH-1:0] data_command[0:16];
   reg [COMMAND_R_ADDRWIDTH-1:0] addr_command[0:16];
   reg we_command[0:16];

   logic [QDRVENV_R_DATAWIDTH-1:0] data_qdrvenv[0:15];
   reg [QDRVENV_R_ADDRWIDTH-1:0] addr_qdrvenv[0:15];
   reg we_qdrvenv[0:15];

   logic [RDLOENV_R_DATAWIDTH-1:0] data_rdloenv[0:7];
   reg [RDLOENV_R_ADDRWIDTH-1:0] addr_rdloenv[0:7];
   reg we_rdloenv[0:7];

   logic [RDRVENV_R_DATAWIDTH-1:0] data_rdrvenv[0:7];
   reg [RDRVENV_R_ADDRWIDTH-1:0] addr_rdrvenv[0:7];
   reg we_rdrvenv[0:7];

   logic [FREQ_R_DATAWIDTH-1:0] data_rdrvfreq[0:7];
   reg [FREQ_R_ADDRWIDTH-1:0] addr_rdrvfreq[0:7];
   reg we_rdrvfreq[0:7];

   logic [FREQ_R_DATAWIDTH-1:0] data_rdlofreq[0:7];
   reg [FREQ_R_ADDRWIDTH-1:0] addr_rdlofreq[0:7];
   reg we_rdlofreq[0:7];

   logic [FREQ_R_DATAWIDTH-1:0] data_qdrvfreq[0:7];
   reg [FREQ_R_ADDRWIDTH-1:0] addr_qdrvfreq[0:7];
   reg we_qdrvfreq[0:7];

  modport dsp(input adc20,adc21
  ,output dac00,dac01,dac02,dac03,dac10,dac11,dac12,dac13,dac20,dac21,dac22,dac23,dac30,dac31,dac32,dac33
  ,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq
  ,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf
  ,input clk,reset
  ,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq
  );
  modport cfg(output adc20,adc21
  ,input dac00,dac01,dac02,dac03,dac10,dac11,dac12,dac13,dac20,dac21,dac22,dac23,dac30,dac31,dac32,dac33
  ,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq
  ,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf
  ,output clk,reset
  ,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq

  );
endinterface

