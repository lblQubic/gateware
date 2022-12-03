module fakeprocs #(`include "plps_para.vh"
,`include "bram_para.vh"
,`include "braminit_para.vh"
)
(input clk
,input stbstart 
,input [31:0] nshot
,output busy
,input [COMMAND_R_DATAWIDTH-1:0] data_command
,output [COMMAND_R_ADDRWIDTH-1:0] addr_command
,ifelement.proc qdrvelem
,ifelement.proc rdrvelem
,ifelement.proc rdloelem
);

reg [31:0] shotcnt=0;
reg reset=0;
reg busy_r=0;
reg endcommand_r=0;
reg [COMMAND_R_ADDRWIDTH-1:0] addr=0;
always @(posedge clk) begin
    if (stbstart) begin
        busy_r<=1'b1;
    end
    else if (shotcnt==nshot) begin
        busy_r<=1'b0;
    end
/*    if (busy_r) begin
        if (endcommand_r) begin
            shotcnt<=shotcnt+1;
            reset<=1'b1;
        end
        else begin
            reset<=1'b0;
        end
    end
	*/
    endcommand_r<=~|data_command;
	addr<=stbstart ? 0 : addr+|{qdrvelem.cmdstb,rdrvelem.cmdstb,rdloelem.cmdstb};
end
assign addr_command=addr;



wire qdrvbusy;
wire rdrvbusy;
wire rdlobusy;
elementproc #(.MODE(2'b01)) qdrvep(.elem(qdrvelem),.command(data_command));//,.busy(qdrvbusy));
elementproc #(.MODE(2'b01)) rdrvep(.elem(rdrvelem),.command(data_command));//,.busy(rdrvbusy));
elementproc #(.MODE(2'b00)) rdloep(.elem(rdloelem),.command(data_command));//,.busy(rdlobusy));
assign busy=busy_r;
endmodule


module dsp #(`include "plps_para.vh"	
,`include "bram_para.vh"
,`include "braminit_para.vh"
)(	ifdspregs.regs regs
,ifdsp.dsp dspif
);
parameter TCNTWIDTH=32;
wire elemreset_w=dspif.reset|regs.stb_start;
reg [7:0] elemreset=0;
always @(posedge dspif.clk) begin
	elemreset<={8{elemreset_w}};
end

ifelement #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH)) 
qdrvelem[0:3](.clk(dspif.clk),.reset(elemreset[0]));
ifelement #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdrvelem[0:3](.clk(dspif.clk),.reset(elemreset[1]));
ifelement #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdloelem[0:3](.clk(dspif.clk),.reset(elemreset[2]));

generate for (genvar i =0; i<4; i=i+1) begin: elements
	elementconn #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
	qdrvelemconn(.elem(qdrvelem[i]),.envaddr(dspif.addr_qdrvenv[i]),.envdata(dspif.data_qdrvenv[i]),.freqaddr(dspif.addr_qdrvfreq[i]),.freqdata(dspif.data_qdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
	rdrvelemconn(.elem(rdrvelem[i]),.envaddr(dspif.addr_rdrvenv[i]),.envdata(dspif.data_rdrvenv[i]),.freqaddr(dspif.addr_rdrvfreq[i]),.freqdata(dspif.data_rdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
	rdloelemconn(.elem(rdloelem[i]),.envaddr(dspif.addr_rdloenv[i]),.envdata(dspif.data_rdloenv[i]),.freqaddr(dspif.addr_rdlofreq[i]),.freqdata(dspif.data_rdlofreq[i]));
end
endgenerate

fakeprocs fakeprocs(.clk(dspif.clk),.stbstart(regs.stb_start),.nshot(regs.nshot),.busy(regs.busy)
,.data_command(dspif.data_command[0]),.addr_command(dspif.addr_command[0])
,.qdrvelem(qdrvelem[0]),.rdrvelem(rdrvelem[0]),.rdloelem(rdloelem[0]));

wire [DAC_AXIS_DATAWIDTH-1:0] dac20_w;
wire [DAC_AXIS_DATAWIDTH-1:0] dac22_w;
wire [DAC_AXIS_DATAWIDTH-1:0] dac30_w;
wire [DAC_AXIS_DATAWIDTH-1:0] dac32_w;
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv0out (.elem(qdrvelem[0]),.valid(),.multix(dac20_w),.multiy());
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv1out (.elem(qdrvelem[1]),.valid(),.multix(dac22_w),.multiy());
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrv2out (.elem(qdrvelem[2]),.valid(),.multix(dac30_w),.multiy());
elementsum4 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.valid(),.multix(dac32_w),.multiy());

reg [ADC_AXIS_DATAWIDTH-1:0] adc20=0;
reg [ADC_AXIS_DATAWIDTH-1:0] adc21=0;
always @(posedge dspif.clk) begin
	adc20<=dspif.adc20;
	adc21<=dspif.adc21;
end
wire [ACCBUF_W_DATAWIDTH-1:0] data_accbuf_w[0:7];
reg [ACCBUF_W_DATAWIDTH-1:0] data_accbuf[0:7];
reg [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf[0:7];
reg we_accbuf[0:7];

generate 
for (genvar i=0;i<4;i=i+1) begin: rdlomixacc
	wire accgate;
	wire accstb;
	reg accstb_d=0;
	elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH),.ACCADDWIDTH(16))
	rdlo0mixacc(.adcx(adc20),.adcy(adc21),.shift(15),.elem(rdloelem[i].mix),.stbout(accstb),.gateout(accgate),.accx(data_accbuf_w[i][63:32]),.accy(data_accbuf_w[i][31:0]));
	always @(posedge dspif.clk) begin
		we_accbuf[i]<=accstb;
		accstb_d<=accstb;
		addr_accbuf[i]<=regs.resetacc ? 0 : addr_accbuf[i]+ accstb_d;
		data_accbuf[i]<=data_accbuf_w[i];
	end

end
endgenerate
assign dspif.data_accbuf=data_accbuf;
assign dspif.addr_accbuf=addr_accbuf;
assign dspif.we_accbuf=we_accbuf;


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
		dac20[(i+1)*16-1:i*16]<=dac20_w[(i+1)*16-1:i*16];
		dac22[(i+1)*16-1:i*16]<=dac22_w[(i+1)*16-1:i*16];
		dac30[(i+1)*16-1:i*16]<=dac30_w[(i+1)*16-1:i*16];
		dac32[(i+1)*16-1:i*16]<=dac32_w[(i+1)*16-1:i*16];
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

assign regs.test1=regs.test;//dspif.data_qdrvfreq[0][31:0];//regs.test;

//`include "iladsp.vh"
endmodule

interface ifdsp #(
	`include "plps_para.vh"
,`include "bram_para.vh"
,`include "braminit_para.vh"
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

