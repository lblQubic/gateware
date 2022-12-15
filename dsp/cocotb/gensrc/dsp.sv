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

module dsp #(parameter DEBUG="true" ,parameter integer LB1_DATAWIDTH=32 ,parameter integer LB1_ADDRWIDTH=10 ,parameter integer LB2_DATAWIDTH=32 ,parameter integer LB2_ADDRWIDTH=10 ,parameter integer LB3_DATAWIDTH=32 ,parameter integer LB3_ADDRWIDTH=20 ,parameter integer LB4_DATAWIDTH=32 ,parameter integer LB4_ADDRWIDTH=20 ,parameter integer DAC_AXIS_DATAWIDTH=256 ,parameter integer ADC_AXIS_DATAWIDTH=64 ,parameter integer BRAMADDRWIDTH=32 ,parameter integer NPROC=4 ,parameter integer NADC=2 ,parameter integer NDAC=4 ,parameter integer NDACMON=4 ,parameter integer NACQ=2 ,parameter NCFGRESETN=8 ,parameter NDSPRESETN=8 ,parameter NPSRESETN=3 ,parameter NADC2RESETN=3 	
,parameter integer ACCBUF_R_ADDRWIDTH=12,parameter integer ACCBUF_R_DATAWIDTH=32,parameter integer ACCBUF_R_DEPTH=4096,parameter integer ACCBUF_W_ADDRWIDTH=11,parameter integer ACCBUF_W_DATAWIDTH=64,parameter integer ACCBUF_W_DEPTH=2048 ,parameter integer ACQBUF_R_ADDRWIDTH=14,parameter integer ACQBUF_R_DATAWIDTH=32,parameter integer ACQBUF_R_DEPTH=16384,parameter integer ACQBUF_W_ADDRWIDTH=13,parameter integer ACQBUF_W_DATAWIDTH=64,parameter integer ACQBUF_W_DEPTH=8192 ,parameter integer COMMAND_R_ADDRWIDTH=10,parameter integer COMMAND_R_DATAWIDTH=128,parameter integer COMMAND_R_DEPTH=1024,parameter integer COMMAND_W_ADDRWIDTH=12,parameter integer COMMAND_W_DATAWIDTH=32,parameter integer COMMAND_W_DEPTH=4096 ,parameter integer DACMON_R_ADDRWIDTH=12,parameter integer DACMON_R_DATAWIDTH=32,parameter integer DACMON_R_DEPTH=4096,parameter integer DACMON_W_ADDRWIDTH=9,parameter integer DACMON_W_DATAWIDTH=256,parameter integer DACMON_W_DEPTH=512 ,parameter integer QDRVENV_R_ADDRWIDTH=10,parameter integer QDRVENV_R_DATAWIDTH=512,parameter integer QDRVENV_R_DEPTH=1024,parameter integer QDRVENV_W_ADDRWIDTH=14,parameter integer QDRVENV_W_DATAWIDTH=32,parameter integer QDRVENV_W_DEPTH=16384 ,parameter integer QDRVFREQ_R_ADDRWIDTH=9,parameter integer QDRVFREQ_R_DATAWIDTH=512,parameter integer QDRVFREQ_R_DEPTH=512,parameter integer QDRVFREQ_W_ADDRWIDTH=13,parameter integer QDRVFREQ_W_DATAWIDTH=32,parameter integer QDRVFREQ_W_DEPTH=8192 ,parameter integer RDLOENV_R_ADDRWIDTH=12,parameter integer RDLOENV_R_DATAWIDTH=128,parameter integer RDLOENV_R_DEPTH=4096,parameter integer RDLOENV_W_ADDRWIDTH=14,parameter integer RDLOENV_W_DATAWIDTH=32,parameter integer RDLOENV_W_DEPTH=16384 ,parameter integer RDLOFREQ_R_ADDRWIDTH=9,parameter integer RDLOFREQ_R_DATAWIDTH=128,parameter integer RDLOFREQ_R_DEPTH=512,parameter integer RDLOFREQ_W_ADDRWIDTH=11,parameter integer RDLOFREQ_W_DATAWIDTH=32,parameter integer RDLOFREQ_W_DEPTH=2048 ,parameter integer RDRVENV_R_ADDRWIDTH=12,parameter integer RDRVENV_R_DATAWIDTH=512,parameter integer RDRVENV_R_DEPTH=4096,parameter integer RDRVENV_W_ADDRWIDTH=16,parameter integer RDRVENV_W_DATAWIDTH=32,parameter integer RDRVENV_W_DEPTH=65536 ,parameter integer RDRVFREQ_R_ADDRWIDTH=9,parameter integer RDRVFREQ_R_DATAWIDTH=512,parameter integer RDRVFREQ_R_DEPTH=512,parameter integer RDRVFREQ_W_ADDRWIDTH=13,parameter integer RDRVFREQ_W_DATAWIDTH=32,parameter integer RDRVFREQ_W_DEPTH=8192
,parameter INIT_rdrvenv0="" ,parameter INIT_rdrvenv1="" ,parameter INIT_rdrvenv2="" ,parameter INIT_rdrvenv3="" ,parameter INIT_acqbuf0="" ,parameter INIT_acqbuf1="" ,parameter INIT_qdrvenv0="" ,parameter INIT_qdrvenv1="" ,parameter INIT_qdrvenv2="" ,parameter INIT_qdrvenv3="" ,parameter INIT_rdloenv0="" ,parameter INIT_rdloenv1="" ,parameter INIT_rdloenv2="" ,parameter INIT_rdloenv3="" ,parameter INIT_qdrvfreq0="" ,parameter INIT_qdrvfreq1="" ,parameter INIT_qdrvfreq2="" ,parameter INIT_qdrvfreq3="" ,parameter INIT_rdrvfreq0="" ,parameter INIT_rdrvfreq1="" ,parameter INIT_rdrvfreq2="" ,parameter INIT_rdrvfreq3="" ,parameter INIT_accbuf0="" ,parameter INIT_accbuf1="" ,parameter INIT_accbuf2="" ,parameter INIT_accbuf3="" ,parameter INIT_command0="" ,parameter INIT_command1="" ,parameter INIT_command2="" ,parameter INIT_command3="" ,parameter INIT_dacmon0="" ,parameter INIT_dacmon1="" ,parameter INIT_dacmon2="" ,parameter INIT_dacmon3="" ,parameter INIT_rdlofreq0="" ,parameter INIT_rdlofreq1="" ,parameter INIT_rdlofreq2="" ,parameter INIT_rdlofreq3=""

)(	
	ifdsp.dsp dspif
);
localparam TCNTWIDTH=27;
reg [TCNTWIDTH-1:0] tcnt=0;
always @(posedge dspif.clk) begin
	tcnt<=dspif.reset ? 0 : tcnt+1;
end
reg stbstart=0;
reg stbstart_d=0;
reg moreshot=0;
reg moreshot_d=0;
reg moreshot_d2=0;
reg moreshot_d3=0;
reg [31:0] nshot=0;
//localparam NPROC=4;
wire [NPROC-1:0] stbprocend;
reg [NPROC-1:0] shotstatus=0;
wire allprocend=&stbprocend;
reg allprocend_d=0;
reg [31:0] shotcnt=0;
wire lastshot=shotcnt==nshot-1;
reg lastshotdone=0;
wire stballprocend=allprocend&~allprocend_d;
reg shotbusy=0;
reg shotbusy_d=0;
reg [NPROC-1:0]proccorereset;
always @(posedge dspif.clk) begin
	stbstart<=dspif.stb_start;
	stbstart_d<=stbstart;
	if (stbstart)
		nshot<=dspif.nshot;
	allprocend_d<=allprocend;
	if (stbstart)
		shotbusy<=1'b1;
	else if (lastshot)
		shotbusy<=1'b0;
	shotbusy_d<=shotbusy;
	shotcnt<=stbstart ? 0 : shotcnt+ stballprocend&(~lastshot);
	moreshot<=shotbusy & stballprocend&~lastshot;
	moreshot_d<=moreshot;
	moreshot_d2<=moreshot_d;
	moreshot_d3<=moreshot_d2;
	lastshotdone<=lastshot&allprocend;	
	proccorereset<={NPROC{stbstart|stbstart_d|moreshot_d2|moreshot_d3|dspif.reset}};
end
assign dspif.lastshotdone=lastshotdone;
assign dspif.shotcnt=shotcnt;
//wire proccorereset=~shotbusy|moreshot|moreshot_d;
ifelement #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(27))
qdrvelem[0:3](.clk(dspif.clk));
ifelement #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(27))
rdrvelem[0:3](.clk(dspif.clk));
ifelement #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(27))
rdloelem[0:3](.clk(dspif.clk));

generate for (genvar i =0; i<NPROC; i=i+1) begin
	proc_core 
	proc_core(.clk(dspif.clk),.reset(proccorereset[i]),.command(dspif.data_command[i]), .cmd_read_addr(dspif.addr_command[i]),.qdrvelem(qdrvelem[i]),.rdrvelem(rdrvelem[i]),.rdloelem(rdloelem[i]),.stbend(stbprocend[i]));
	elementconn #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
	qdrvelemconn(.elem(qdrvelem[i]),.envaddr(dspif.addr_qdrvenv[i]),.envdata(dspif.data_qdrvenv[i]),.freqaddr(dspif.addr_qdrvfreq[i]),.freqdata(dspif.data_qdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
	rdrvelemconn(.elem(rdrvelem[i]),.envaddr(dspif.addr_rdrvenv[i]),.envdata(dspif.data_rdrvenv[i]),.freqaddr(dspif.addr_rdrvfreq[i]),.freqdata(dspif.data_rdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
	rdloelemconn(.elem(rdloelem[i]),.envaddr(dspif.addr_rdloenv[i]),.envdata(dspif.data_rdloenv[i]),.freqaddr(dspif.addr_rdlofreq[i]),.freqdata(dspif.data_rdlofreq[i]));
	always @(posedge dspif.clk) begin
		if (proccorereset[i])
			shotstatus[i]<=1'b0;
		else if (stbprocend[i])
			shotstatus[i]<=1'b1;
	end

end
endgenerate


elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv0out (.elem(qdrvelem[0]),.valid(),.multix(dspif.dac[1]),.multiy());
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv1out (.elem(qdrvelem[1]),.valid(),.multix(dspif.dac[2]),.multiy());
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv2out (.elem(qdrvelem[2]),.valid(),.multix(dspif.dac[3]),.multiy());

elementsum4 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.valid(),.multix(dspif.dac[0]),.multiy());
//elementsum8 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.elem4(rdrvelem[4]),.elem5(rdrvelem[5]),.elem6(rdrvelem[6]),.elem7(rdrvelem[7]),.valid(),.multix(dspif.dac[0]),.multiy());

reg [ADC_AXIS_DATAWIDTH-1:0] adc[0:NADC-1];
reg [NPROC-1:0] resetacc=0;
generate 
for (genvar i=0;i<NADC;i=i+1) begin
	always @(posedge dspif.clk) begin
		adc[i]<=dspif.adc[i];
	end
end
endgenerate
always @(posedge dspif.clk) begin
	resetacc<={NPROC{dspif.resetacc}};
end
reg [ACCBUF_W_DATAWIDTH-1:0] data_accbuf[0:7];
reg [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf[0:7];
wire locklast_accbuf[0:7];
reg we_accbuf[0:7];
generate 
for (genvar i=0;i<NPROC;i=i+1) begin: rdlomixacc
	wire accvalid;
	elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH),.ACCADDWIDTH(16))
	rdlo0mixacc(.adcx(adc[0]),.adcy(adc[1]),.shift(15),.elem(rdloelem[i].mix),.gateout(),.accx(data_accbuf[i][63:32]),.accy(data_accbuf[i][31:0]),.stbout(accvalid));
	assign locklast_accbuf[i]=&addr_accbuf[i];
	always @(posedge dspif.clk) begin
		we_accbuf[i]<=accvalid;
		addr_accbuf[i]<=resetacc[i] ? 0 : addr_accbuf[i]+ (~locklast_accbuf[i] & accvalid);
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
reg [8:0] reset_bram_read=0;
reg [DACMON_W_ADDRWIDTH-1:0] addr_dacmon=0;
wire we_dacmon=~locklast_dacmon;
wire locklast_dacmon=&addr_dacmon;
always @(posedge dspif.clk) begin
	reset_bram_read<={9{dspif.stb_reset_bram_read}};
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
	data_acqbuf_d[0]<=data_acqbuf[0];
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

generate
for (genvar i=0;i<16;i=i+1) begin : step16
	for (genvar j=0;j<NDAC;j=j+1) begin
		always @(posedge dspif.clk) begin
			dac[j][(i+1)*16-1:i*16]<=dspif.dac[j][(i+1)*16-1:i*16];
		end
	end
	for (genvar k=0;k<NDACMON;k=k+1) begin
		always @(posedge dspif.clk) begin
			dspif.data_dacmon[k][(i+1)*16-1:i*16]<=dac[k][(i+1)*16-1:i*16];
		end
	end
end
endgenerate


//`include "iladsp.vh"
endmodule

interface ifdsp #(
	parameter DEBUG="true" ,parameter integer LB1_DATAWIDTH=32 ,parameter integer LB1_ADDRWIDTH=10 ,parameter integer LB2_DATAWIDTH=32 ,parameter integer LB2_ADDRWIDTH=10 ,parameter integer LB3_DATAWIDTH=32 ,parameter integer LB3_ADDRWIDTH=20 ,parameter integer LB4_DATAWIDTH=32 ,parameter integer LB4_ADDRWIDTH=20 ,parameter integer DAC_AXIS_DATAWIDTH=256 ,parameter integer ADC_AXIS_DATAWIDTH=64 ,parameter integer BRAMADDRWIDTH=32 ,parameter integer NPROC=4 ,parameter integer NADC=2 ,parameter integer NDAC=4 ,parameter integer NDACMON=4 ,parameter integer NACQ=2 ,parameter NCFGRESETN=8 ,parameter NDSPRESETN=8 ,parameter NPSRESETN=3 ,parameter NADC2RESETN=3 
	,parameter integer ACCBUF_R_ADDRWIDTH=12,parameter integer ACCBUF_R_DATAWIDTH=32,parameter integer ACCBUF_R_DEPTH=4096,parameter integer ACCBUF_W_ADDRWIDTH=11,parameter integer ACCBUF_W_DATAWIDTH=64,parameter integer ACCBUF_W_DEPTH=2048 ,parameter integer ACQBUF_R_ADDRWIDTH=14,parameter integer ACQBUF_R_DATAWIDTH=32,parameter integer ACQBUF_R_DEPTH=16384,parameter integer ACQBUF_W_ADDRWIDTH=13,parameter integer ACQBUF_W_DATAWIDTH=64,parameter integer ACQBUF_W_DEPTH=8192 ,parameter integer COMMAND_R_ADDRWIDTH=10,parameter integer COMMAND_R_DATAWIDTH=128,parameter integer COMMAND_R_DEPTH=1024,parameter integer COMMAND_W_ADDRWIDTH=12,parameter integer COMMAND_W_DATAWIDTH=32,parameter integer COMMAND_W_DEPTH=4096 ,parameter integer DACMON_R_ADDRWIDTH=12,parameter integer DACMON_R_DATAWIDTH=32,parameter integer DACMON_R_DEPTH=4096,parameter integer DACMON_W_ADDRWIDTH=9,parameter integer DACMON_W_DATAWIDTH=256,parameter integer DACMON_W_DEPTH=512 ,parameter integer QDRVENV_R_ADDRWIDTH=10,parameter integer QDRVENV_R_DATAWIDTH=512,parameter integer QDRVENV_R_DEPTH=1024,parameter integer QDRVENV_W_ADDRWIDTH=14,parameter integer QDRVENV_W_DATAWIDTH=32,parameter integer QDRVENV_W_DEPTH=16384 ,parameter integer QDRVFREQ_R_ADDRWIDTH=9,parameter integer QDRVFREQ_R_DATAWIDTH=512,parameter integer QDRVFREQ_R_DEPTH=512,parameter integer QDRVFREQ_W_ADDRWIDTH=13,parameter integer QDRVFREQ_W_DATAWIDTH=32,parameter integer QDRVFREQ_W_DEPTH=8192 ,parameter integer RDLOENV_R_ADDRWIDTH=12,parameter integer RDLOENV_R_DATAWIDTH=128,parameter integer RDLOENV_R_DEPTH=4096,parameter integer RDLOENV_W_ADDRWIDTH=14,parameter integer RDLOENV_W_DATAWIDTH=32,parameter integer RDLOENV_W_DEPTH=16384 ,parameter integer RDLOFREQ_R_ADDRWIDTH=9,parameter integer RDLOFREQ_R_DATAWIDTH=128,parameter integer RDLOFREQ_R_DEPTH=512,parameter integer RDLOFREQ_W_ADDRWIDTH=11,parameter integer RDLOFREQ_W_DATAWIDTH=32,parameter integer RDLOFREQ_W_DEPTH=2048 ,parameter integer RDRVENV_R_ADDRWIDTH=12,parameter integer RDRVENV_R_DATAWIDTH=512,parameter integer RDRVENV_R_DEPTH=4096,parameter integer RDRVENV_W_ADDRWIDTH=16,parameter integer RDRVENV_W_DATAWIDTH=32,parameter integer RDRVENV_W_DEPTH=65536 ,parameter integer RDRVFREQ_R_ADDRWIDTH=9,parameter integer RDRVFREQ_R_DATAWIDTH=512,parameter integer RDRVFREQ_R_DEPTH=512,parameter integer RDRVFREQ_W_ADDRWIDTH=13,parameter integer RDRVFREQ_W_DATAWIDTH=32,parameter integer RDRVFREQ_W_DEPTH=8192
	,parameter INIT_rdrvenv0="" ,parameter INIT_rdrvenv1="" ,parameter INIT_rdrvenv2="" ,parameter INIT_rdrvenv3="" ,parameter INIT_acqbuf0="" ,parameter INIT_acqbuf1="" ,parameter INIT_qdrvenv0="" ,parameter INIT_qdrvenv1="" ,parameter INIT_qdrvenv2="" ,parameter INIT_qdrvenv3="" ,parameter INIT_rdloenv0="" ,parameter INIT_rdloenv1="" ,parameter INIT_rdloenv2="" ,parameter INIT_rdloenv3="" ,parameter INIT_qdrvfreq0="" ,parameter INIT_qdrvfreq1="" ,parameter INIT_qdrvfreq2="" ,parameter INIT_qdrvfreq3="" ,parameter INIT_rdrvfreq0="" ,parameter INIT_rdrvfreq1="" ,parameter INIT_rdrvfreq2="" ,parameter INIT_rdrvfreq3="" ,parameter INIT_accbuf0="" ,parameter INIT_accbuf1="" ,parameter INIT_accbuf2="" ,parameter INIT_accbuf3="" ,parameter INIT_command0="" ,parameter INIT_command1="" ,parameter INIT_command2="" ,parameter INIT_command3="" ,parameter INIT_dacmon0="" ,parameter INIT_dacmon1="" ,parameter INIT_dacmon2="" ,parameter INIT_dacmon3="" ,parameter INIT_rdlofreq0="" ,parameter INIT_rdlofreq1="" ,parameter INIT_rdlofreq2="" ,parameter INIT_rdlofreq3=""
	)();
	wire clk;
	wire reset;
	logic [ADC_AXIS_DATAWIDTH-1:0] adc[0:NADC-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] dac[0:NDAC-1];


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

	logic stb_start;
	logic [31:0] nshot;
	logic resetacc;
	logic stb_reset_bram_read;
	logic lastshotdone;
	logic [31:0] shotcnt;
	logic [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf_mon0;
	logic [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf_mon1;
	logic [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf_mon2;
	logic [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf_mon3;
	modport dsp(input adc
	,output dac
	,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq,addr_dacmon
	,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf,data_dacmon,we_dacmon
	,input clk,reset
	,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq
	,input stb_start,nshot,resetacc,stb_reset_bram_read
	,output lastshotdone,shotcnt,addr_accbuf_mon0,addr_accbuf_mon1,addr_accbuf_mon2,addr_accbuf_mon3
	);
	modport cfg(output adc
	,input dac
	,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq,addr_dacmon
	,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf,data_dacmon,we_dacmon
	,output clk,reset
	,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq
	,output stb_start,nshot,resetacc,stb_reset_bram_read
	,input lastshotdone,shotcnt,addr_accbuf_mon0,addr_accbuf_mon1,addr_accbuf_mon2,addr_accbuf_mon3

	);
endinterface

