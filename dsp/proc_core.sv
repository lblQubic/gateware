module proc_core(input clk
,input reset
,input [127:0] command
,output [15:0] cmd_read_addr
,output [3:0] state_dbg
,output [3:0] nextstate_dbg
,output stbend
,output procdone_mon
,output nobusy_mon
,ifelement.proc qdrvelem
,ifelement.proc rdrvelem
,ifelement.proc rdloelem
,fproc_iface.proc fproc
,sync_iface.proc sync
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
//fproc_iface #(.FPROC_ID_WIDTH(8), .FPROC_RESULT_WIDTH(32)) fproc();
//sync_iface #(.SYNC_BARRIER_WIDTH(8)) sync();
pulse_iface #(.PHASE_WIDTH(PHASE_WIDTH), .FREQ_WIDTH(FREQ_WIDTH),.ENV_WORD_WIDTH(ENV_WIDTH), .AMP_WIDTH(AMP_WIDTH), .CFG_WIDTH(CFG_WIDTH)) 
pulseout();

wire procdone;
//fakecore #(.DATA_WIDTH(DATA_WIDTH), .CMD_WIDTH(CMD_WIDTH),.CMD_ADDR_WIDTH(CMD_ADDR_WIDTH), .REG_ADDR_WIDTH(REG_ADDR_WIDTH),.SYNC_BARRIER_WIDTH(SYNC_BARRIER_WIDTH),.CMD_MEM_READ_LATENCY(3))  // try if latency 2 works???
proc #(.DATA_WIDTH(DATA_WIDTH), .CMD_WIDTH(CMD_WIDTH),.CMD_ADDR_WIDTH(CMD_ADDR_WIDTH), .REG_ADDR_WIDTH(REG_ADDR_WIDTH),.SYNC_BARRIER_WIDTH(SYNC_BARRIER_WIDTH),.CMD_MEM_READ_LATENCY(3)) 
dproc(.clk(clk), .reset(reset),.cmd_iface(memif), .fproc(fproc), .sync(sync), .pulseout(pulseout),.done_gate(procdone)
//,.state_dbg(state_dbg),.nextstate_dbg(nextstate_dbg)
);
reg [127:0] command_d=0;
reg [127:0] command_d2=0;
reg [15:0] addr_command=0;
always @(posedge clk) begin
	command_d<=command;
	command_d2<=command_d;
	addr_command<=memif.instr_ptr;
end
assign memif.mem_bus[0]=command;

assign cmd_read_addr=addr_command;

reg noop=0;
reg nobusy=0;
always @(posedge clk) begin
	qdrvelem.reset <= pulseout.reset;
	rdrvelem.reset <= pulseout.reset;
	rdloelem.reset <= pulseout.reset;
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
assign stbend=procdone;//&nobusy;
assign procdone_mon=procdone;
assign nobusy_mon=nobusy;
endmodule
