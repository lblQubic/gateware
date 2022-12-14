interface ifbramctrl#(parameter integer DATA_WIDTH = 32,parameter integer ADDR_WIDTH=24,parameter READDELAY=4
,`include "bram_para.vh"
,`include "braminit_para.vh"
	)(iflocalbus.lb lb
,`include "bramif_lbport.vh")
;
reg [DATA_WIDTH-1:0] rdata=0;
reg rdrvenv0_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv0_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv0_W_din=0;assign {rdrvenv0_W.we,rdrvenv0_W.addr,rdrvenv0_W.din}={rdrvenv0_W_we,rdrvenv0_W_waddr,rdrvenv0_W_din};
reg rdrvenv1_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv1_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv1_W_din=0;assign {rdrvenv1_W.we,rdrvenv1_W.addr,rdrvenv1_W.din}={rdrvenv1_W_we,rdrvenv1_W_waddr,rdrvenv1_W_din};
reg rdrvenv2_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv2_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv2_W_din=0;assign {rdrvenv2_W.we,rdrvenv2_W.addr,rdrvenv2_W.din}={rdrvenv2_W_we,rdrvenv2_W_waddr,rdrvenv2_W_din};
reg rdrvenv3_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv3_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv3_W_din=0;assign {rdrvenv3_W.we,rdrvenv3_W.addr,rdrvenv3_W.din}={rdrvenv3_W_we,rdrvenv3_W_waddr,rdrvenv3_W_din};
reg rdrvenv4_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv4_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv4_W_din=0;assign {rdrvenv4_W.we,rdrvenv4_W.addr,rdrvenv4_W.din}={rdrvenv4_W_we,rdrvenv4_W_waddr,rdrvenv4_W_din};
reg rdrvenv5_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv5_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv5_W_din=0;assign {rdrvenv5_W.we,rdrvenv5_W.addr,rdrvenv5_W.din}={rdrvenv5_W_we,rdrvenv5_W_waddr,rdrvenv5_W_din};
reg rdrvenv6_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv6_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv6_W_din=0;assign {rdrvenv6_W.we,rdrvenv6_W.addr,rdrvenv6_W.din}={rdrvenv6_W_we,rdrvenv6_W_waddr,rdrvenv6_W_din};
reg rdrvenv7_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv7_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv7_W_din=0;assign {rdrvenv7_W.we,rdrvenv7_W.addr,rdrvenv7_W.din}={rdrvenv7_W_we,rdrvenv7_W_waddr,rdrvenv7_W_din};
reg qdrvenv0_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv0_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv0_W_din=0;assign {qdrvenv0_W.we,qdrvenv0_W.addr,qdrvenv0_W.din}={qdrvenv0_W_we,qdrvenv0_W_waddr,qdrvenv0_W_din};
reg qdrvenv1_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv1_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv1_W_din=0;assign {qdrvenv1_W.we,qdrvenv1_W.addr,qdrvenv1_W.din}={qdrvenv1_W_we,qdrvenv1_W_waddr,qdrvenv1_W_din};
reg qdrvenv2_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv2_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv2_W_din=0;assign {qdrvenv2_W.we,qdrvenv2_W.addr,qdrvenv2_W.din}={qdrvenv2_W_we,qdrvenv2_W_waddr,qdrvenv2_W_din};
reg qdrvenv3_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv3_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv3_W_din=0;assign {qdrvenv3_W.we,qdrvenv3_W.addr,qdrvenv3_W.din}={qdrvenv3_W_we,qdrvenv3_W_waddr,qdrvenv3_W_din};
reg qdrvenv4_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv4_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv4_W_din=0;assign {qdrvenv4_W.we,qdrvenv4_W.addr,qdrvenv4_W.din}={qdrvenv4_W_we,qdrvenv4_W_waddr,qdrvenv4_W_din};
reg qdrvenv5_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv5_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv5_W_din=0;assign {qdrvenv5_W.we,qdrvenv5_W.addr,qdrvenv5_W.din}={qdrvenv5_W_we,qdrvenv5_W_waddr,qdrvenv5_W_din};
reg qdrvenv6_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv6_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv6_W_din=0;assign {qdrvenv6_W.we,qdrvenv6_W.addr,qdrvenv6_W.din}={qdrvenv6_W_we,qdrvenv6_W_waddr,qdrvenv6_W_din};
reg qdrvenv7_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv7_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv7_W_din=0;assign {qdrvenv7_W.we,qdrvenv7_W.addr,qdrvenv7_W.din}={qdrvenv7_W_we,qdrvenv7_W_waddr,qdrvenv7_W_din};
reg rdloenv0_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv0_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv0_W_din=0;assign {rdloenv0_W.we,rdloenv0_W.addr,rdloenv0_W.din}={rdloenv0_W_we,rdloenv0_W_waddr,rdloenv0_W_din};
reg rdloenv1_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv1_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv1_W_din=0;assign {rdloenv1_W.we,rdloenv1_W.addr,rdloenv1_W.din}={rdloenv1_W_we,rdloenv1_W_waddr,rdloenv1_W_din};
reg rdloenv2_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv2_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv2_W_din=0;assign {rdloenv2_W.we,rdloenv2_W.addr,rdloenv2_W.din}={rdloenv2_W_we,rdloenv2_W_waddr,rdloenv2_W_din};
reg rdloenv3_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv3_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv3_W_din=0;assign {rdloenv3_W.we,rdloenv3_W.addr,rdloenv3_W.din}={rdloenv3_W_we,rdloenv3_W_waddr,rdloenv3_W_din};
reg rdloenv4_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv4_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv4_W_din=0;assign {rdloenv4_W.we,rdloenv4_W.addr,rdloenv4_W.din}={rdloenv4_W_we,rdloenv4_W_waddr,rdloenv4_W_din};
reg rdloenv5_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv5_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv5_W_din=0;assign {rdloenv5_W.we,rdloenv5_W.addr,rdloenv5_W.din}={rdloenv5_W_we,rdloenv5_W_waddr,rdloenv5_W_din};
reg rdloenv6_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv6_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv6_W_din=0;assign {rdloenv6_W.we,rdloenv6_W.addr,rdloenv6_W.din}={rdloenv6_W_we,rdloenv6_W_waddr,rdloenv6_W_din};
reg rdloenv7_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv7_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv7_W_din=0;assign {rdloenv7_W.we,rdloenv7_W.addr,rdloenv7_W.din}={rdloenv7_W_we,rdloenv7_W_waddr,rdloenv7_W_din};
reg qdrvfreq0_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq0_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq0_W_din=0;assign {qdrvfreq0_W.we,qdrvfreq0_W.addr,qdrvfreq0_W.din}={qdrvfreq0_W_we,qdrvfreq0_W_waddr,qdrvfreq0_W_din};
reg qdrvfreq1_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq1_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq1_W_din=0;assign {qdrvfreq1_W.we,qdrvfreq1_W.addr,qdrvfreq1_W.din}={qdrvfreq1_W_we,qdrvfreq1_W_waddr,qdrvfreq1_W_din};
reg qdrvfreq2_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq2_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq2_W_din=0;assign {qdrvfreq2_W.we,qdrvfreq2_W.addr,qdrvfreq2_W.din}={qdrvfreq2_W_we,qdrvfreq2_W_waddr,qdrvfreq2_W_din};
reg qdrvfreq3_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq3_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq3_W_din=0;assign {qdrvfreq3_W.we,qdrvfreq3_W.addr,qdrvfreq3_W.din}={qdrvfreq3_W_we,qdrvfreq3_W_waddr,qdrvfreq3_W_din};
reg qdrvfreq4_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq4_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq4_W_din=0;assign {qdrvfreq4_W.we,qdrvfreq4_W.addr,qdrvfreq4_W.din}={qdrvfreq4_W_we,qdrvfreq4_W_waddr,qdrvfreq4_W_din};
reg qdrvfreq5_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq5_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq5_W_din=0;assign {qdrvfreq5_W.we,qdrvfreq5_W.addr,qdrvfreq5_W.din}={qdrvfreq5_W_we,qdrvfreq5_W_waddr,qdrvfreq5_W_din};
reg qdrvfreq6_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq6_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq6_W_din=0;assign {qdrvfreq6_W.we,qdrvfreq6_W.addr,qdrvfreq6_W.din}={qdrvfreq6_W_we,qdrvfreq6_W_waddr,qdrvfreq6_W_din};
reg qdrvfreq7_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq7_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq7_W_din=0;assign {qdrvfreq7_W.we,qdrvfreq7_W.addr,qdrvfreq7_W.din}={qdrvfreq7_W_we,qdrvfreq7_W_waddr,qdrvfreq7_W_din};
reg rdrvfreq0_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq0_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq0_W_din=0;assign {rdrvfreq0_W.we,rdrvfreq0_W.addr,rdrvfreq0_W.din}={rdrvfreq0_W_we,rdrvfreq0_W_waddr,rdrvfreq0_W_din};
reg rdrvfreq1_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq1_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq1_W_din=0;assign {rdrvfreq1_W.we,rdrvfreq1_W.addr,rdrvfreq1_W.din}={rdrvfreq1_W_we,rdrvfreq1_W_waddr,rdrvfreq1_W_din};
reg rdrvfreq2_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq2_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq2_W_din=0;assign {rdrvfreq2_W.we,rdrvfreq2_W.addr,rdrvfreq2_W.din}={rdrvfreq2_W_we,rdrvfreq2_W_waddr,rdrvfreq2_W_din};
reg rdrvfreq3_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq3_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq3_W_din=0;assign {rdrvfreq3_W.we,rdrvfreq3_W.addr,rdrvfreq3_W.din}={rdrvfreq3_W_we,rdrvfreq3_W_waddr,rdrvfreq3_W_din};
reg rdrvfreq4_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq4_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq4_W_din=0;assign {rdrvfreq4_W.we,rdrvfreq4_W.addr,rdrvfreq4_W.din}={rdrvfreq4_W_we,rdrvfreq4_W_waddr,rdrvfreq4_W_din};
reg rdrvfreq5_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq5_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq5_W_din=0;assign {rdrvfreq5_W.we,rdrvfreq5_W.addr,rdrvfreq5_W.din}={rdrvfreq5_W_we,rdrvfreq5_W_waddr,rdrvfreq5_W_din};
reg rdrvfreq6_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq6_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq6_W_din=0;assign {rdrvfreq6_W.we,rdrvfreq6_W.addr,rdrvfreq6_W.din}={rdrvfreq6_W_we,rdrvfreq6_W_waddr,rdrvfreq6_W_din};
reg rdrvfreq7_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq7_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq7_W_din=0;assign {rdrvfreq7_W.we,rdrvfreq7_W.addr,rdrvfreq7_W.din}={rdrvfreq7_W_we,rdrvfreq7_W_waddr,rdrvfreq7_W_din};
reg command0_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command0_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command0_W_din=0;assign {command0_W.we,command0_W.addr,command0_W.din}={command0_W_we,command0_W_waddr,command0_W_din};
reg command1_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command1_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command1_W_din=0;assign {command1_W.we,command1_W.addr,command1_W.din}={command1_W_we,command1_W_waddr,command1_W_din};
reg command2_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command2_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command2_W_din=0;assign {command2_W.we,command2_W.addr,command2_W.din}={command2_W_we,command2_W_waddr,command2_W_din};
reg command3_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command3_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command3_W_din=0;assign {command3_W.we,command3_W.addr,command3_W.din}={command3_W_we,command3_W_waddr,command3_W_din};
reg command4_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command4_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command4_W_din=0;assign {command4_W.we,command4_W.addr,command4_W.din}={command4_W_we,command4_W_waddr,command4_W_din};
reg command5_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command5_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command5_W_din=0;assign {command5_W.we,command5_W.addr,command5_W.din}={command5_W_we,command5_W_waddr,command5_W_din};
reg command6_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command6_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command6_W_din=0;assign {command6_W.we,command6_W.addr,command6_W.din}={command6_W_we,command6_W_waddr,command6_W_din};
reg command7_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command7_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command7_W_din=0;assign {command7_W.we,command7_W.addr,command7_W.din}={command7_W_we,command7_W_waddr,command7_W_din};
reg rdlofreq0_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq0_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq0_W_din=0;assign {rdlofreq0_W.we,rdlofreq0_W.addr,rdlofreq0_W.din}={rdlofreq0_W_we,rdlofreq0_W_waddr,rdlofreq0_W_din};
reg rdlofreq1_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq1_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq1_W_din=0;assign {rdlofreq1_W.we,rdlofreq1_W.addr,rdlofreq1_W.din}={rdlofreq1_W_we,rdlofreq1_W_waddr,rdlofreq1_W_din};
reg rdlofreq2_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq2_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq2_W_din=0;assign {rdlofreq2_W.we,rdlofreq2_W.addr,rdlofreq2_W.din}={rdlofreq2_W_we,rdlofreq2_W_waddr,rdlofreq2_W_din};
reg rdlofreq3_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq3_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq3_W_din=0;assign {rdlofreq3_W.we,rdlofreq3_W.addr,rdlofreq3_W.din}={rdlofreq3_W_we,rdlofreq3_W_waddr,rdlofreq3_W_din};
reg rdlofreq4_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq4_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq4_W_din=0;assign {rdlofreq4_W.we,rdlofreq4_W.addr,rdlofreq4_W.din}={rdlofreq4_W_we,rdlofreq4_W_waddr,rdlofreq4_W_din};
reg rdlofreq5_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq5_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq5_W_din=0;assign {rdlofreq5_W.we,rdlofreq5_W.addr,rdlofreq5_W.din}={rdlofreq5_W_we,rdlofreq5_W_waddr,rdlofreq5_W_din};
reg rdlofreq6_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq6_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq6_W_din=0;assign {rdlofreq6_W.we,rdlofreq6_W.addr,rdlofreq6_W.din}={rdlofreq6_W_we,rdlofreq6_W_waddr,rdlofreq6_W_din};
reg rdlofreq7_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq7_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq7_W_din=0;assign {rdlofreq7_W.we,rdlofreq7_W.addr,rdlofreq7_W.din}={rdlofreq7_W_we,rdlofreq7_W_waddr,rdlofreq7_W_din};
    always @(posedge lb.clk) begin
 rdrvenv0_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h0)&lb.wren; rdrvenv0_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv0_W_din<=lb.wdata; // address: 0x00000000
rdrvenv1_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h1)&lb.wren; rdrvenv1_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv1_W_din<=lb.wdata; // address: 0x00010000
rdrvenv2_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h2)&lb.wren; rdrvenv2_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv2_W_din<=lb.wdata; // address: 0x00020000
rdrvenv3_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h3)&lb.wren; rdrvenv3_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv3_W_din<=lb.wdata; // address: 0x00030000
rdrvenv4_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h4)&lb.wren; rdrvenv4_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv4_W_din<=lb.wdata; // address: 0x00040000
rdrvenv5_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h5)&lb.wren; rdrvenv5_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv5_W_din<=lb.wdata; // address: 0x00050000
rdrvenv6_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h6)&lb.wren; rdrvenv6_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv6_W_din<=lb.wdata; // address: 0x00060000
rdrvenv7_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h7)&lb.wren; rdrvenv7_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv7_W_din<=lb.wdata; // address: 0x00070000
qdrvenv0_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h22)&lb.wren; qdrvenv0_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv0_W_din<=lb.wdata; // address: 0x00088000
qdrvenv1_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h23)&lb.wren; qdrvenv1_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv1_W_din<=lb.wdata; // address: 0x0008c000
qdrvenv2_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h24)&lb.wren; qdrvenv2_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv2_W_din<=lb.wdata; // address: 0x00090000
qdrvenv3_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h25)&lb.wren; qdrvenv3_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv3_W_din<=lb.wdata; // address: 0x00094000
qdrvenv4_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h26)&lb.wren; qdrvenv4_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv4_W_din<=lb.wdata; // address: 0x00098000
qdrvenv5_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h27)&lb.wren; qdrvenv5_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv5_W_din<=lb.wdata; // address: 0x0009c000
qdrvenv6_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h28)&lb.wren; qdrvenv6_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv6_W_din<=lb.wdata; // address: 0x000a0000
qdrvenv7_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h29)&lb.wren; qdrvenv7_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv7_W_din<=lb.wdata; // address: 0x000a4000
rdloenv0_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h2a)&lb.wren; rdloenv0_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv0_W_din<=lb.wdata; // address: 0x000a8000
rdloenv1_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h2b)&lb.wren; rdloenv1_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv1_W_din<=lb.wdata; // address: 0x000ac000
rdloenv2_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h2c)&lb.wren; rdloenv2_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv2_W_din<=lb.wdata; // address: 0x000b0000
rdloenv3_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h2d)&lb.wren; rdloenv3_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv3_W_din<=lb.wdata; // address: 0x000b4000
rdloenv4_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h2e)&lb.wren; rdloenv4_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv4_W_din<=lb.wdata; // address: 0x000b8000
rdloenv5_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h2f)&lb.wren; rdloenv5_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv5_W_din<=lb.wdata; // address: 0x000bc000
rdloenv6_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h30)&lb.wren; rdloenv6_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv6_W_din<=lb.wdata; // address: 0x000c0000
rdloenv7_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h31)&lb.wren; rdloenv7_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv7_W_din<=lb.wdata; // address: 0x000c4000
qdrvfreq0_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h64)&lb.wren; qdrvfreq0_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq0_W_din<=lb.wdata; // address: 0x000c8000
qdrvfreq1_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h65)&lb.wren; qdrvfreq1_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq1_W_din<=lb.wdata; // address: 0x000ca000
qdrvfreq2_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h66)&lb.wren; qdrvfreq2_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq2_W_din<=lb.wdata; // address: 0x000cc000
qdrvfreq3_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h67)&lb.wren; qdrvfreq3_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq3_W_din<=lb.wdata; // address: 0x000ce000
qdrvfreq4_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h68)&lb.wren; qdrvfreq4_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq4_W_din<=lb.wdata; // address: 0x000d0000
qdrvfreq5_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h69)&lb.wren; qdrvfreq5_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq5_W_din<=lb.wdata; // address: 0x000d2000
qdrvfreq6_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h6a)&lb.wren; qdrvfreq6_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq6_W_din<=lb.wdata; // address: 0x000d4000
qdrvfreq7_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h6b)&lb.wren; qdrvfreq7_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq7_W_din<=lb.wdata; // address: 0x000d6000
rdrvfreq0_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='h6c)&lb.wren; rdrvfreq0_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq0_W_din<=lb.wdata; // address: 0x000d8000
rdrvfreq1_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='h6d)&lb.wren; rdrvfreq1_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq1_W_din<=lb.wdata; // address: 0x000da000
rdrvfreq2_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='h6e)&lb.wren; rdrvfreq2_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq2_W_din<=lb.wdata; // address: 0x000dc000
rdrvfreq3_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='h6f)&lb.wren; rdrvfreq3_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq3_W_din<=lb.wdata; // address: 0x000de000
rdrvfreq4_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='h70)&lb.wren; rdrvfreq4_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq4_W_din<=lb.wdata; // address: 0x000e0000
rdrvfreq5_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='h71)&lb.wren; rdrvfreq5_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq5_W_din<=lb.wdata; // address: 0x000e2000
rdrvfreq6_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='h72)&lb.wren; rdrvfreq6_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq6_W_din<=lb.wdata; // address: 0x000e4000
rdrvfreq7_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='h73)&lb.wren; rdrvfreq7_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq7_W_din<=lb.wdata; // address: 0x000e6000
command0_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='hf0)&lb.wren; command0_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command0_W_din<=lb.wdata; // address: 0x000f0000
command1_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='hf1)&lb.wren; command1_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command1_W_din<=lb.wdata; // address: 0x000f1000
command2_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='hf2)&lb.wren; command2_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command2_W_din<=lb.wdata; // address: 0x000f2000
command3_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='hf3)&lb.wren; command3_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command3_W_din<=lb.wdata; // address: 0x000f3000
command4_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='hf4)&lb.wren; command4_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command4_W_din<=lb.wdata; // address: 0x000f4000
command5_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='hf5)&lb.wren; command5_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command5_W_din<=lb.wdata; // address: 0x000f5000
command6_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='hf6)&lb.wren; command6_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command6_W_din<=lb.wdata; // address: 0x000f6000
command7_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='hf7)&lb.wren; command7_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command7_W_din<=lb.wdata; // address: 0x000f7000
rdlofreq0_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h1f8)&lb.wren; rdlofreq0_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq0_W_din<=lb.wdata; // address: 0x000fc000
rdlofreq1_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h1f9)&lb.wren; rdlofreq1_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq1_W_din<=lb.wdata; // address: 0x000fc800
rdlofreq2_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h1fa)&lb.wren; rdlofreq2_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq2_W_din<=lb.wdata; // address: 0x000fd000
rdlofreq3_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h1fb)&lb.wren; rdlofreq3_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq3_W_din<=lb.wdata; // address: 0x000fd800
rdlofreq4_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h1fc)&lb.wren; rdlofreq4_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq4_W_din<=lb.wdata; // address: 0x000fe000
rdlofreq5_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h1fd)&lb.wren; rdlofreq5_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq5_W_din<=lb.wdata; // address: 0x000fe800
rdlofreq6_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h1fe)&lb.wren; rdlofreq6_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq6_W_din<=lb.wdata; // address: 0x000ff000
rdlofreq7_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h1ff)&lb.wren; rdlofreq7_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq7_W_din<=lb.wdata; // address: 0x000ff800
 end
reg [ACQBUF_R_ADDRWIDTH-1:0]  acqbuf0_R_raddr=0;reg [ACQBUF_R_DATAWIDTH-1:0] acqbuf0_R_dout=0;assign acqbuf0_R.addr=acqbuf0_R_raddr;
reg [ACQBUF_R_ADDRWIDTH-1:0]  acqbuf1_R_raddr=0;reg [ACQBUF_R_DATAWIDTH-1:0] acqbuf1_R_dout=0;assign acqbuf1_R.addr=acqbuf1_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf0_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf0_R_dout=0;assign accbuf0_R.addr=accbuf0_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf1_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf1_R_dout=0;assign accbuf1_R.addr=accbuf1_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf2_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf2_R_dout=0;assign accbuf2_R.addr=accbuf2_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf3_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf3_R_dout=0;assign accbuf3_R.addr=accbuf3_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf4_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf4_R_dout=0;assign accbuf4_R.addr=accbuf4_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf5_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf5_R_dout=0;assign accbuf5_R.addr=accbuf5_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf6_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf6_R_dout=0;assign accbuf6_R.addr=accbuf6_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf7_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf7_R_dout=0;assign accbuf7_R.addr=accbuf7_R_raddr;
reg [DACMON_R_ADDRWIDTH-1:0]  dacmon0_R_raddr=0;reg [DACMON_R_DATAWIDTH-1:0] dacmon0_R_dout=0;assign dacmon0_R.addr=dacmon0_R_raddr;
reg [DACMON_R_ADDRWIDTH-1:0]  dacmon1_R_raddr=0;reg [DACMON_R_DATAWIDTH-1:0] dacmon1_R_dout=0;assign dacmon1_R.addr=dacmon1_R_raddr;
reg [DACMON_R_ADDRWIDTH-1:0]  dacmon2_R_raddr=0;reg [DACMON_R_DATAWIDTH-1:0] dacmon2_R_dout=0;assign dacmon2_R.addr=dacmon2_R_raddr;
reg [DACMON_R_ADDRWIDTH-1:0]  dacmon3_R_raddr=0;reg [DACMON_R_DATAWIDTH-1:0] dacmon3_R_dout=0;assign dacmon3_R.addr=dacmon3_R_raddr;
always @(posedge lb.clk) begin
            acqbuf0_R_raddr<=lb.raddr[ACQBUF_R_ADDRWIDTH-1:0];acqbuf0_R_dout<=acqbuf0_R.dout;
acqbuf1_R_raddr<=lb.raddr[ACQBUF_R_ADDRWIDTH-1:0];acqbuf1_R_dout<=acqbuf1_R.dout;
accbuf0_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf0_R_dout<=accbuf0_R.dout;
accbuf1_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf1_R_dout<=accbuf1_R.dout;
accbuf2_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf2_R_dout<=accbuf2_R.dout;
accbuf3_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf3_R_dout<=accbuf3_R.dout;
accbuf4_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf4_R_dout<=accbuf4_R.dout;
accbuf5_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf5_R_dout<=accbuf5_R.dout;
accbuf6_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf6_R_dout<=accbuf6_R.dout;
accbuf7_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf7_R_dout<=accbuf7_R.dout;
dacmon0_R_raddr<=lb.raddr[DACMON_R_ADDRWIDTH-1:0];dacmon0_R_dout<=dacmon0_R.dout;
dacmon1_R_raddr<=lb.raddr[DACMON_R_ADDRWIDTH-1:0];dacmon1_R_dout<=dacmon1_R.dout;
dacmon2_R_raddr<=lb.raddr[DACMON_R_ADDRWIDTH-1:0];dacmon2_R_dout<=dacmon2_R.dout;
dacmon3_R_raddr<=lb.raddr[DACMON_R_ADDRWIDTH-1:0];dacmon3_R_dout<=dacmon3_R.dout;
end
    always @(posedge lb.clk) begin
        if (lb.rden16[READDELAY]) begin
            casex (lb.raddr16[READDELAY*ADDR_WIDTH-1:(READDELAY-1)*ADDR_WIDTH])
            {(ADDR_WIDTH-ACQBUF_R_ADDRWIDTH)'('h20),{ACQBUF_R_ADDRWIDTH{1'bx}}}: rdata <= acqbuf0_R_dout;  // address: 0x00080000
{(ADDR_WIDTH-ACQBUF_R_ADDRWIDTH)'('h21),{ACQBUF_R_ADDRWIDTH{1'bx}}}: rdata <= acqbuf1_R_dout;  // address: 0x00084000
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('he8),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf0_R_dout;  // address: 0x000e8000
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('he9),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf1_R_dout;  // address: 0x000e9000
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('hea),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf2_R_dout;  // address: 0x000ea000
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('heb),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf3_R_dout;  // address: 0x000eb000
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('hec),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf4_R_dout;  // address: 0x000ec000
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('hed),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf5_R_dout;  // address: 0x000ed000
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('hee),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf6_R_dout;  // address: 0x000ee000
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('hef),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf7_R_dout;  // address: 0x000ef000
{(ADDR_WIDTH-DACMON_R_ADDRWIDTH)'('hf8),{DACMON_R_ADDRWIDTH{1'bx}}}: rdata <= dacmon0_R_dout;  // address: 0x000f8000
{(ADDR_WIDTH-DACMON_R_ADDRWIDTH)'('hf9),{DACMON_R_ADDRWIDTH{1'bx}}}: rdata <= dacmon1_R_dout;  // address: 0x000f9000
{(ADDR_WIDTH-DACMON_R_ADDRWIDTH)'('hfa),{DACMON_R_ADDRWIDTH{1'bx}}}: rdata <= dacmon2_R_dout;  // address: 0x000fa000
{(ADDR_WIDTH-DACMON_R_ADDRWIDTH)'('hfb),{DACMON_R_ADDRWIDTH{1'bx}}}: rdata <= dacmon3_R_dout;  // address: 0x000fb000
                default:rdata <= 32'hdeadbeef;
            endcase
        end
    end
assign lb.rdata=rdata;
assign lb.rvalid=lb.rden16[READDELAY+1];
assign lb.rvalidlast=lb.rdenlast16[READDELAY+1];
endinterface