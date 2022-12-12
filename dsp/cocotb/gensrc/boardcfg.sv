module boardcfg #(
parameter DEBUG="true" ,parameter integer LB1_DATAWIDTH=32 ,parameter integer LB1_ADDRWIDTH=10 ,parameter integer LB2_DATAWIDTH=32 ,parameter integer LB2_ADDRWIDTH=10 ,parameter integer LB3_DATAWIDTH=32 ,parameter integer LB3_ADDRWIDTH=20 ,parameter integer LB4_DATAWIDTH=32 ,parameter integer LB4_ADDRWIDTH=20 ,parameter integer DAC_AXIS_DATAWIDTH=256 ,parameter integer ADC_AXIS_DATAWIDTH=64 ,parameter integer BRAMADDRWIDTH=32 	
,parameter integer ACCBUF_R_ADDRWIDTH=12,parameter integer ACCBUF_R_DATAWIDTH=32,parameter integer ACCBUF_R_DEPTH=4096,parameter integer ACCBUF_W_ADDRWIDTH=11,parameter integer ACCBUF_W_DATAWIDTH=64,parameter integer ACCBUF_W_DEPTH=2048 ,parameter integer ACQBUF_R_ADDRWIDTH=14,parameter integer ACQBUF_R_DATAWIDTH=32,parameter integer ACQBUF_R_DEPTH=16384,parameter integer ACQBUF_W_ADDRWIDTH=13,parameter integer ACQBUF_W_DATAWIDTH=64,parameter integer ACQBUF_W_DEPTH=8192 ,parameter integer COMMAND_R_ADDRWIDTH=10,parameter integer COMMAND_R_DATAWIDTH=128,parameter integer COMMAND_R_DEPTH=1024,parameter integer COMMAND_W_ADDRWIDTH=12,parameter integer COMMAND_W_DATAWIDTH=32,parameter integer COMMAND_W_DEPTH=4096 ,parameter integer DACMON_R_ADDRWIDTH=12,parameter integer DACMON_R_DATAWIDTH=32,parameter integer DACMON_R_DEPTH=4096,parameter integer DACMON_W_ADDRWIDTH=9,parameter integer DACMON_W_DATAWIDTH=256,parameter integer DACMON_W_DEPTH=512 ,parameter integer QDRVENV_R_ADDRWIDTH=10,parameter integer QDRVENV_R_DATAWIDTH=512,parameter integer QDRVENV_R_DEPTH=1024,parameter integer QDRVENV_W_ADDRWIDTH=14,parameter integer QDRVENV_W_DATAWIDTH=32,parameter integer QDRVENV_W_DEPTH=16384 ,parameter integer QDRVFREQ_R_ADDRWIDTH=9,parameter integer QDRVFREQ_R_DATAWIDTH=512,parameter integer QDRVFREQ_R_DEPTH=512,parameter integer QDRVFREQ_W_ADDRWIDTH=13,parameter integer QDRVFREQ_W_DATAWIDTH=32,parameter integer QDRVFREQ_W_DEPTH=8192 ,parameter integer RDLOENV_R_ADDRWIDTH=12,parameter integer RDLOENV_R_DATAWIDTH=128,parameter integer RDLOENV_R_DEPTH=4096,parameter integer RDLOENV_W_ADDRWIDTH=14,parameter integer RDLOENV_W_DATAWIDTH=32,parameter integer RDLOENV_W_DEPTH=16384 ,parameter integer RDLOFREQ_R_ADDRWIDTH=9,parameter integer RDLOFREQ_R_DATAWIDTH=128,parameter integer RDLOFREQ_R_DEPTH=512,parameter integer RDLOFREQ_W_ADDRWIDTH=11,parameter integer RDLOFREQ_W_DATAWIDTH=32,parameter integer RDLOFREQ_W_DEPTH=2048 ,parameter integer RDRVENV_R_ADDRWIDTH=12,parameter integer RDRVENV_R_DATAWIDTH=512,parameter integer RDRVENV_R_DEPTH=4096,parameter integer RDRVENV_W_ADDRWIDTH=16,parameter integer RDRVENV_W_DATAWIDTH=32,parameter integer RDRVENV_W_DEPTH=65536 ,parameter integer RDRVFREQ_R_ADDRWIDTH=9,parameter integer RDRVFREQ_R_DATAWIDTH=512,parameter integer RDRVFREQ_R_DEPTH=512,parameter integer RDRVFREQ_W_ADDRWIDTH=13,parameter integer RDRVFREQ_W_DATAWIDTH=32,parameter integer RDRVFREQ_W_DEPTH=8192
,parameter INIT_rdrvenv0="" ,parameter INIT_rdrvenv1="" ,parameter INIT_rdrvenv2="" ,parameter INIT_rdrvenv3="" ,parameter INIT_acqbuf0="" ,parameter INIT_acqbuf1="" ,parameter INIT_qdrvenv0="" ,parameter INIT_qdrvenv1="" ,parameter INIT_qdrvenv2="" ,parameter INIT_qdrvenv3="" ,parameter INIT_rdloenv0="" ,parameter INIT_rdloenv1="" ,parameter INIT_rdloenv2="" ,parameter INIT_rdloenv3="" ,parameter INIT_qdrvfreq0="" ,parameter INIT_qdrvfreq1="" ,parameter INIT_qdrvfreq2="" ,parameter INIT_qdrvfreq3="" ,parameter INIT_rdrvfreq0="" ,parameter INIT_rdrvfreq1="" ,parameter INIT_rdrvfreq2="" ,parameter INIT_rdrvfreq3="" ,parameter INIT_accbuf0="" ,parameter INIT_accbuf1="" ,parameter INIT_accbuf2="" ,parameter INIT_accbuf3="" ,parameter INIT_command0="" ,parameter INIT_command1="" ,parameter INIT_command2="" ,parameter INIT_command3="" ,parameter INIT_dacmon0="" ,parameter INIT_dacmon1="" ,parameter INIT_dacmon2="" ,parameter INIT_dacmon3="" ,parameter INIT_rdlofreq0="" ,parameter INIT_rdlofreq1="" ,parameter INIT_rdlofreq2="" ,parameter INIT_rdlofreq3=""
)(hwif.cfg hw
,ifcfgregs.regs cfgregs
,ifbram rdrvenv0_R ,ifbram rdrvenv1_R ,ifbram rdrvenv2_R ,ifbram rdrvenv3_R ,ifbram acqbuf0_W ,ifbram acqbuf1_W ,ifbram qdrvenv0_R ,ifbram qdrvenv1_R ,ifbram qdrvenv2_R ,ifbram qdrvenv3_R ,ifbram rdloenv0_R ,ifbram rdloenv1_R ,ifbram rdloenv2_R ,ifbram rdloenv3_R ,ifbram qdrvfreq0_R ,ifbram qdrvfreq1_R ,ifbram qdrvfreq2_R ,ifbram qdrvfreq3_R ,ifbram rdrvfreq0_R ,ifbram rdrvfreq1_R ,ifbram rdrvfreq2_R ,ifbram rdrvfreq3_R ,ifbram accbuf0_W ,ifbram accbuf1_W ,ifbram accbuf2_W ,ifbram accbuf3_W ,ifbram command0_R ,ifbram command1_R ,ifbram command2_R ,ifbram command3_R ,ifbram dacmon0_W ,ifbram dacmon1_W ,ifbram dacmon2_W ,ifbram dacmon3_W ,ifbram rdlofreq0_R ,ifbram rdlofreq1_R ,ifbram rdlofreq2_R ,ifbram rdlofreq3_R
,axi4stream.master dac30axis
,axi4stream.master dac20axis
,axi4stream.master dac32axis
,axi4stream.master dac22axis
,axi4stream.slave adc20axis
,axi4stream.slave adc21axis
,ifdsp.cfg dspif
,output cfgclk
,output dspclk
,input pl_clk0
,input clk_dac2
,input clk_dac3
,input clk_adc2
,input clkadc2_300
,input clkadc2_600
,input aresetn
,output cfgreset
,output dspreset
,output  psreset
,output adc2reset
);
wire reset=(~aresetn)|hw.gpio_sw_c;
areset #(.WIDTH(1),.SRWIDTH(4))
cfgareset(.clk(cfgclk),.areset(reset),.sreset(cfgreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
dspareset(.clk(dspclk),.areset(reset),.sreset(dspreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
psareset(.clk(pl_clk0),.areset(reset),.sreset(psreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
adc2areset(.clk(clkadc2_600),.areset(reset),.sreset(adc2reset),.sreset_val());

gitrevision gitrevision(cfgregs.gitrevision);

/*bram_cfg bram_tohost0_cfg(.bram(bram_tohost0),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_tohost1_cfg(.bram(bram_tohost1),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost0_cfg(.bram(bram_fromhost0),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost1_cfg(.bram(bram_fromhost1),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost2_cfg(.bram(bram_fromhost2),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost3_cfg(.bram(bram_fromhost3),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost4_cfg(.bram(bram_fromhost4),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost5_cfg(.bram(bram_fromhost5),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost6_cfg(.bram(bram_fromhost6),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost7_cfg(.bram(bram_fromhost7),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_accbuf_cfg(.bram(bram_accbuf),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_command_cfg(.bram(bram_command),.clk(dspclk),.rst(1'b0),.en(1'b1));
*/

reg [31:0] cnt100=0;
always @(posedge hw.clk100) begin
	cnt100<=cnt100+1;
end
reg [31:0] cnt125=0;
always @(posedge hw.clk125) begin
	cnt125<=cnt125+1;
end
assign cfgclk=hw.clk100;
wire t1=hw.clk100;
//assign dspclk=hw.clk104_pl_clk;// clk_dac2;
assign dspclk=clk_dac2;
assign hw.ledrgb[0][1]=cnt100[27];
assign hw.ledrgb[1][1]=cnt100[26];
assign hw.ledrgb[2][1]=cnt100[25];
assign hw.ledrgb[3][1]=cnt100[24];

assign hw.ledrgb[4][1]=cnt125[27];
assign hw.ledrgb[5][1]=cnt125[26];
assign hw.ledrgb[6][1]=cnt125[25];
assign hw.ledrgb[7][1]=cnt125[24];

//assign regs.test1=regs.r0+regs.r1+regs.r2+regs.r3;
assign hw.ledrgb[0][0]=cfgregs.test1[0];
assign hw.ledrgb[1][0]=cfgregs.test1[1];
assign hw.ledrgb[2][0]=cfgregs.test1[2];
assign hw.ledrgb[3][0]=cfgregs.test1[3];
assign hw.ledrgb[4][0]=cfgregs.test1[4];
assign hw.ledrgb[5][0]=cfgregs.test1[5];
assign hw.ledrgb[6][0]=cfgregs.test1[6];
assign hw.ledrgb[7][0]=cfgregs.test1[7];
assign hw.pmod0[6]=cnt100[1];
assign hw.pmod0[5]=cnt125[1];
assign hw.pmod0[4]=hw.usersi570c0;
assign hw.pmod0[3]=hw.usersi570c1;
assign hw.pmod0[2]=hw.clk104_pl_sysref;
assign hw.pmod0[1]=hw.clk104_pl_clk;
assign hw.ledrgb[0][2]=cfgregs.test[0];
assign hw.ledrgb[1][2]=cfgregs.test[1];
assign hw.ledrgb[2][2]=cfgregs.test[2];
assign hw.ledrgb[3][2]=cfgregs.test[3];
assign hw.ledrgb[4][2]=cfgregs.test[4];
assign hw.ledrgb[5][2]=cfgregs.test[5];
assign hw.ledrgb[6][2]=cfgregs.test[6];
assign hw.ledrgb[7][2]=cfgregs.test[7];

enum {CLK100
,CLK125
,USERSI570C0
,USERSI570C1
,CLK104PLSYSREF
,CLK104PLCLK
,CLKDAC2
,CLKDAC3
,CLKADC2
,CLKADC2_300
,CLKADC2_600
,NFCNT
} fcnt;

wire [32*NFCNT-1:0] freq_cnt;
assign freq_cnt={cfgregs.fclk100
,cfgregs.fclk125
,cfgregs.fusersi570c0
,cfgregs.fusersi570c1
,cfgregs.fclk104plsysref
,cfgregs.fclk104plclk
,cfgregs.fclk_dac2
,cfgregs.fclk_dac3
,cfgregs.fclk_adc2
,cfgregs.fclkadc2_300
,cfgregs.fclkadc2_600
};

wire [NFCNT-1:0] freqcnt_clks = {
	hw.clk100
	,hw.clk125
	,hw.usersi570c0
	,hw.usersi570c1
	,hw.clk104_pl_sysref
	,hw.clk104_pl_clk
	,clk_dac2
	,clk_dac3
	,clk_adc2
	,clkadc2_300
	,clkadc2_600
};

genvar jx;
generate for (jx=0; jx<NFCNT; jx=jx+1)	begin: gen_fcnt
	freq_count3 #(.REFCNTWIDTH(24))
	freq_count3(.clk(hw.clk100),.fin(freqcnt_clks[jx]),.frequency(freq_cnt[jx*32+31:jx*32]));
//		{regs.fclk100,regs.fclk125,regs.fusersi570c0,regs.fusersi570c1,regs.fclk104plsysref,regs.fclk104plclk,regs.fclk_dac2,regs.fclk_dac3,regs.fclk_adc2,regs.fclkadc2_300,regs.fclkadc2_600}
end
endgenerate


localparam ACQBUF_R_ADDRPERDATA=$clog2(ACQBUF_R_DATAWIDTH)-3;localparam ACQBUF_W_ADDRPERDATA=$clog2(ACQBUF_W_DATAWIDTH)-3;
localparam COMMAND_R_ADDRPERDATA=$clog2(COMMAND_R_DATAWIDTH)-3;localparam COMMAND_W_ADDRPERDATA=$clog2(COMMAND_W_DATAWIDTH)-3;
localparam RDLOENV_R_ADDRPERDATA=$clog2(RDLOENV_R_DATAWIDTH)-3;localparam RDLOENV_W_ADDRPERDATA=$clog2(RDLOENV_W_DATAWIDTH)-3;
localparam QDRVENV_R_ADDRPERDATA=$clog2(QDRVENV_R_DATAWIDTH)-3;localparam QDRVENV_W_ADDRPERDATA=$clog2(QDRVENV_W_DATAWIDTH)-3;
localparam RDRVENV_R_ADDRPERDATA=$clog2(RDRVENV_R_DATAWIDTH)-3;localparam RDRVENV_W_ADDRPERDATA=$clog2(RDRVENV_W_DATAWIDTH)-3;
localparam ACCBUF_R_ADDRPERDATA=$clog2(ACCBUF_R_DATAWIDTH)-3;localparam ACCBUF_W_ADDRPERDATA=$clog2(ACCBUF_W_DATAWIDTH)-3;


 bram_cfg command0_R_cfg(.bram(command0_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command0_R_read(.bram(command0_R),.addr(dspif.addr_command[0]),.data(dspif.data_command[0]));  bram_cfg command1_R_cfg(.bram(command1_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command1_R_read(.bram(command1_R),.addr(dspif.addr_command[1]),.data(dspif.data_command[1]));  bram_cfg command2_R_cfg(.bram(command2_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command2_R_read(.bram(command2_R),.addr(dspif.addr_command[2]),.data(dspif.data_command[2]));  bram_cfg command3_R_cfg(.bram(command3_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command3_R_read(.bram(command3_R),.addr(dspif.addr_command[3]),.data(dspif.data_command[3]));  bram_cfg qdrvenv0_R_cfg(.bram(qdrvenv0_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv0_R_read(.bram(qdrvenv0_R),.addr(dspif.addr_qdrvenv[0]),.data(dspif.data_qdrvenv[0]));  bram_cfg qdrvenv1_R_cfg(.bram(qdrvenv1_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv1_R_read(.bram(qdrvenv1_R),.addr(dspif.addr_qdrvenv[1]),.data(dspif.data_qdrvenv[1]));  bram_cfg qdrvenv2_R_cfg(.bram(qdrvenv2_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv2_R_read(.bram(qdrvenv2_R),.addr(dspif.addr_qdrvenv[2]),.data(dspif.data_qdrvenv[2]));  bram_cfg qdrvenv3_R_cfg(.bram(qdrvenv3_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv3_R_read(.bram(qdrvenv3_R),.addr(dspif.addr_qdrvenv[3]),.data(dspif.data_qdrvenv[3]));  bram_cfg qdrvfreq0_R_cfg(.bram(qdrvfreq0_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq0_R_read(.bram(qdrvfreq0_R),.addr(dspif.addr_qdrvfreq[0]),.data(dspif.data_qdrvfreq[0]));  bram_cfg qdrvfreq1_R_cfg(.bram(qdrvfreq1_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq1_R_read(.bram(qdrvfreq1_R),.addr(dspif.addr_qdrvfreq[1]),.data(dspif.data_qdrvfreq[1]));  bram_cfg qdrvfreq2_R_cfg(.bram(qdrvfreq2_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq2_R_read(.bram(qdrvfreq2_R),.addr(dspif.addr_qdrvfreq[2]),.data(dspif.data_qdrvfreq[2]));  bram_cfg qdrvfreq3_R_cfg(.bram(qdrvfreq3_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq3_R_read(.bram(qdrvfreq3_R),.addr(dspif.addr_qdrvfreq[3]),.data(dspif.data_qdrvfreq[3]));  bram_cfg rdloenv0_R_cfg(.bram(rdloenv0_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv0_R_read(.bram(rdloenv0_R),.addr(dspif.addr_rdloenv[0]),.data(dspif.data_rdloenv[0]));  bram_cfg rdloenv1_R_cfg(.bram(rdloenv1_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv1_R_read(.bram(rdloenv1_R),.addr(dspif.addr_rdloenv[1]),.data(dspif.data_rdloenv[1]));  bram_cfg rdloenv2_R_cfg(.bram(rdloenv2_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv2_R_read(.bram(rdloenv2_R),.addr(dspif.addr_rdloenv[2]),.data(dspif.data_rdloenv[2]));  bram_cfg rdloenv3_R_cfg(.bram(rdloenv3_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv3_R_read(.bram(rdloenv3_R),.addr(dspif.addr_rdloenv[3]),.data(dspif.data_rdloenv[3]));  bram_cfg rdlofreq0_R_cfg(.bram(rdlofreq0_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq0_R_read(.bram(rdlofreq0_R),.addr(dspif.addr_rdlofreq[0]),.data(dspif.data_rdlofreq[0]));  bram_cfg rdlofreq1_R_cfg(.bram(rdlofreq1_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq1_R_read(.bram(rdlofreq1_R),.addr(dspif.addr_rdlofreq[1]),.data(dspif.data_rdlofreq[1]));  bram_cfg rdlofreq2_R_cfg(.bram(rdlofreq2_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq2_R_read(.bram(rdlofreq2_R),.addr(dspif.addr_rdlofreq[2]),.data(dspif.data_rdlofreq[2]));  bram_cfg rdlofreq3_R_cfg(.bram(rdlofreq3_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq3_R_read(.bram(rdlofreq3_R),.addr(dspif.addr_rdlofreq[3]),.data(dspif.data_rdlofreq[3]));  bram_cfg rdrvenv0_R_cfg(.bram(rdrvenv0_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv0_R_read(.bram(rdrvenv0_R),.addr(dspif.addr_rdrvenv[0]),.data(dspif.data_rdrvenv[0]));  bram_cfg rdrvenv1_R_cfg(.bram(rdrvenv1_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv1_R_read(.bram(rdrvenv1_R),.addr(dspif.addr_rdrvenv[1]),.data(dspif.data_rdrvenv[1]));  bram_cfg rdrvenv2_R_cfg(.bram(rdrvenv2_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv2_R_read(.bram(rdrvenv2_R),.addr(dspif.addr_rdrvenv[2]),.data(dspif.data_rdrvenv[2]));  bram_cfg rdrvenv3_R_cfg(.bram(rdrvenv3_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv3_R_read(.bram(rdrvenv3_R),.addr(dspif.addr_rdrvenv[3]),.data(dspif.data_rdrvenv[3]));  bram_cfg rdrvfreq0_R_cfg(.bram(rdrvfreq0_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq0_R_read(.bram(rdrvfreq0_R),.addr(dspif.addr_rdrvfreq[0]),.data(dspif.data_rdrvfreq[0]));  bram_cfg rdrvfreq1_R_cfg(.bram(rdrvfreq1_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq1_R_read(.bram(rdrvfreq1_R),.addr(dspif.addr_rdrvfreq[1]),.data(dspif.data_rdrvfreq[1]));  bram_cfg rdrvfreq2_R_cfg(.bram(rdrvfreq2_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq2_R_read(.bram(rdrvfreq2_R),.addr(dspif.addr_rdrvfreq[2]),.data(dspif.data_rdrvfreq[2]));  bram_cfg rdrvfreq3_R_cfg(.bram(rdrvfreq3_R),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq3_R_read(.bram(rdrvfreq3_R),.addr(dspif.addr_rdrvfreq[3]),.data(dspif.data_rdrvfreq[3])); 
 bram_cfg accbuf0_W_cfg(.bram(accbuf0_W),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf0_W_write(.bram(accbuf0_W),.addr(dspif.addr_accbuf[0]),.data(dspif.data_accbuf[0]),.we(dspif.we_accbuf[0]));  bram_cfg accbuf1_W_cfg(.bram(accbuf1_W),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf1_W_write(.bram(accbuf1_W),.addr(dspif.addr_accbuf[1]),.data(dspif.data_accbuf[1]),.we(dspif.we_accbuf[1]));  bram_cfg accbuf2_W_cfg(.bram(accbuf2_W),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf2_W_write(.bram(accbuf2_W),.addr(dspif.addr_accbuf[2]),.data(dspif.data_accbuf[2]),.we(dspif.we_accbuf[2]));  bram_cfg accbuf3_W_cfg(.bram(accbuf3_W),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf3_W_write(.bram(accbuf3_W),.addr(dspif.addr_accbuf[3]),.data(dspif.data_accbuf[3]),.we(dspif.we_accbuf[3]));  bram_cfg acqbuf0_W_cfg(.bram(acqbuf0_W),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_write#(.ADDR_WIDTH(ACQBUF_W_ADDRWIDTH),.DATA_WIDTH(ACQBUF_W_DATAWIDTH)) acqbuf0_W_write(.bram(acqbuf0_W),.addr(dspif.addr_acqbuf[0]),.data(dspif.data_acqbuf[0]),.we(dspif.we_acqbuf[0]));  bram_cfg acqbuf1_W_cfg(.bram(acqbuf1_W),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_write#(.ADDR_WIDTH(ACQBUF_W_ADDRWIDTH),.DATA_WIDTH(ACQBUF_W_DATAWIDTH)) acqbuf1_W_write(.bram(acqbuf1_W),.addr(dspif.addr_acqbuf[1]),.data(dspif.data_acqbuf[1]),.we(dspif.we_acqbuf[1]));  bram_cfg dacmon0_W_cfg(.bram(dacmon0_W),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_write#(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH)) dacmon0_W_write(.bram(dacmon0_W),.addr(dspif.addr_dacmon[0]),.data(dspif.data_dacmon[0]),.we(dspif.we_dacmon[0]));  bram_cfg dacmon1_W_cfg(.bram(dacmon1_W),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_write#(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH)) dacmon1_W_write(.bram(dacmon1_W),.addr(dspif.addr_dacmon[1]),.data(dspif.data_dacmon[1]),.we(dspif.we_dacmon[1]));  bram_cfg dacmon2_W_cfg(.bram(dacmon2_W),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_write#(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH)) dacmon2_W_write(.bram(dacmon2_W),.addr(dspif.addr_dacmon[2]),.data(dspif.data_dacmon[2]),.we(dspif.we_dacmon[2]));  bram_cfg dacmon3_W_cfg(.bram(dacmon3_W),.clk(dspclk),.rst(1'b0),.en(1'b1)); bram_write#(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH)) dacmon3_W_write(.bram(dacmon3_W),.addr(dspif.addr_dacmon[3]),.data(dspif.data_dacmon[3]),.we(dspif.we_dacmon[3])); 

/*
bram_write#(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH+BRAMFROMHOST_ADDRPERDATA),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH))
bramfromhost0_write(.bram(bram_fromhost0)
,.addr({dspif.bramfromhost0_addr,{BRAMFROMHOST_ADDRPERDATA{1'b0}}})
,.data(dspif.bramfromhost0_data)
,.we(dspif.bramfromhost0_we)
);

bram_write#(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH+BRAMFROMHOST_ADDRPERDATA),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH))
bramfromhost1_write(.bram(bram_fromhost1)
,.addr({dspif.bramfromhost1_addr,{BRAMFROMHOST_ADDRPERDATA{1'b0}}})
,.data(dspif.bramfromhost1_data)
,.we(dspif.bramfromhost1_we)
);

bram_write#(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH+BRAMFROMHOST_ADDRPERDATA),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH))
bramfromhost2_write(.bram(bram_fromhost2)
,.addr({dspif.bramfromhost2_addr,{BRAMFROMHOST_ADDRPERDATA{1'b0}}})
,.data(dspif.bramfromhost2_data)
,.we(dspif.bramfromhost2_we)
);

bram_read#(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH+BRAMFROMHOST_ADDRPERDATA),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH))
bramfromhost3_read(.bram(bram_fromhost3)
,.addr({dspif.bramfromhost3_addr,{BRAMFROMHOST_ADDRPERDATA{1'b0}}})
,.data(dspif.bramfromhost3_data)
);
*/
wire adc20datavalid;
wire [ADC_AXIS_DATAWIDTH-1:0] adc20data_x;
axi4stream_slave_handshake_data #(.DATA_WIDTH (ADC_AXIS_DATAWIDTH))
adc20hsda(.axis(adc20axis),.ready(1'b1),.datavalid(adc20datavalid),.data(adc20data_x));
samefreqxdomain #(.DW(ADC_AXIS_DATAWIDTH))
adc20data_xdomain(.clkw(clkadc2_600),.clkr(dspclk),.dataw(adc20data_x),.datar(dspif.adc20),.reset(1'b0));

wire adc21datavalid;
wire [ADC_AXIS_DATAWIDTH-1:0] adc21data_x;
axi4stream_slave_handshake_data #(.DATA_WIDTH (ADC_AXIS_DATAWIDTH))
adc21hsda(.axis(adc21axis),.ready(1'b1),.datavalid(adc21datavalid),.data(adc21data_x));
samefreqxdomain #(.DW(ADC_AXIS_DATAWIDTH))
adc21data_xdomain(.clkw(clkadc2_600),.clkr(dspclk),.dataw(adc21data_x),.datar(dspif.adc21),.reset(1'b0));

axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))
dac30hsda(.axis(dac30axis),.datavalid(1'b1),.data(dspif.dac30));
axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))
dac20hsda(.axis(dac20axis),.datavalid(1'b1),.data(dspif.dac20));
axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))
dac32hsda(.axis(dac32axis),.datavalid(1'b1),.data(dspif.dac32));
axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))
dac22hsda(.axis(dac22axis),.datavalid(1'b1),.data(dspif.dac22));
assign dspif.clk=dspclk;
reg dspreset_r=0;
always @(posedge dspclk) begin
	dspreset_r<=dspreset;
end
assign dspif.reset=dspreset_r;

//`include "ilaauto.vh"
endmodule
