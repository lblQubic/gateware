module proc_core(input clk
,input reset
,input [127:0] command
,output [15:0] cmd_read_addr
,output stbend
,ifelement.proc qdrvelem
,ifelement.proc rdrvelem
,ifelement.proc rdloelem
);
localparam ENV_WIDTH = 24;
localparam PHASE_WIDTH = 17;
localparam FREQ_WIDTH = 9;
localparam AMP_WIDTH = 16;
localparam CFG_WIDTH = 4;
localparam SYNC_BARRIER_WIDTH=8;
localparam REG_ADDR_WIDTH=4;
localparam CMD_WIDTH=128;
localparam CMD_ADDR_WIDTH=16;
localparam DATA_WIDTH=32;

cmd_mem_iface #(.CMD_ADDR_WIDTH(16), .MEM_WIDTH(128), .MEM_TO_CMD(1)) memif();
fproc_iface #(.FPROC_ID_WIDTH(8), .FPROC_RESULT_WIDTH(32)) fproc();
sync_iface #(.SYNC_BARRIER_WIDTH(8)) sync();
pulse_iface #(.PHASE_WIDTH(PHASE_WIDTH), .FREQ_WIDTH(FREQ_WIDTH),.ENV_WORD_WIDTH(ENV_WIDTH), .AMP_WIDTH(AMP_WIDTH), .CFG_WIDTH(CFG_WIDTH)) 
pulseout();

/*wire [PHASE_WIDTH-1:0] phase;
wire [FREQ_WIDTH-1:0] freq;
wire [AMP_WIDTH-1:0] amp;
wire [CFG_WIDTH-1:0] cfg;
wire [ENV_WIDTH-1:0] env_word;
wire cstrobe;
*/
wire procdone;
proc #(.DATA_WIDTH(DATA_WIDTH), .CMD_WIDTH(CMD_WIDTH),.CMD_ADDR_WIDTH(CMD_ADDR_WIDTH), .REG_ADDR_WIDTH(REG_ADDR_WIDTH),.SYNC_BARRIER_WIDTH(SYNC_BARRIER_WIDTH),.CMD_MEM_READ_LATENCY(2)) 
dproc(.clk(clk), .reset(reset),.cmd_iface(memif), .fproc(fproc), .sync(sync), .pulseout(pulseout),.done_gate(procdone));
assign memif.mem_bus[0]=command;
assign cmd_read_addr=memif.instr_ptr;
/*
assign env_word = pulseout.env_word;
assign amp = pulseout.amp;
assign phase = pulseout.phase;
assign freq = pulseout.freq;
assign cfg = pulseout.cfg;
assign cstrobe_out = pulseout.cstrobe;
*/

reg noop=0;
reg nobusy=0;
always @(posedge clk) begin
	qdrvelem.reset <= pulseout.reset; // tobe changed to dproc start of circuit 
	rdrvelem.reset <= pulseout.reset; // tobe changed to dproc start of circuit 
	rdloelem.reset <= pulseout.reset; // tobe changed to dproc start of circuit 
	qdrvelem.cmdstb <= pulseout.cstrobe & (pulseout.cfg[1:0] == 2'b00);
	if (pulseout.cstrobe & (pulseout.cfg[1:0] == 2'b00))begin
		qdrvelem.envstart<=pulseout.env_word[9:0];
		qdrvelem.envlength<=pulseout.env_word[21:12];
		qdrvelem.ampx<=pulseout.amp;
		qdrvelem.ampy=16'd0;
		qdrvelem.freqaddr<=pulseout.freq;
		qdrvelem.pini<=pulseout.phase;
		qdrvelem.mode<=pulseout.cfg[3:2];
	end

	rdrvelem.cmdstb <= pulseout.cstrobe & (pulseout.cfg[1:0] == 2'b01);
	if (pulseout.cstrobe & (pulseout.cfg[1:0] == 2'b01)) begin
		rdrvelem.envstart<=pulseout.env_word[11:0];
		rdrvelem.envlength<=pulseout.env_word[23:12];
		rdrvelem.ampx<=pulseout.amp;
		rdrvelem.ampy=16'd0;
		rdrvelem.freqaddr<=pulseout.freq;
		rdrvelem.pini<=pulseout.phase;
		rdrvelem.mode<=pulseout.cfg[3:2];
	end

	rdloelem.cmdstb <= pulseout.cstrobe & (pulseout.cfg[1:0] == 2'b10);
	if (pulseout.cstrobe & (pulseout.cfg[1:0] == 2'b10)) begin
		rdloelem.envstart<=pulseout.env_word[11:0];
		rdloelem.envlength<=pulseout.env_word[23:12];
		rdloelem.ampx<=pulseout.amp;
		rdloelem.ampy=16'd0;
		rdloelem.freqaddr<=pulseout.freq;
		rdloelem.pini<=pulseout.phase;
		rdloelem.mode<=pulseout.cfg[3:2];
	end
	noop<=~|command;
	nobusy<=~|{qdrvelem.busy,rdrvelem.busy,rdloelem.busy};
end
assign stbend=procdone&nobusy;
endmodule

module dsp #(`include "plps_para.vh"	
,`include "bram_para.vh"
,`include "braminit_para.vh"

)(	ifdspregs.regs regs
,ifdsp.dsp dspif
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
localparam NPROC=4;
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
	stbstart<=regs.stb_start;
	stbstart_d<=stbstart;
	if (stbstart)
		nshot<=regs.nshot;
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
	proccorereset<={NPROC{stbstart|stbstart_d|moreshot_d2|moreshot_d3}};
end
assign regs.lastshotdone=lastshotdone;
assign regs.shotcnt=shotcnt;
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
qdrv0out (.elem(qdrvelem[0]),.valid(),.multix(dspif.dac20),.multiy());
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv1out (.elem(qdrvelem[1]),.valid(),.multix(dspif.dac22),.multiy());
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv2out (.elem(qdrvelem[2]),.valid(),.multix(dspif.dac30),.multiy());
elementsum4 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.valid(),.multix(dspif.dac32),.multiy());

reg [ADC_AXIS_DATAWIDTH-1:0] adc20=0;
reg [ADC_AXIS_DATAWIDTH-1:0] adc21=0;

reg [3:0] resetacc=0;
always @(posedge dspif.clk) begin
	adc20<=dspif.adc20;
	adc21<=dspif.adc21;
	resetacc<={4{regs.resetacc[0]}};
end
reg [ACCBUF_W_DATAWIDTH-1:0] data_accbuf[0:7];
reg [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf[0:7];
wire locklast_accbuf[0:7];
reg we_accbuf[0:7];
generate 
for (genvar i=0;i<4;i=i+1) begin: rdlomixacc
	wire accvalid;
	elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH),.ACCADDWIDTH(16))
	rdlo0mixacc(.adcx(adc20),.adcy(adc21),.shift(15),.elem(rdloelem[i].mix),.gateout(),.accx(data_accbuf[i][63:32]),.accy(data_accbuf[i][31:0]),.stbout(accvalid));
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
assign regs.addr_accbuf0=addr_accbuf[0];
assign regs.addr_accbuf1=addr_accbuf[1];
assign regs.addr_accbuf2=addr_accbuf[2];
assign regs.addr_accbuf3=addr_accbuf[3];


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
	data_acqbuf[0]<=adc20;
	data_acqbuf[1]<=adc21;
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

`include "iladsp.vh"
endmodule

interface ifdsp #(
	`include "plps_para.vh"
	,`include "bram_para.vh"
	,`include "braminit_para.vh"
	)();
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

