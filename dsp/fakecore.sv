/*fakecore #(.DATA_WIDTH(DATA_WIDTH), .CMD_WIDTH(CMD_WIDTH),.CMD_ADDR_WIDTH(CMD_ADDR_WIDTH), .REG_ADDR_WIDTH(REG_ADDR_WIDTH),.SYNC_BARRIER_WIDTH(SYNC_BARRIER_WIDTH),.CMD_MEM_READ_LATENCY(5)) 
fakecore(.clk(clk), .reset(reset),.cmd_iface(memif), .fproc(fproc), .sync(sync), .pulseout(pulseout),.done_gate(procdone));
cmd_mem_iface #(.CMD_ADDR_WIDTH(16), .MEM_WIDTH(128), .MEM_TO_CMD(1)) memif();
fproc_iface #(.FPROC_ID_WIDTH(8), .FPROC_RESULT_WIDTH(32)) fproc();
sync_iface #(.SYNC_BARRIER_WIDTH(8)) sync();
pulse_iface #(.PHASE_WIDTH(PHASE_WIDTH), .FREQ_WIDTH(FREQ_WIDTH),.ENV_WORD_WIDTH(ENV_WIDTH), .AMP_WIDTH(AMP_WIDTH), .CFG_WIDTH(CFG_WIDTH)) 
pulseout();
*/
module fakecore#(parameter DATA_WIDTH=32
,parameter CMD_WIDTH=128
,parameter CMD_ADDR_WIDTH=8
,parameter REG_ADDR_WIDTH=4
,parameter SYNC_BARRIER_WIDTH=8
,parameter DAC_SAMPLES_PER_CLK=4
,parameter CMD_MEM_READ_LATENCY=3)(input clk
,input reset
,cmd_mem_iface cmd_iface
,sync_iface.proc sync
,fproc_iface.proc fproc
,pulse_iface.proc pulseout
,output done_gate
//,output [3:0] state_dbg
//,output [3:0] nextstate_dbg
);

parameter PULSE_WRITE_TRIG = 4'b1001;
parameter DONE = 4'b1010;
parameter PULSE_RESET = 4'b1011;

reg [CMD_ADDR_WIDTH-1:0] instr_ptr=0;
assign cmd_iface.instr_ptr=instr_ptr;
wire [CMD_WIDTH-1:0] cmd_read=cmd_iface.cmd_read;

reg pulseout_reset=0;
reg pulseout_cstrobe=0;
reg [3:0] pulseout_cfg;
reg [9:0] pulseout_env_word_start;
reg [9:0] pulseout_env_word_length;
reg [15:0] pulseout_amp;
reg [8:0] pulseout_freq;
reg [16:0] pulseout_phase;
reg done=0;
assign done_gate=done;
reg [4:0] opcodes=0;
reg [31:0] pulse_cmd_time=0;
reg [31:0] qclk_out=0;
enum {IDLE
,RESETDONE
,WAITFORCMDBUF
,PARSECMD
,RESETELEM
,WAITFORTRIGT
,TRIGT
,ENDCIRCUIT
,NEXTCMD
,ERROR
,NSTATE
} state=IDLE,nextstate=IDLE;
//assign state_dbg=state;
//assign nextstate_dbg=nextstate;
reg [7:0] addrgatesr=0;
reg addrgate=0;
reg dummyaddrgatesr=0;
always @(posedge clk) begin
	if (reset) begin
		state <= IDLE;
	end
	else begin
		state <= nextstate;
	end
	{dummyaddrgatesr,addrgatesr}<={addrgatesr,addrgate};
end
always @(*) begin
	if (reset) begin
		nextstate = IDLE;
	end
	else begin
		case (state)
			IDLE: begin
				nextstate=RESETDONE;
			end
			RESETDONE: begin
				nextstate= WAITFORCMDBUF;
			end
			WAITFORCMDBUF: begin
				nextstate= addrgatesr[CMD_MEM_READ_LATENCY] ? PARSECMD : WAITFORCMDBUF;
			end
			PARSECMD: begin
				nextstate= opcodes==PULSE_RESET ? RESETELEM : opcodes==DONE ? ENDCIRCUIT : opcodes==PULSE_WRITE_TRIG ? WAITFORTRIGT : ERROR;
			end
			RESETELEM: begin
				nextstate=NEXTCMD;
			end
			WAITFORTRIGT: begin
				nextstate= pulse_cmd_time== qclk_out ? TRIGT : WAITFORTRIGT ;
			end
			TRIGT: begin
				nextstate= NEXTCMD;
			end
			ENDCIRCUIT: begin
				nextstate= ENDCIRCUIT;
			end
			NEXTCMD: begin
				nextstate= WAITFORCMDBUF;
			end
			ERROR: begin
				nextstate=ERROR;
			end
		endcase
	end
end
always @(posedge clk) begin
	if (reset) begin
		instr_ptr<=0;
		qclk_out<=0;
		done<=0;
		addrgate<=1'b0;
		pulseout_reset<=1'b0;
		pulseout_cstrobe<=1'b0;
	end
	else begin
		case (nextstate)
			IDLE: begin
				addrgate<=1'b0;
				pulseout_reset<=1'b0;
				pulseout_cstrobe<=1'b0;
				done<=1;
			end
			RESETDONE: begin
				addrgate<=1'b1;
				pulseout_reset<=1'b0;
				pulseout_cstrobe<=1'b0;
				done<=0;
			end
			WAITFORCMDBUF: begin
				addrgate<=1'b0;
				pulseout_reset<=1'b0;
				pulseout_cstrobe<=1'b0;
				done<=0;
			end
			PARSECMD: begin
				addrgate<=1'b0;
				pulseout_reset<=1'b0;
				pulseout_cstrobe<=1'b0;
				pulse_cmd_time<=cmd_read[5+:32];
				pulseout_cfg<=cmd_read[37+:4];
				pulseout_amp<=cmd_read[42+:16];
				pulseout_freq<=cmd_read[60+:9];
				pulseout_phase<=cmd_read[71+:17];
				pulseout_env_word_start<=cmd_read[90+:10];
				pulseout_env_word_length<=cmd_read[102+:10];
				opcodes<=cmd_read[127-:4];
				done<=0;
			end
			RESETELEM: begin
				addrgate<=1'b0;
				pulseout_reset<=1'b1;
				pulseout_cstrobe<=1'b0;
				done<=0;
			end
			WAITFORTRIGT: begin
				addrgate<=1'b0;
				pulseout_reset<=1'b0;
				pulseout_cstrobe<=1'b0;
				done<=0;
			end
			TRIGT: begin
				addrgate<=1'b0;
				pulseout_reset<=1'b0;
				pulseout_cstrobe<=1'b1;
				done<=0;
			end
			ENDCIRCUIT: begin
				addrgate<=1'b0;
				pulseout_reset<=1'b0;
				pulseout_cstrobe<=1'b0;
				done<=1'b1;
			end
			NEXTCMD: begin
				instr_ptr<=instr_ptr+1;
				addrgate<=1'b1;
				pulseout_reset<=1'b0;
				pulseout_cstrobe<=1'b0;
				done<=0;
			end
		endcase
		qclk_out<=qclk_out+1;
	end
end

endmodule
