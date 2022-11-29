interface ifbramctrl#(parameter integer DATA_WIDTH = 32,parameter integer ADDR_WIDTH=24,parameter READDELAY=3
,`include "bram_para.vh"
	)(iflocalbus.lb lb
,`include "bramif_lbport.vh")
;
reg [DATA_WIDTH-1:0] rdata=0;
reg rdrvenv0_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv0_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv0_W_din=0;assign {rdrvenv0_W.we,rdrvenv0_W.addr,rdrvenv0_W.din}={rdrvenv0_W_we,rdrvenv0_W_waddr,rdrvenv0_W_din};
reg rdrvenv1_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv1_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv1_W_din=0;assign {rdrvenv1_W.we,rdrvenv1_W.addr,rdrvenv1_W.din}={rdrvenv1_W_we,rdrvenv1_W_waddr,rdrvenv1_W_din};
reg rdrvenv2_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv2_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv2_W_din=0;assign {rdrvenv2_W.we,rdrvenv2_W.addr,rdrvenv2_W.din}={rdrvenv2_W_we,rdrvenv2_W_waddr,rdrvenv2_W_din};
reg rdrvenv3_W_we=0;reg [RDRVENV_W_ADDRWIDTH-1:0]  rdrvenv3_W_waddr=0;reg [RDRVENV_W_DATAWIDTH-1:0] rdrvenv3_W_din=0;assign {rdrvenv3_W.we,rdrvenv3_W.addr,rdrvenv3_W.din}={rdrvenv3_W_we,rdrvenv3_W_waddr,rdrvenv3_W_din};
reg qdrvenv0_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv0_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv0_W_din=0;assign {qdrvenv0_W.we,qdrvenv0_W.addr,qdrvenv0_W.din}={qdrvenv0_W_we,qdrvenv0_W_waddr,qdrvenv0_W_din};
reg qdrvenv1_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv1_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv1_W_din=0;assign {qdrvenv1_W.we,qdrvenv1_W.addr,qdrvenv1_W.din}={qdrvenv1_W_we,qdrvenv1_W_waddr,qdrvenv1_W_din};
reg qdrvenv2_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv2_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv2_W_din=0;assign {qdrvenv2_W.we,qdrvenv2_W.addr,qdrvenv2_W.din}={qdrvenv2_W_we,qdrvenv2_W_waddr,qdrvenv2_W_din};
reg qdrvenv3_W_we=0;reg [QDRVENV_W_ADDRWIDTH-1:0]  qdrvenv3_W_waddr=0;reg [QDRVENV_W_DATAWIDTH-1:0] qdrvenv3_W_din=0;assign {qdrvenv3_W.we,qdrvenv3_W.addr,qdrvenv3_W.din}={qdrvenv3_W_we,qdrvenv3_W_waddr,qdrvenv3_W_din};
reg rdloenv0_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv0_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv0_W_din=0;assign {rdloenv0_W.we,rdloenv0_W.addr,rdloenv0_W.din}={rdloenv0_W_we,rdloenv0_W_waddr,rdloenv0_W_din};
reg rdloenv1_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv1_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv1_W_din=0;assign {rdloenv1_W.we,rdloenv1_W.addr,rdloenv1_W.din}={rdloenv1_W_we,rdloenv1_W_waddr,rdloenv1_W_din};
reg rdloenv2_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv2_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv2_W_din=0;assign {rdloenv2_W.we,rdloenv2_W.addr,rdloenv2_W.din}={rdloenv2_W_we,rdloenv2_W_waddr,rdloenv2_W_din};
reg rdloenv3_W_we=0;reg [RDLOENV_W_ADDRWIDTH-1:0]  rdloenv3_W_waddr=0;reg [RDLOENV_W_DATAWIDTH-1:0] rdloenv3_W_din=0;assign {rdloenv3_W.we,rdloenv3_W.addr,rdloenv3_W.din}={rdloenv3_W_we,rdloenv3_W_waddr,rdloenv3_W_din};
reg qdrvfreq0_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  qdrvfreq0_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] qdrvfreq0_W_din=0;assign {qdrvfreq0_W.we,qdrvfreq0_W.addr,qdrvfreq0_W.din}={qdrvfreq0_W_we,qdrvfreq0_W_waddr,qdrvfreq0_W_din};
reg qdrvfreq1_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  qdrvfreq1_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] qdrvfreq1_W_din=0;assign {qdrvfreq1_W.we,qdrvfreq1_W.addr,qdrvfreq1_W.din}={qdrvfreq1_W_we,qdrvfreq1_W_waddr,qdrvfreq1_W_din};
reg qdrvfreq2_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  qdrvfreq2_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] qdrvfreq2_W_din=0;assign {qdrvfreq2_W.we,qdrvfreq2_W.addr,qdrvfreq2_W.din}={qdrvfreq2_W_we,qdrvfreq2_W_waddr,qdrvfreq2_W_din};
reg qdrvfreq3_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  qdrvfreq3_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] qdrvfreq3_W_din=0;assign {qdrvfreq3_W.we,qdrvfreq3_W.addr,qdrvfreq3_W.din}={qdrvfreq3_W_we,qdrvfreq3_W_waddr,qdrvfreq3_W_din};
reg rdlofreq0_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  rdlofreq0_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] rdlofreq0_W_din=0;assign {rdlofreq0_W.we,rdlofreq0_W.addr,rdlofreq0_W.din}={rdlofreq0_W_we,rdlofreq0_W_waddr,rdlofreq0_W_din};
reg rdlofreq1_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  rdlofreq1_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] rdlofreq1_W_din=0;assign {rdlofreq1_W.we,rdlofreq1_W.addr,rdlofreq1_W.din}={rdlofreq1_W_we,rdlofreq1_W_waddr,rdlofreq1_W_din};
reg rdlofreq2_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  rdlofreq2_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] rdlofreq2_W_din=0;assign {rdlofreq2_W.we,rdlofreq2_W.addr,rdlofreq2_W.din}={rdlofreq2_W_we,rdlofreq2_W_waddr,rdlofreq2_W_din};
reg rdlofreq3_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  rdlofreq3_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] rdlofreq3_W_din=0;assign {rdlofreq3_W.we,rdlofreq3_W.addr,rdlofreq3_W.din}={rdlofreq3_W_we,rdlofreq3_W_waddr,rdlofreq3_W_din};
reg rdrvfreq0_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  rdrvfreq0_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] rdrvfreq0_W_din=0;assign {rdrvfreq0_W.we,rdrvfreq0_W.addr,rdrvfreq0_W.din}={rdrvfreq0_W_we,rdrvfreq0_W_waddr,rdrvfreq0_W_din};
reg rdrvfreq1_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  rdrvfreq1_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] rdrvfreq1_W_din=0;assign {rdrvfreq1_W.we,rdrvfreq1_W.addr,rdrvfreq1_W.din}={rdrvfreq1_W_we,rdrvfreq1_W_waddr,rdrvfreq1_W_din};
reg rdrvfreq2_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  rdrvfreq2_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] rdrvfreq2_W_din=0;assign {rdrvfreq2_W.we,rdrvfreq2_W.addr,rdrvfreq2_W.din}={rdrvfreq2_W_we,rdrvfreq2_W_waddr,rdrvfreq2_W_din};
reg rdrvfreq3_W_we=0;reg [FREQ_W_ADDRWIDTH-1:0]  rdrvfreq3_W_waddr=0;reg [FREQ_W_DATAWIDTH-1:0] rdrvfreq3_W_din=0;assign {rdrvfreq3_W.we,rdrvfreq3_W.addr,rdrvfreq3_W.din}={rdrvfreq3_W_we,rdrvfreq3_W_waddr,rdrvfreq3_W_din};
reg command0_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command0_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command0_W_din=0;assign {command0_W.we,command0_W.addr,command0_W.din}={command0_W_we,command0_W_waddr,command0_W_din};
reg command1_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command1_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command1_W_din=0;assign {command1_W.we,command1_W.addr,command1_W.din}={command1_W_we,command1_W_waddr,command1_W_din};
reg command2_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command2_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command2_W_din=0;assign {command2_W.we,command2_W.addr,command2_W.din}={command2_W_we,command2_W_waddr,command2_W_din};
reg command3_W_we=0;reg [COMMAND_W_ADDRWIDTH-1:0]  command3_W_waddr=0;reg [COMMAND_W_DATAWIDTH-1:0] command3_W_din=0;assign {command3_W.we,command3_W.addr,command3_W.din}={command3_W_we,command3_W_waddr,command3_W_din};
    always @(posedge lb.clk) begin
 rdrvenv0_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h0)&lb.wren; rdrvenv0_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv0_W_din<=lb.wdata;
rdrvenv1_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h1)&lb.wren; rdrvenv1_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv1_W_din<=lb.wdata;
rdrvenv2_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h2)&lb.wren; rdrvenv2_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv2_W_din<=lb.wdata;
rdrvenv3_W_we<=(lb.waddr[ADDR_WIDTH-1:RDRVENV_W_ADDRWIDTH]=='h3)&lb.wren; rdrvenv3_W_waddr<=lb.waddr[RDRVENV_W_ADDRWIDTH-1:0]; rdrvenv3_W_din<=lb.wdata;
qdrvenv0_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h12)&lb.wren; qdrvenv0_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv0_W_din<=lb.wdata;
qdrvenv1_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h13)&lb.wren; qdrvenv1_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv1_W_din<=lb.wdata;
qdrvenv2_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h14)&lb.wren; qdrvenv2_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv2_W_din<=lb.wdata;
qdrvenv3_W_we<=(lb.waddr[ADDR_WIDTH-1:QDRVENV_W_ADDRWIDTH]=='h15)&lb.wren; qdrvenv3_W_waddr<=lb.waddr[QDRVENV_W_ADDRWIDTH-1:0]; qdrvenv3_W_din<=lb.wdata;
rdloenv0_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h16)&lb.wren; rdloenv0_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv0_W_din<=lb.wdata;
rdloenv1_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h17)&lb.wren; rdloenv1_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv1_W_din<=lb.wdata;
rdloenv2_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h18)&lb.wren; rdloenv2_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv2_W_din<=lb.wdata;
rdloenv3_W_we<=(lb.waddr[ADDR_WIDTH-1:RDLOENV_W_ADDRWIDTH]=='h19)&lb.wren; rdloenv3_W_waddr<=lb.waddr[RDLOENV_W_ADDRWIDTH-1:0]; rdloenv3_W_din<=lb.wdata;
qdrvfreq0_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h34)&lb.wren; qdrvfreq0_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; qdrvfreq0_W_din<=lb.wdata;
qdrvfreq1_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h35)&lb.wren; qdrvfreq1_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; qdrvfreq1_W_din<=lb.wdata;
qdrvfreq2_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h36)&lb.wren; qdrvfreq2_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; qdrvfreq2_W_din<=lb.wdata;
qdrvfreq3_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h37)&lb.wren; qdrvfreq3_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; qdrvfreq3_W_din<=lb.wdata;
rdlofreq0_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h38)&lb.wren; rdlofreq0_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; rdlofreq0_W_din<=lb.wdata;
rdlofreq1_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h39)&lb.wren; rdlofreq1_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; rdlofreq1_W_din<=lb.wdata;
rdlofreq2_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h3a)&lb.wren; rdlofreq2_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; rdlofreq2_W_din<=lb.wdata;
rdlofreq3_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h3b)&lb.wren; rdlofreq3_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; rdlofreq3_W_din<=lb.wdata;
rdrvfreq0_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h3c)&lb.wren; rdrvfreq0_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; rdrvfreq0_W_din<=lb.wdata;
rdrvfreq1_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h3d)&lb.wren; rdrvfreq1_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; rdrvfreq1_W_din<=lb.wdata;
rdrvfreq2_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h3e)&lb.wren; rdrvfreq2_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; rdrvfreq2_W_din<=lb.wdata;
rdrvfreq3_W_we<=(lb.waddr[ADDR_WIDTH-1:FREQ_W_ADDRWIDTH]=='h3f)&lb.wren; rdrvfreq3_W_waddr<=lb.waddr[FREQ_W_ADDRWIDTH-1:0]; rdrvfreq3_W_din<=lb.wdata;
command0_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='h84)&lb.wren; command0_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command0_W_din<=lb.wdata;
command1_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='h85)&lb.wren; command1_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command1_W_din<=lb.wdata;
command2_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='h86)&lb.wren; command2_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command2_W_din<=lb.wdata;
command3_W_we<=(lb.waddr[ADDR_WIDTH-1:COMMAND_W_ADDRWIDTH]=='h87)&lb.wren; command3_W_waddr<=lb.waddr[COMMAND_W_ADDRWIDTH-1:0]; command3_W_din<=lb.wdata;
 end
reg [ACQBUF_R_ADDRWIDTH-1:0]  acqbuf0_R_raddr=0;reg [ACQBUF_R_DATAWIDTH-1:0] acqbuf0_R_dout=0;assign acqbuf0_R.addr=acqbuf0_R_raddr;
reg [ACQBUF_R_ADDRWIDTH-1:0]  acqbuf1_R_raddr=0;reg [ACQBUF_R_DATAWIDTH-1:0] acqbuf1_R_dout=0;assign acqbuf1_R.addr=acqbuf1_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf0_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf0_R_dout=0;assign accbuf0_R.addr=accbuf0_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf1_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf1_R_dout=0;assign accbuf1_R.addr=accbuf1_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf2_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf2_R_dout=0;assign accbuf2_R.addr=accbuf2_R_raddr;
reg [ACCBUF_R_ADDRWIDTH-1:0]  accbuf3_R_raddr=0;reg [ACCBUF_R_DATAWIDTH-1:0] accbuf3_R_dout=0;assign accbuf3_R.addr=accbuf3_R_raddr;
always @(posedge lb.clk) begin
            acqbuf0_R_raddr<=lb.raddr[ACQBUF_R_ADDRWIDTH-1:0];acqbuf0_R_dout<=acqbuf0_R.dout;
acqbuf1_R_raddr<=lb.raddr[ACQBUF_R_ADDRWIDTH-1:0];acqbuf1_R_dout<=acqbuf1_R.dout;
accbuf0_R_raddr<=lb.raddr[ACQBUF_R_ADDRWIDTH-1:0];accbuf0_R_dout<=accbuf0_R.dout;
accbuf1_R_raddr<=lb.raddr[ACQBUF_R_ADDRWIDTH-1:0];accbuf1_R_dout<=accbuf1_R.dout;
accbuf2_R_raddr<=lb.raddr[ACQBUF_R_ADDRWIDTH-1:0];accbuf2_R_dout<=accbuf2_R.dout;
accbuf3_R_raddr<=lb.raddr[ACQBUF_R_ADDRWIDTH-1:0];accbuf3_R_dout<=accbuf3_R.dout;
end
    always @(posedge lb.clk) begin
        if (lb.rden16[READDELAY]) begin
            casex (lb.raddr16[READDELAY*ADDR_WIDTH-1:(READDELAY-1)*ADDR_WIDTH])
            {(ADDR_WIDTH-ACQBUF_R_ADDRWIDTH)'('h10),{ACQBUF_R_ADDRWIDTH{1'bx}}}: rdata <= acqbuf0_R_dout;
{(ADDR_WIDTH-ACQBUF_R_ADDRWIDTH)'('h11),{ACQBUF_R_ADDRWIDTH{1'bx}}}: rdata <= acqbuf1_R_dout;
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('h80),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf0_R_dout;
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('h81),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf1_R_dout;
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('h82),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf2_R_dout;
{(ADDR_WIDTH-ACCBUF_R_ADDRWIDTH)'('h83),{ACCBUF_R_ADDRWIDTH{1'bx}}}: rdata <= accbuf3_R_dout;
                default:rdata <= 32'hdeadbeef;
            endcase
        end
    end
assign lb.rdata=rdata;
assign lb.rvalid=lb.rden16[READDELAY+1];
assign lb.rvalidlast=lb.rdenlast16[READDELAY+1];
endinterface