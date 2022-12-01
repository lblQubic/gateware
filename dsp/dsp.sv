module fakeprocs(input clk
,input reset
,input [127:0] command
,ifelement.proc qdrvelem
,ifelement.proc rdrvelem
,ifelement.proc rdloelem
);
reg [31:0] clkcnt=0;
always @(posedge clk) begin
	clkcnt<=clkcnt+1;
	qdrvelem.cmdstb<=clkcnt==10090;
	qdrvelem.envstart<=10'd46;
	qdrvelem.envlength<=10'd200;
	qdrvelem.ampx=16'd32000;
	qdrvelem.ampy=16'd0;
	qdrvelem.freqaddr=0;
	qdrvelem.pini=0;
	qdrvelem.mode=3;
	rdrvelem.cmdstb<=(clkcnt==19240 )|| (clkcnt ==21569);
	rdrvelem.envstart<=12'd125;
	rdrvelem.envlength<=12'd200;
	rdrvelem.ampx=16'd32000;
	rdrvelem.ampy=16'd0;
	rdrvelem.freqaddr=0;
	rdrvelem.pini=0;
	rdrvelem.mode=3;
	rdloelem.cmdstb<=(clkcnt==19250) || (clkcnt ==21579);
	rdloelem.envstart<=12'd125;
	rdloelem.envlength<=12'd200;
	rdloelem.ampx=16'd32000;
	rdloelem.ampy=16'd0;
	rdloelem.freqaddr=0;
	rdloelem.pini=0;
	rdloelem.mode=3;
end
endmodule
module dsp #(`include "plps_para.vh"	
)(	ifdspregs.regs regs
,ifdsp.dsp dspif
);
parameter TCNTWIDTH=32;
reg [TCNTWIDTH-1:0] tcnt=0;
always @(posedge dspif.clk) begin
	tcnt<=dspif.reset ? 0 : tcnt+1;
end

ifelement #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(18)) 
qdrvelem[0:3](.clk(dspif.clk),.reset(dspif.reset),.tcnt(tcnt[17:0]));
ifelement #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(18))
rdrvelem[0:3](.clk(dspif.clk),.reset(dspif.reset),.tcnt(tcnt[17:0]));
ifelement #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(18))
rdloelem[0:3](.clk(dspif.clk),.reset(dspif.reset),.tcnt(tcnt[17:0]));

generate for (genvar i =0; i<4; i=i+1) begin
	elementconn #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
	qdrvelemconn(.elem(qdrvelem[i]),.envaddr(dspif.addr_qdrvenv[i]),.envdata(dspif.data_qdrvenv[i]),.freqaddr(dspif.addr_qdrvfreq[i]),.freqdata(dspif.data_qdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
	rdrvelemconn(.elem(rdrvelem[i]),.envaddr(dspif.addr_rdrvenv[i]),.envdata(dspif.data_rdrvenv[i]),.freqaddr(dspif.addr_rdrvfreq[i]),.freqdata(dspif.data_rdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
	rdloelemconn(.elem(rdloelem[i]),.envaddr(dspif.addr_rdloenv[i]),.envdata(dspif.data_rdloenv[i]),.freqaddr(dspif.addr_rdlofreq[i]),.freqdata(dspif.data_rdlofreq[i]));
end
endgenerate

fakeprocs fakeprocs(.clk(dspif.clk),.reset(dspif.reset),.command(dspif.data_command[0]),.qdrvelem(qdrvelem[0]),.rdrvelem(rdrvelem[0]),.rdloelem(rdloelem[0]));

elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv0out (.elem(qdrvelem[0]),.valid(),.multix(dspif.dac20),.multiy());
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv1out (.elem(qdrvelem[1]),.valid(),.multix(dspif.dac22),.multiy());
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv2out (.elem(qdrvelem[2]),.valid(),.multix(dspif.dac30),.multiy());
elementsum4 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.valid(),.multix(dspif.dac32),.multiy());

reg [ADC_AXIS_DATAWIDTH-1:0] adc20=0;
reg [ADC_AXIS_DATAWIDTH-1:0] adc21=0;
always @(posedge dspif.clk) begin
	adc20<=dspif.adc20;
	adc21<=dspif.adc21;
end
reg [ACCBUF_W_DATAWIDTH-1:0] data_accbuf[0:7];
reg [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf[0:7];
reg we_accbuf[0:7];
generate 
for (genvar i=0;i<4;i=i+1) begin: rdlomixacc
	wire accvalid;
	elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH),.ACCADDWIDTH(16))
	rdlo0mixacc(.adcx(adc20),.adcy(adc21),.shift(15),.elem(rdloelem[i].mix),.valid(accvalid),.accx(data_accbuf[i][63:32]),.accy(data_accbuf[i][31:0]));
	always @(posedge dspif.clk) begin
		we_accbuf[i]<=accvalid;
		addr_accbuf[i]<=regs.resetacc ? 0 : addr_accbuf[i]+ accvalid;
	end

end
endgenerate
assign dspif.data_accbuf=data_accbuf;
assign dspif.addr_accbuf=addr_accbuf;
assign dspif.we_accbuf=we_accbuf;
//elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH),.ACCADDWIDTH(16))
//rdlo1mixacc(.adcx(adc20),.adcy(adc21),.shift(15),.elem(rdloelem[1].mix),.valid(),.accx(),.accy());
//elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH),.ACCADDWIDTH(16))
//rdlo2mixacc(.adcx(adc20),.adcy(adc21),.shift(15),.elem(rdloelem[2].mix),.valid(),.accx(),.accy());
//elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH),.ACCADDWIDTH(16))
//rdlo3mixacc(.adcx(adc20),.adcy(adc21),.shift(15),.elem(rdloelem[3].mix),.valid(),.accx(),.accy());
/*reg [8:0] reset_bram_read=0;
reg [15:0] cos=0;
reg [15:0] sin=0;
wire [15:0] cos_w;
wire [15:0] sin_w;
wire gcordic;
wire gmulti;
reg gmulti_r;
reg [DAC_AXIS_DATAWIDTH-1:0] dacval20=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dacval30=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dacval22=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dacval32=0;
reg [31:0] tcnt=0;
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

reg [FREQ_R_ADDRWIDTH-1:0] addr_qdrvfreq=0;
reg [FREQ_R_ADDRWIDTH-1:0] addr_rdrvfreq=0;
reg [FREQ_R_ADDRWIDTH-1:0] addr_rdlofreq=0;
reg [DACMON_W_ADDRWIDTH-1:0] addr_dacmon=0;
wire we_dacmon=~locklast_dacmon;
wire locklast_dacmon=&addr_dacmon;
always @(posedge dspif.clk) begin
	reset_bram_read={9{regs.stb_reset_bram_read}};
end
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf0=0;
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf1=0;
wire we_acqbuf0=~locklast_acqbuf0;
wire locklast_acqbuf0=&addr_acqbuf0;
wire we_acqbuf1=~locklast_acqbuf1;
wire locklast_acqbuf1=&addr_acqbuf1;
always @(posedge dspif.clk) begin
	addr_acqbuf0<=reset_bram_read[0] ? 0 : (addr_acqbuf0+ (locklast_acqbuf0 ? 0 : 1));
	addr_acqbuf1<=reset_bram_read[2] ? 0 : (addr_acqbuf1+ (locklast_acqbuf1 ? 0 : 1));
	addr_dacmon<=reset_bram_read[1] ? 0 : (addr_dacmon+ (locklast_dacmon ? 0 : 1));
end
reg [ADC_AXIS_DATAWIDTH-1:0] adc20=0;
reg [ADC_AXIS_DATAWIDTH-1:0] adc21=0;
reg [ACQBUF_W_DATAWIDTH-1:0] data_acqbuf[0:1];
always @(posedge dspif.clk) begin
	adc20<=dspif.adc20;
	adc21<=dspif.adc21;
	data_acqbuf[1]<=adc20;
	data_acqbuf[0]<=adc21;
	//	adc21<={cnt3[13:0],2'd3,cnt3[13:0],2'd2,cnt3[13:0],2'd1,cnt3[13:0],2'd0};
	//dspif.adc21;
	dspif.data_acqbuf[0]<=data_acqbuf[0];
	dspif.data_acqbuf[1]<=data_acqbuf[1];
	dspif.addr_acqbuf[0]<=addr_acqbuf0;
	dspif.addr_acqbuf[1]<=addr_acqbuf1;
	dspif.we_acqbuf[0]<=we_acqbuf0;
	dspif.we_acqbuf[1]<=we_acqbuf1;
	dspif.we_dacmon[0]<=we_dacmon;
	dspif.we_dacmon[1]<=we_dacmon;
	dspif.we_dacmon[2]<=we_dacmon;
	dspif.we_dacmon[3]<=we_dacmon;
	dspif.addr_dacmon[0]<=addr_dacmon;
	dspif.addr_dacmon[1]<=addr_dacmon;
	dspif.addr_dacmon[2]<=addr_dacmon;
	dspif.addr_dacmon[3]<=addr_dacmon;

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
for (genvar i=0;i<16;i++) begin : step16
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


		dspif.data_dacmon[0][(i+1)*16-1:i*16]<=dac20[(i+1)*16-1:i*16];
		dspif.data_dacmon[1][(i+1)*16-1:i*16]<=dac22[(i+1)*16-1:i*16];
		dspif.data_dacmon[2][(i+1)*16-1:i*16]<=dac30[(i+1)*16-1:i*16];
		dspif.data_dacmon[3][(i+1)*16-1:i*16]<=dac32[(i+1)*16-1:i*16];
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

always @(posedge dspif.clk) begin
	tcnt<=dspif.reset ? 0 : tcnt+1;
end

generate
for (genvar i=0;i<4;i++) begin : forqchan
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
	ammod qdrvammod(.clk(dspif.clk),.reset(dspif.reset),.tcnt(tcnt[17:0]),.freqcossinp32x16(qdrvfreqcossinp[i]),.envxy32x16(qdrvenvxy[i]),.pini(qdrvpini[i]),.multix16x16(qdrvmultix_w[i]),.multiy16x16(qdrvmultiy_w[i]),.ampx(qdrvampx[i]),.ampy(qdrvampy[i]));
	ammod rdrvammod(.clk(dspif.clk),.reset(dspif.reset),.tcnt(tcnt[17:0]),.freqcossinp32x16(rdrvfreqcossinp[i]),.envxy32x16(rdrvenvxy[i]),.pini(rdrvpini[i]),.multix16x16(rdrvmultix_w[i]),.multiy16x16(rdrvmultiy_w[i]),.ampx(rdrvampx[i]),.ampy(rdrvampy[i]));
	ammod rdloammod(.clk(dspif.clk),.reset(dspif.reset),.tcnt(tcnt[17:0]),.freqcossinp32x16(rdlofreqcossinp[i]),.envxy32x16(rdloenvxy[i]),.pini(rdlopini[i]),.multix16x16(rdlomultix_w[i]),.multiy16x16(rdlomultiy_w[i]),.ampx(rdloampx[i]),.ampy(rdloampy[i]));
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
*/
reg [DAC_AXIS_DATAWIDTH-1:0] dac20=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dac22=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dac30=0;
reg [DAC_AXIS_DATAWIDTH-1:0] dac32=0;
reg [8:0] reset_bram_read=0;
reg [DACMON_W_ADDRWIDTH-1:0] addr_dacmon=0;
wire we_dacmon=~locklast_dacmon;
wire locklast_dacmon=&addr_dacmon;
always @(posedge dspif.clk) begin
	reset_bram_read={9{regs.stb_reset_bram_read}};
end
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf0=0;
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf1=0;
wire we_acqbuf0=~locklast_acqbuf0;
wire locklast_acqbuf0=&addr_acqbuf0;
wire we_acqbuf1=~locklast_acqbuf1;
wire locklast_acqbuf1=&addr_acqbuf1;
always @(posedge dspif.clk) begin
	addr_acqbuf0<=reset_bram_read[0] ? 0 : (addr_acqbuf0+ (locklast_acqbuf0 ? 0 : 1));
	addr_acqbuf1<=reset_bram_read[2] ? 0 : (addr_acqbuf1+ (locklast_acqbuf1 ? 0 : 1));
	addr_dacmon<=reset_bram_read[1] ? 0 : (addr_dacmon+ (locklast_dacmon ? 0 : 1));
end
reg [ACQBUF_W_DATAWIDTH-1:0] data_acqbuf[0:1];
always @(posedge dspif.clk) begin
	data_acqbuf[1]<=adc20;
	data_acqbuf[0]<=adc21;
	dspif.data_acqbuf[0]<=data_acqbuf[0];
	dspif.data_acqbuf[1]<=data_acqbuf[1];
	dspif.addr_acqbuf[0]<=addr_acqbuf0;
	dspif.addr_acqbuf[1]<=addr_acqbuf1;
	dspif.we_acqbuf[0]<=we_acqbuf0;
	dspif.we_acqbuf[1]<=we_acqbuf1;
	dspif.we_dacmon[0]<=we_dacmon;
	dspif.we_dacmon[1]<=we_dacmon;
	dspif.we_dacmon[2]<=we_dacmon;
	dspif.we_dacmon[3]<=we_dacmon;
	dspif.addr_dacmon[0]<=addr_dacmon;
	dspif.addr_dacmon[1]<=addr_dacmon;
	dspif.addr_dacmon[2]<=addr_dacmon;
	dspif.addr_dacmon[3]<=addr_dacmon;
end

generate
for (genvar i=0;i<16;i++) begin : step16
	always @(posedge dspif.clk) begin
		dac20[(i+1)*16-1:i*16]<=dspif.dac20[(i+1)*16-1:i*16];
		dac22[(i+1)*16-1:i*16]<=dspif.dac22[(i+1)*16-1:i*16];
		dac30[(i+1)*16-1:i*16]<=dspif.dac30[(i+1)*16-1:i*16];
		dac32[(i+1)*16-1:i*16]<=dspif.dac32[(i+1)*16-1:i*16];
		dspif.data_dacmon[0][(i+1)*16-1:i*16]<=dac20[(i+1)*16-1:i*16];
		dspif.data_dacmon[1][(i+1)*16-1:i*16]<=dac22[(i+1)*16-1:i*16];
		dspif.data_dacmon[2][(i+1)*16-1:i*16]<=dac30[(i+1)*16-1:i*16];
		dspif.data_dacmon[3][(i+1)*16-1:i*16]<=dac32[(i+1)*16-1:i*16];
	end
end
endgenerate

assign regs.test1=regs.test;//dspif.data_qdrvfreq[0][31:0];//regs.test;

//`include "iladsp.vh"
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


logic [DACMON_W_DATAWIDTH-1:0] data_dacmon[0:7];
reg [DACMON_W_ADDRWIDTH-1:0] addr_dacmon[0:7];
reg we_dacmon[0:7];

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

logic [RDRVFREQ_R_DATAWIDTH-1:0] data_rdrvfreq[0:7];
reg [RDRVFREQ_R_ADDRWIDTH-1:0] addr_rdrvfreq[0:7];
reg we_rdrvfreq[0:7];

logic [RDLOFREQ_R_DATAWIDTH-1:0] data_rdlofreq[0:7];
reg [RDLOFREQ_R_ADDRWIDTH-1:0] addr_rdlofreq[0:7];
reg we_rdlofreq[0:7];

logic [QDRVFREQ_R_DATAWIDTH-1:0] data_qdrvfreq[0:7];
reg [QDRVFREQ_R_ADDRWIDTH-1:0] addr_qdrvfreq[0:7];
reg we_qdrvfreq[0:7];

modport dsp(input adc20,adc21
,output dac00,dac01,dac02,dac03,dac10,dac11,dac12,dac13,dac20,dac21,dac22,dac23,dac30,dac31,dac32,dac33
,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq,addr_dacmon
,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf,data_dacmon,we_dacmon
,input clk,reset
,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq
);
modport cfg(output adc20,adc21
,input dac00,dac01,dac02,dac03,dac10,dac11,dac12,dac13,dac20,dac21,dac22,dac23,dac30,dac31,dac32,dac33
,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq,addr_dacmon
,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf,data_dacmon,we_dacmon
,output clk,reset
,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq

);
endinterface

