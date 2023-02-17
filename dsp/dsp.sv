/**
* reset/strobe signals:
*  - stb_start: 1 clock cycle, pos edge
*       assert this to start nshot experiment (reset procs)
*  - nshot: reg, number of shots to take
*       proc will run command buffer nshot times, with resets in between
*  - resetacc: level signal reset high
*       assert this to reset write pointer to acc_buf (where shots are stored; all channels)
*
*  - reset: reset all modules
*
*  to run experiment: 
*   - set nshot
*   - assert resetacc + stb_start when ready
*
*/

module dsp #(`include "plps_para.vh"	
,`include "bram_para.vh"
,`include "braminit_para.vh"
)(ifdsp.dsp dspif
);
localparam TCNTWIDTH=27;
reg procreset=0;
reg procreset_d=0;
reg done=0;
reg [31:0] nshot=0;
wire [NPROC-1:0] stbprocend;
wire [NPROC-1:0] procdone;
reg procdone_r=0;
wire [NPROC-1:0] nobusy;
reg nobusy_r=0;
reg [31:0] shotcnt=0;
reg [31:0] nextshotcnt=0;//shotcnt+1;
reg [31:0] currentshotcnt=0;
reg [NPROC-1:0]proccorereset;
always @(posedge dspif.clk) begin
	procreset_d<=procreset;
	//	proccorereset<={NPROC{procreset|procreset_d}};
	proccorereset<={NPROC{procreset}};
	dspif.procdone<=procdone;
end

assign dspif.shotcnt=currentshotcnt;
assign dspif.lastshotdone=done;
//wire proccorereset=~shotbusy|moreshot|moreshot_d;
ifelement #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrvelem[0:NPROC-1](.clk(dspif.clk));
ifelement #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdrvelem[0:NPROC-1](.clk(dspif.clk));
ifelement #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdloelem[0:NPROC-1](.clk(dspif.clk));


wire [3:0] state_dbg[0:NPROC-1];
wire [3:0] nextstate_dbg[0:NPROC-1];
generate 
for (genvar i =0; i<NPROC; i=i+1) begin: procinst
	proc_core 
	proc_core(.clk(dspif.clk),.reset(proccorereset[i]),.command(dspif.data_command[i]), .cmd_read_addr(dspif.addr_command[i]),.qdrvelem(qdrvelem[i]),.rdrvelem(rdrvelem[i]),.rdloelem(rdloelem[i]),.stbend(stbprocend[i]),.procdone_mon(procdone[i]),.nobusy_mon(nobusy[i])
	,.state_dbg(state_dbg[i]),.nextstate_dbg(nextstate_dbg[i])
	);
	elementconn #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
	qdrvelemconn(.elem(qdrvelem[i]),.envaddr(dspif.addr_qdrvenv[i]),.envdata(dspif.data_qdrvenv[i]),.freqaddr(dspif.addr_qdrvfreq[i]),.freqdata(dspif.data_qdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH),.INTPRATIO(RDRVINTPRATIO))
	rdrvelemconn(.elem(rdrvelem[i]),.envaddr(dspif.addr_rdrvenv[i]),.envdata(dspif.data_rdrvenv[i]),.freqaddr(dspif.addr_rdrvfreq[i]),.freqdata(dspif.data_rdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.INTPRATIO(RDLOINTPRATIO))
	rdloelemconn(.elem(rdloelem[i]),.envaddr(dspif.addr_rdloenv[i]),.envdata(dspif.data_rdloenv[i]),.freqaddr(dspif.addr_rdlofreq[i]),.freqdata(dspif.data_rdlofreq[i]));
end
endgenerate

ifxma #(.NDAC(NDAC),.DAC_AXIS_DATAWIDTH(DAC_AXIS_DATAWIDTH)) xmaif(.clk(dspif.clk));

generate
for (genvar i=0;i<NPROC;i=i+1) begin: qdrvouts
	elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
	qdrvout (.elem(qdrvelem[i]),.valid(),.multix(xmaif.daccplxx[i]),.multiy(xmaif.daccplxy[i]));
end
endgenerate
//elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
//qdrv1out (.elem(qdrvelem[1]),.valid(),.multix(xmaif.daccplxx[2]),.multiy(xmaif.daccplxy[2]));
//elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
//qdrv2out (.elem(qdrvelem[2]),.valid(),.multix(xmaif.daccplxx[3]),.multiy(xmaif.daccplxy[3]));
/*generate begin : rdrvoutinst
	if ((NPROC>=4) && (NPROC<8))
		elementsum4 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.valid(),.multix(xmaif.daccplxx[NPROC]),.multiy(xmaif.daccplxy[NPROC]));
	else if ((NPROC>=8) && (NPROC<14))
		elementsum8 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.elem4(rdrvelem[4]),.elem5(rdrvelem[5]),.elem6(rdrvelem[6]),.elem7(rdrvelem[7]),.valid(),.multix(xmaif.daccplxx[NPROC]),.multiy(xmaif.daccplxy[NPROC]));
	else if (NPROC==14) begin
		elementsum8 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))rdrvout07 (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.elem4(rdrvelem[4]),.elem5(rdrvelem[5]),.elem6(rdrvelem[6]),.elem7(rdrvelem[7]),.valid(),.multix(xmaif.daccplxx[NPROC]),.multiy(xmaif.daccplxy[NPROC]));
		elementsum8 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))rdrvout8f (.elem0(rdrvelem[8]),.elem1(rdrvelem[9]),.elem2(rdrvelem[10]),.elem3(rdrvelem[11]),.elem4(rdrvelem[12]),.elem5(rdrvelem[13]),.elem6(rdrvelem[14]),.elem7(rdrvelem[15]),.valid(),.multix(xmaif.daccplxx[NPROC+1]),.multiy(xmaif.daccplxy[NPROC+1]));
	end
end
endgenerate*/
reg signed [DAC_AXIS_DATAWIDTH-1:0] rdrvxin1 [0:NDLO1-1];
reg signed [DAC_AXIS_DATAWIDTH-1:0] rdrvyin1 [0:NDLO1-1];
generate
for (genvar i=0;i<NDLO1;i=i+1) begin
	assign rdrvxin1[i]=rdrvelem[i].multix;
	assign rdrvyin1[i]=rdrvelem[i].multiy;
end
endgenerate

slicesum #(.DATAWIDTH(DAC_AXIS_DATAWIDTH),.NITEM(NDLO1))
rdrvelemout1 (.clk(dspif.clk),.xin(rdrvxin1),.yin(rdrvyin1),.valid(),.xout(xmaif.daccplxx[NPROC]),.yout(xmaif.daccplxy[NPROC]));

reg signed [DAC_AXIS_DATAWIDTH-1:0] rdrvxin2 [0:NDLO2-1];
reg signed [DAC_AXIS_DATAWIDTH-1:0] rdrvyin2 [0:NDLO2-1];
generate
for (genvar i=0;i<NDLO2;i=i+1) begin
	assign rdrvxin2[i]=rdrvelem[i+8].multix;
	assign rdrvyin2[i]=rdrvelem[i+8].multiy;
end
endgenerate

slicesum #(.DATAWIDTH(DAC_AXIS_DATAWIDTH),.NITEM(NDLO2))
rdrvelemout2 (.clk(dspif.clk),.xin(rdrvxin2),.yin(rdrvyin2),.valid(),.xout(xmaif.daccplxx[NPROC+1]),.yout(xmaif.daccplxy[NPROC+1]));

generate
for (genvar i=0;i<NDAC;i=i+1) begin
	assign dspif.dac[i]=xmaif.daccplxx[i];
end
endgenerate
//assign dspif.dac[1]=xmaif.daccplxx[1];
//assign dspif.dac[2]=xmaif.daccplxx[2];
//assign dspif.dac[3]=xmaif.daccplxx[3];
//assign dspif.dac[0]=xmaif.sumcplxx[0];
//assign dspif.dac[1]=xmaif.sumcplxx[1];
//assign dspif.dac[2]=xmaif.sumcplxx[2];
//assign dspif.dac[3]=xmaif.sumcplxx[3];
assign xmaif.coef=dspif.coef;

reg [ADC_AXIS_DATAWIDTH-1:0] adc[0:NADC-1];
reg [ADC_AXIS_DATAWIDTH-1:0] dacundersample[0:NDAC-1];
reg [ADC_AXIS_DATAWIDTH-1:0] mixbb1=0;
reg [ADC_AXIS_DATAWIDTH-1:0] mixbb2=0;
reg [NPROC-1:0] resetacc=0;
generate 
for (genvar i=0;i<NADC;i=i+1) begin
	always @(posedge dspif.clk) begin
		adc[i]<=dspif.adc[i];
	end
end
endgenerate
generate
for (genvar i=0;i<NDAC;i=i+1) begin
	for (genvar j=0;j<4;j=j+1) begin
		always@(posedge dspif.clk) begin
			dacundersample[i][j*16+:16]<=dspif.dac[i][j*16*4+:16];
		end
	end
end
endgenerate
always @(posedge dspif.clk) begin
	resetacc<={NPROC{dspif.resetacc}};

	case (dspif.mixbb1sel)
		0: 	mixbb1<=adc[0];
		1: 	mixbb1<=dacundersample[0];
		2: 	mixbb1<=dacundersample[1];
	//	1: 	mixbb1<=adc[1];
	//	2: 	mixbb1<=dacundersample[0];
	//	3: 	mixbb1<=dacundersample[1];
	//	4: 	mixbb1<=dacundersample[2];
	//	5: 	mixbb1<=dacundersample[3];
	//	6: 	mixbb1<=0;
	endcase
	case (dspif.mixbb2sel)
		0: 	mixbb2<=adc[1];
		1: 	mixbb2<=dacundersample[2];
		2: 	mixbb2<=dacundersample[3];
	//	0: 	mixbb2<=adc[0];
		//1: 	mixbb2<=adc[1];
		//2: 	mixbb2<=dacundersample[0];
		//3: 	mixbb2<=dacundersample[1];
		//4: 	mixbb2<=dacundersample[2];
		//5: 	mixbb2<=dacundersample[3];
		//6: 	mixbb2<=0;
	endcase

end
localparam NDLO=NDLO1+NDLO2;
reg [ACCBUF_W_DATAWIDTH-1:0] data_accbuf[0:NDLO-1];
reg [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf[0:NDLO-1];
wire locklast_accbuf[0:NDLO-1];
reg we_accbuf[0:NDLO-1];
/*
generate 
for (genvar i=0;i<NDLO;i=i+1) begin: rdlomixacc
	wire accvalid;
	elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.ACCADDWIDTH(16))
	rdlo0mixacc(.adcx(mixbb1),.adcy(mixbb2),.shift(dspif.shift),.elem(rdloelem[i].mix),.gateout(),.accx(data_accbuf[i][63:32]),.accy(data_accbuf[i][31:0]),.stbout(accvalid));
	assign locklast_accbuf[i]=&addr_accbuf[i];
	always @(posedge dspif.clk) begin
		we_accbuf[i]<=accvalid;
		addr_accbuf[i]<=resetacc[i] ? 0 : addr_accbuf[i]+ (~locklast_accbuf[i] & we_accbuf[i]);
	end

end
endgenerate
*/
generate 
for (genvar i=0;i<NDLO;i=i+1) begin: rdlomixacc
	wire accvalid;
	if (i<NDLO1) begin
		elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.ACCADDWIDTH(16))
		rdlo0mixacc1(.adcx(mixbb1),.adcy(0),.shift(dspif.shift),.elem(rdloelem[i].mix),.gateout(),.accx(data_accbuf[i][63:32]),.accy(data_accbuf[i][31:0]),.stbout(accvalid));
	end
	else begin
		elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.ACCADDWIDTH(16))
		rdlo0mixacc2(.adcx(mixbb2),.adcy(0),.shift(dspif.shift),.elem(rdloelem[i].mix),.gateout(),.accx(data_accbuf[i][63:32]),.accy(data_accbuf[i][31:0]),.stbout(accvalid));
	end
	assign locklast_accbuf[i]=&addr_accbuf[i];
	always @(posedge dspif.clk) begin
		we_accbuf[i]<=accvalid;
		addr_accbuf[i]<=resetacc[i] ? 0 : addr_accbuf[i]+ (~locklast_accbuf[i] & we_accbuf[i]);
	end
end
endgenerate
assign dspif.data_accbuf=data_accbuf;
assign dspif.addr_accbuf=addr_accbuf;
assign dspif.we_accbuf=we_accbuf;
assign dspif.addr_accbuf_mon0=addr_accbuf[0];
assign dspif.addr_accbuf_mon1=addr_accbuf[1];
assign dspif.addr_accbuf_mon2=addr_accbuf[2];
assign dspif.addr_accbuf_mon3=addr_accbuf[3];

reg [DAC_AXIS_DATAWIDTH-1:0] dac[0:3];

panzoomtrigif #(.NCHAN(10),.ADDRWIDTH(ACQBUF_W_ADDRWIDTH),.DATAWIDTH(ACQBUF_W_DATAWIDTH))acqpztif[0:1]();
panzoomtrigif #(.NCHAN(4),.ADDRWIDTH(DACMON_W_ADDRWIDTH),.DATAWIDTH(DACMON_W_DATAWIDTH))dacmonpztif[0:4]();
generate 
for (genvar i=0;i<2;i=i+1) begin: acqpztifwire
	reg stb_start_r=0;
	always @(posedge dspif.clk) begin
		stb_start_r<=dspif.stb_start;
	end
	assign acqpztif[i].clk=dspif.clk;
	assign acqpztif[i].reset=dspif.acqbufreset;
	assign acqpztif[i].chansel=dspif.acqchansel[i];
	assign acqpztif[i].stb_start=stb_start_r;
	assign acqpztif[i].delayaftertrig=dspif.delayaftertrig;
	assign acqpztif[i].decimator=dspif.decimator;
	assign acqpztif[i].chan[0]=adc[0];
	assign acqpztif[i].chan[1]=adc[1];
	assign acqpztif[i].chan[2]=rdloelem[0].multix;
	assign acqpztif[i].chan[3]=rdloelem[0].multiy;
	assign acqpztif[i].chan[4]=rdloelem[1].multix;
	assign acqpztif[i].chan[5]=rdloelem[1].multiy;
	assign acqpztif[i].chan[6]=rdloelem[2].multix;
	assign acqpztif[i].chan[7]=rdloelem[2].multiy;
	//assign acqpztif[i].chan[8]=rdloelem[3].multix;
	//assign acqpztif[i].chan[9]=rdloelem[3].multiy;
	assign dspif.we_acqbuf[i]=acqpztif[i].we;
	assign dspif.addr_acqbuf[i]=acqpztif[i].addr;
	assign dspif.data_acqbuf[i]=acqpztif[i].data;
end
endgenerate
generate 
for (genvar i=0;i<4;i=i+1) begin: dacmonpztifwire
	reg stb_start_r=0;
	always @(posedge dspif.clk) begin
		stb_start_r<=dspif.stb_start;
	end
	assign dacmonpztif[i].clk=dspif.clk;
	assign dacmonpztif[i].reset=dspif.dacmonreset;
	assign dacmonpztif[i].chansel=dspif.dacmonchansel[i];
	assign dacmonpztif[i].stb_start=stb_start_r;
	assign dacmonpztif[i].delayaftertrig=dspif.delayaftertrig;
	assign dacmonpztif[i].decimator=dspif.decimator;
	assign dacmonpztif[i].chan[0]=dac[0];
	assign dacmonpztif[i].chan[1]=dac[1];
	assign dacmonpztif[i].chan[2]=dac[2];
	assign dacmonpztif[i].chan[3]=dac[3];
	assign dspif.we_dacmon[i]=dacmonpztif[i].we;
	assign dspif.addr_dacmon[i]=dacmonpztif[i].addr;
	assign dspif.data_dacmon[i]=dacmonpztif[i].data;
end
endgenerate


/*xmultadd #(`include "plps_parainst.vh"
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"
) xmultadd(.xmaif(xmaif));
*/


/*reg [8:0] reset_bram_read=0;
reg [DACMON_W_ADDRWIDTH-1:0] addr_dacmon=0;
wire we_dacmon=~locklast_dacmon;
wire locklast_dacmon=&addr_dacmon;
reg stb_reset_bram_read=0;
always @(posedge dspif.clk) begin
stb_reset_bram_read<=dspif.stb_reset_bram_read;
reset_bram_read<={9{stb_reset_bram_read}};
end
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf0=0;
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf1=0;
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf0_d=0;
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf1_d=0;
reg we_acqbuf0_d=0;
reg we_acqbuf1_d=0;
wire we_acqbuf0=~locklast_acqbuf0;
wire locklast_acqbuf0=&addr_acqbuf0;
wire we_acqbuf1=~locklast_acqbuf1;
wire locklast_acqbuf1=&addr_acqbuf1;
always @(posedge dspif.clk) begin
addr_acqbuf0<=reset_bram_read[0] ? 0 : (addr_acqbuf0+ (locklast_acqbuf0 ? 0 : 1));
addr_acqbuf1<=reset_bram_read[2] ? 0 : (addr_acqbuf1+ (locklast_acqbuf1 ? 0 : 1));
addr_acqbuf0_d<=addr_acqbuf0;
addr_acqbuf1_d<=addr_acqbuf1;
addr_dacmon<=reset_bram_read[1] ? 0 : (addr_dacmon+ (locklast_dacmon ? 0 : 1));
we_acqbuf0_d<=we_acqbuf0;
we_acqbuf1_d<=we_acqbuf1;
end
reg [ACQBUF_W_DATAWIDTH-1:0] data_acqbuf[0:1];
reg [ACQBUF_W_DATAWIDTH-1:0] data_acqbuf_d[0:1];
always @(posedge dspif.clk) begin
data_acqbuf[0]<=adc[0];
data_acqbuf[1]<=adc[1];
data_acqbuf_d[0]<=data_acqbuf[0];// one more?
data_acqbuf_d[1]<=data_acqbuf[1];
dspif.data_acqbuf[0]<=data_acqbuf_d[0];
dspif.data_acqbuf[1]<=data_acqbuf_d[1];
dspif.addr_acqbuf[0]<=addr_acqbuf0_d;
dspif.addr_acqbuf[1]<=addr_acqbuf1_d;
dspif.we_acqbuf[0]<=we_acqbuf0_d;
dspif.we_acqbuf[1]<=we_acqbuf1_d;
dspif.we_dacmon[0]<=we_dacmon;
dspif.we_dacmon[1]<=we_dacmon;
dspif.we_dacmon[2]<=we_dacmon;
dspif.we_dacmon[3]<=we_dacmon;
dspif.addr_dacmon[0]<=addr_dacmon;
dspif.addr_dacmon[1]<=addr_dacmon;
dspif.addr_dacmon[2]<=addr_dacmon;
dspif.addr_dacmon[3]<=addr_dacmon;
end
*/
generate
for (genvar i=0;i<16;i=i+1) begin : step16
	for (genvar j=0;j<NDAC;j=j+1) begin
		always @(posedge dspif.clk) begin
			dac[j][(i+1)*16-1:i*16]<=dspif.dac[j][(i+1)*16-1:i*16];
		end
	end
	/*	for (genvar k=0;k<NDACMON;k=k+1) begin
	always @(posedge dspif.clk) begin
	dspif.data_dacmon[k][(i+1)*16-1:i*16]<=dac[k][(i+1)*16-1:i*16];
	end
	end
	*/
end
endgenerate


enum {IDLE	=4'b0000
,START		=4'b0001
,PROCRUN	=4'b0011
,ELEMBUSY	=4'b0010
,MORESHOT	=4'b0110
,SHOTADD	=4'b0111
,DONE		=4'b0101
} state=IDLE,nextstate=IDLE;
reg shotadd=0;

always @(posedge dspif.clk) begin
	if (dspif.reset) begin
		state <= IDLE;
	end
	else begin
		state <= nextstate;
	end
end
always @(state) begin
	nextstate=IDLE;
	case (state)
		IDLE: begin
			nextstate= dspif.stb_start ? START : IDLE;
		end
		START: begin
			nextstate=PROCRUN;
		end
		PROCRUN: begin
			nextstate= procdone_r ? ELEMBUSY : PROCRUN;
		end
		ELEMBUSY: begin
			nextstate= nobusy_r ? MORESHOT : ELEMBUSY;
		end
		MORESHOT: begin
			//nextstate=(|nshot)  & (|(nextshotcnt^nshot)) ? SHOTADD : DONE;
			nextstate=shotadd ? SHOTADD : DONE;
		end
		SHOTADD: begin
			nextstate=START;
		end
		DONE: begin
			nextstate=IDLE;
		end
	endcase
end
always @(posedge dspif.clk) begin
	nextshotcnt<=shotcnt+1;
	shotadd <= (|(nextshotcnt^nshot)) | (~|nshot);
	nobusy_r<=&nobusy;
	procdone_r<=&procdone;
	if (dspif.reset) begin
		shotcnt<=0;
		done<=1'b0;
		procreset<=1'b1;
        nshot<=dspif.nshot;
	end
	else begin
		case (nextstate)
			IDLE: begin
				done<=1'b0;
				procreset<=1'b1;
				shotcnt<=0;
				nshot<=dspif.nshot;
			end
			START: begin
				done<=1'b0;
				procreset<=1'b0;
				shotcnt<=shotcnt;
			end
			PROCRUN: begin
				done<=1'b0;
				procreset<=1'b0;
				shotcnt<=shotcnt;
			end
			ELEMBUSY: begin
				done<=1'b0;
				procreset<=1'b1;
				shotcnt<=shotcnt;
			end
			MORESHOT: begin
				done<=1'b0;
				shotcnt<=shotcnt;
				procreset<=1'b1;
			end
			SHOTADD: begin
				done<=1'b0;
				shotcnt<=nextshotcnt;//+32'h1;
				currentshotcnt<=shotcnt;
				procreset<=1'b1;
			end
			DONE: begin
				done<=1'b1;
				shotcnt<=0;
				procreset<=1'b1;
			end
		endcase
	end
end

/*`include "iladsp.vh"*/
endmodule

