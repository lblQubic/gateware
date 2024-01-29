interface ifbramctrl#(parameter integer DATA_WIDTH = 32,parameter integer ADDR_WIDTH=24,parameter READDELAY=4
,`include "bram_para.vh"
,`include "braminit_para.vh"
	)(iflocalbus.lb lb
,`include "bramif_lbport.vh")
;
reg [DATA_WIDTH-1:0] rdata=0;
reg command0_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command0_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command0_W_din=0;assign {command0_W.we,command0_W.addr,command0_W.din}={command0_W_we,command0_W_waddr,command0_W_din};
reg command1_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command1_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command1_W_din=0;assign {command1_W.we,command1_W.addr,command1_W.din}={command1_W_we,command1_W_waddr,command1_W_din};
reg command2_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command2_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command2_W_din=0;assign {command2_W.we,command2_W.addr,command2_W.din}={command2_W_we,command2_W_waddr,command2_W_din};
reg qdrvfreq0_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq0_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq0_W_din=0;assign {qdrvfreq0_W.we,qdrvfreq0_W.addr,qdrvfreq0_W.din}={qdrvfreq0_W_we,qdrvfreq0_W_waddr,qdrvfreq0_W_din};
reg qdrvfreq1_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq1_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq1_W_din=0;assign {qdrvfreq1_W.we,qdrvfreq1_W.addr,qdrvfreq1_W.din}={qdrvfreq1_W_we,qdrvfreq1_W_waddr,qdrvfreq1_W_din};
reg qdrvfreq2_W_we=0;reg [QDRVFREQ_W_ADDRWIDTH-1:0]  qdrvfreq2_W_waddr=0;reg [QDRVFREQ_W_DATAWIDTH-1:0] qdrvfreq2_W_din=0;assign {qdrvfreq2_W.we,qdrvfreq2_W.addr,qdrvfreq2_W.din}={qdrvfreq2_W_we,qdrvfreq2_W_waddr,qdrvfreq2_W_din};
reg rdrvfreq0_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq0_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq0_W_din=0;assign {rdrvfreq0_W.we,rdrvfreq0_W.addr,rdrvfreq0_W.din}={rdrvfreq0_W_we,rdrvfreq0_W_waddr,rdrvfreq0_W_din};
reg rdrvfreq1_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq1_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq1_W_din=0;assign {rdrvfreq1_W.we,rdrvfreq1_W.addr,rdrvfreq1_W.din}={rdrvfreq1_W_we,rdrvfreq1_W_waddr,rdrvfreq1_W_din};
reg rdrvfreq2_W_we=0;reg [RDRVFREQ_W_ADDRWIDTH-1:0]  rdrvfreq2_W_waddr=0;reg [RDRVFREQ_W_DATAWIDTH-1:0] rdrvfreq2_W_din=0;assign {rdrvfreq2_W.we,rdrvfreq2_W.addr,rdrvfreq2_W.din}={rdrvfreq2_W_we,rdrvfreq2_W_waddr,rdrvfreq2_W_din};
reg qdrvenv0_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv0_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv0_W_din=0;assign {qdrvenv0_W.we,qdrvenv0_W.addr,qdrvenv0_W.din}={qdrvenv0_W_we,qdrvenv0_W_waddr,qdrvenv0_W_din};
reg qdrvenv1_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv1_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv1_W_din=0;assign {qdrvenv1_W.we,qdrvenv1_W.addr,qdrvenv1_W.din}={qdrvenv1_W_we,qdrvenv1_W_waddr,qdrvenv1_W_din};
reg qdrvenv2_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv2_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv2_W_din=0;assign {qdrvenv2_W.we,qdrvenv2_W.addr,qdrvenv2_W.din}={qdrvenv2_W_we,qdrvenv2_W_waddr,qdrvenv2_W_din};
reg rdloenv0_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv0_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv0_W_din=0;assign {rdloenv0_W.we,rdloenv0_W.addr,rdloenv0_W.din}={rdloenv0_W_we,rdloenv0_W_waddr,rdloenv0_W_din};
reg rdloenv1_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv1_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv1_W_din=0;assign {rdloenv1_W.we,rdloenv1_W.addr,rdloenv1_W.din}={rdloenv1_W_we,rdloenv1_W_waddr,rdloenv1_W_din};
reg rdloenv2_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv2_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv2_W_din=0;assign {rdloenv2_W.we,rdloenv2_W.addr,rdloenv2_W.din}={rdloenv2_W_we,rdloenv2_W_waddr,rdloenv2_W_din};
reg rdrvenv0_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv0_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv0_W_din=0;assign {rdrvenv0_W.we,rdrvenv0_W.addr,rdrvenv0_W.din}={rdrvenv0_W_we,rdrvenv0_W_waddr,rdrvenv0_W_din};
reg rdrvenv1_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv1_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv1_W_din=0;assign {rdrvenv1_W.we,rdrvenv1_W.addr,rdrvenv1_W.din}={rdrvenv1_W_we,rdrvenv1_W_waddr,rdrvenv1_W_din};
reg rdrvenv2_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv2_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv2_W_din=0;assign {rdrvenv2_W.we,rdrvenv2_W.addr,rdrvenv2_W.din}={rdrvenv2_W_we,rdrvenv2_W_waddr,rdrvenv2_W_din};
reg rdlofreq0_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq0_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq0_W_din=0;assign {rdlofreq0_W.we,rdlofreq0_W.addr,rdlofreq0_W.din}={rdlofreq0_W_we,rdlofreq0_W_waddr,rdlofreq0_W_din};
reg rdlofreq1_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq1_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq1_W_din=0;assign {rdlofreq1_W.we,rdlofreq1_W.addr,rdlofreq1_W.din}={rdlofreq1_W_we,rdlofreq1_W_waddr,rdlofreq1_W_din};
reg rdlofreq2_W_we=0;reg [RDLOFREQ_W_ADDRWIDTH-1:0]  rdlofreq2_W_waddr=0;reg [RDLOFREQ_W_DATAWIDTH-1:0] rdlofreq2_W_din=0;assign {rdlofreq2_W.we,rdlofreq2_W.addr,rdlofreq2_W.din}={rdlofreq2_W_we,rdlofreq2_W_waddr,rdlofreq2_W_din};
    always @(posedge lb.clk) begin
 command0_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='h2)&lb.wren; command0_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command0_W_din<=lb.wdata; // address: 0x00004000
command1_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='h3)&lb.wren; command1_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command1_W_din<=lb.wdata; // address: 0x00006000
command2_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='h4)&lb.wren; command2_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command2_W_din<=lb.wdata; // address: 0x00008000
qdrvfreq0_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h5)&lb.wren; qdrvfreq0_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq0_W_din<=lb.wdata; // address: 0x0000a000
qdrvfreq1_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h6)&lb.wren; qdrvfreq1_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq1_W_din<=lb.wdata; // address: 0x0000c000
qdrvfreq2_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVFREQ_W_ADDRWIDTH]=='h7)&lb.wren; qdrvfreq2_W_waddr<=lb.waddr[QDRVFREQ_W_ADDRWIDTH-1:0]; qdrvfreq2_W_din<=lb.wdata; // address: 0x0000e000
rdrvfreq0_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='h8)&lb.wren; rdrvfreq0_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq0_W_din<=lb.wdata; // address: 0x00010000
rdrvfreq1_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='h9)&lb.wren; rdrvfreq1_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq1_W_din<=lb.wdata; // address: 0x00012000
rdrvfreq2_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVFREQ_W_ADDRWIDTH]=='ha)&lb.wren; rdrvfreq2_W_waddr<=lb.waddr[RDRVFREQ_W_ADDRWIDTH-1:0]; rdrvfreq2_W_din<=lb.wdata; // address: 0x00014000
qdrvenv0_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h1a)&lb.wren; qdrvenv0_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv0_W_din<=lb.wdata; // address: 0x0001a000
qdrvenv1_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h1b)&lb.wren; qdrvenv1_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv1_W_din<=lb.wdata; // address: 0x0001b000
qdrvenv2_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h1c)&lb.wren; qdrvenv2_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv2_W_din<=lb.wdata; // address: 0x0001c000
rdloenv0_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h1d)&lb.wren; rdloenv0_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv0_W_din<=lb.wdata; // address: 0x0001d000
rdloenv1_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h1e)&lb.wren; rdloenv1_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv1_W_din<=lb.wdata; // address: 0x0001e000
rdloenv2_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h1f)&lb.wren; rdloenv2_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv2_W_din<=lb.wdata; // address: 0x0001f000
rdrvenv0_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h20)&lb.wren; rdrvenv0_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv0_W_din<=lb.wdata; // address: 0x00020000
rdrvenv1_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h21)&lb.wren; rdrvenv1_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv1_W_din<=lb.wdata; // address: 0x00021000
rdrvenv2_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h22)&lb.wren; rdrvenv2_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv2_W_din<=lb.wdata; // address: 0x00022000
rdlofreq0_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h49)&lb.wren; rdlofreq0_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq0_W_din<=lb.wdata; // address: 0x00024800
rdlofreq1_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h4a)&lb.wren; rdlofreq1_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq1_W_din<=lb.wdata; // address: 0x00025000
rdlofreq2_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOFREQ_W_ADDRWIDTH]=='h4b)&lb.wren; rdlofreq2_W_waddr<=lb.waddr[RDLOFREQ_W_ADDRWIDTH-1:0]; rdlofreq2_W_din<=lb.wdata; // address: 0x00025800
 end
reg [ACQBUF_R_ADDRWIDTH-1:0]  acqbuf0_R_raddr=0;reg [ACQBUF_R_DATAWIDTH-1:0] acqbuf0_R_dout=0;assign acqbuf0_R.addr=acqbuf0_R_raddr;
reg [ACQBUF_R_ADDRWIDTH-1:0]  acqbuf1_R_raddr=0;reg [ACQBUF_R_DATAWIDTH-1:0] acqbuf1_R_dout=0;assign acqbuf1_R.addr=acqbuf1_R_raddr;
reg [DACMON_R_ADDRWIDTH-1:0]  dacmon0_R_raddr=0;reg [DACMON_R_DATAWIDTH-1:0] dacmon0_R_dout=0;assign dacmon0_R.addr=dacmon0_R_raddr;
reg [DACMON_R_ADDRWIDTH-1:0]  dacmon1_R_raddr=0;reg [DACMON_R_DATAWIDTH-1:0] dacmon1_R_dout=0;assign dacmon1_R.addr=dacmon1_R_raddr;
reg [DACMON_R_ADDRWIDTH-1:0]  dacmon2_R_raddr=0;reg [DACMON_R_DATAWIDTH-1:0] dacmon2_R_dout=0;assign dacmon2_R.addr=dacmon2_R_raddr;
reg [DACMON_R_ADDRWIDTH-1:0]  dacmon3_R_raddr=0;reg [DACMON_R_DATAWIDTH-1:0] dacmon3_R_dout=0;assign dacmon3_R.addr=dacmon3_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf0_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf0_R_dout=0;assign accbuf0_R.addr=accbuf0_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf1_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf1_R_dout=0;assign accbuf1_R.addr=accbuf1_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf2_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf2_R_dout=0;assign accbuf2_R.addr=accbuf2_R_raddr;
always @(posedge lb.clk) begin
            acqbuf0_R_raddr<=lb.raddr[ACQBUF_R_ADDRWIDTH-1:0];acqbuf0_R_dout<=acqbuf0_R.dout;
acqbuf1_R_raddr<=lb.raddr[ACQBUF_R_ADDRWIDTH-1:0];acqbuf1_R_dout<=acqbuf1_R.dout;
dacmon0_R_raddr<=lb.raddr[DACMON_R_ADDRWIDTH-1:0];dacmon0_R_dout<=dacmon0_R.dout;
dacmon1_R_raddr<=lb.raddr[DACMON_R_ADDRWIDTH-1:0];dacmon1_R_dout<=dacmon1_R.dout;
dacmon2_R_raddr<=lb.raddr[DACMON_R_ADDRWIDTH-1:0];dacmon2_R_dout<=dacmon2_R.dout;
dacmon3_R_raddr<=lb.raddr[DACMON_R_ADDRWIDTH-1:0];dacmon3_R_dout<=dacmon3_R.dout;
accbuf0_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf0_R_dout<=accbuf0_R.dout;
accbuf1_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf1_R_dout<=accbuf1_R.dout;
accbuf2_R_raddr<=lb.raddr[ACCBUF_R_ADDRWIDTH-1:0];accbuf2_R_dout<=accbuf2_R.dout;
end
    always @(posedge lb.clk) begin
        if (lb.rden16[READDELAY]) begin
            casex (lb.raddr16[READDELAY*ADDR_WIDTH-1:(READDELAY-1)*ADDR_WIDTH])
            {(ADDR_WIDTH-ACQBUF_R_ADDRWIDTH)'('h0),{ACQBUF_R_ADDRWIDTH{1'bx}}}: rdata <= acqbuf0_R_dout;  // address: 0x00000000
{(ADDR_WIDTH-ACQBUF_R_ADDRWIDTH)'('h1),{ACQBUF_R_ADDRWIDTH{1'bx}}}: rdata <= acqbuf1_R_dout;  // address: 0x00002000
{(ADDR_WIDTH-DACMON_R_ADDRWIDTH)'('h16),{DACMON_R_ADDRWIDTH{1'bx}}}: rdata <= dacmon0_R_dout;  // address: 0x00016000
{(ADDR_WIDTH-DACMON_R_ADDRWIDTH)'('h17),{DACMON_R_ADDRWIDTH{1'bx}}}: rdata <= dacmon1_R_dout;  // address: 0x00017000
{(ADDR_WIDTH-DACMON_R_ADDRWIDTH)'('h18),{DACMON_R_ADDRWIDTH{1'bx}}}: rdata <= dacmon2_R_dout;  // address: 0x00018000
{(ADDR_WIDTH-DACMON_R_ADDRWIDTH)'('h19),{DACMON_R_ADDRWIDTH{1'bx}}}: rdata <= dacmon3_R_dout;  // address: 0x00019000
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('h46),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf0_R_dout;  // address: 0x00023000
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('h47),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf1_R_dout;  // address: 0x00023800
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('h48),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf2_R_dout;  // address: 0x00024000
                default:rdata <= 32'hdeadbeef;
            endcase
        end
    end
assign lb.rdata=rdata;
assign lb.rvalid=lb.rden16[READDELAY+1];
assign lb.rvalidlast=lb.rdenlast16[READDELAY+1];
endinterface