// This module "knows" about waveform memory and phases
// Accepts a 64-bit configuration word on cycles when strobe is asserted,
// Then plays back a waveform for the specified number of cycles.
//
// XXX Instruction decoding has hard-coded bitfield widths,
// chosen larger-than-reasonable.
module pulser #(
	parameter aw=10,
	parameter qbits=4,
	parameter tslicel=2
	,parameter DEBUG="true"
) (
(* mark_debug = DEBUG *) 	input clk,
	// Commands supplied by ISA
(* mark_debug = DEBUG *)	input [63:0] command,
(* mark_debug = DEBUG *) 	input strobe,
(* mark_debug = DEBUG *) 	input daczero,
	// In case anyone cares
(* mark_debug = DEBUG *) 	output active,
(* mark_debug = DEBUG *) 	output collision,
	// Outputs drive playback
(* mark_debug = DEBUG *) 	output [qbits-1:0] qsel,
(* mark_debug = DEBUG *) 	output [aw-1:0] mindex,
(* mark_debug = DEBUG *) 	output [16:0] phase,
(* mark_debug = DEBUG *) 	output [16+tslicel:0] ts_phstep,
(* mark_debug = DEBUG *) 	output zero
);

reg [1:0] dest_r=0;
reg [aw-1:0] mindex_r=0;
reg [aw-1:0] length_r=0;
reg [23-tslicel:0] phase_acc=0;
reg [23:0] freq_r=0;
reg active_r=0;
reg zero_r=0;
reg [63:0] local_cmd=0;
reg local_stb=0;
reg local_zero=0;
always @(posedge clk) begin
	local_stb <= strobe;
	if (strobe) begin
		local_cmd <= command;
		local_zero<=daczero;
	end
end

always @(posedge clk) if (local_stb) begin
	dest_r <= local_cmd[63:62];
	mindex_r <= local_cmd[61:50];
	length_r <= local_cmd[49:38];
	phase_acc <= {local_cmd[37:24], {10-tslicel{1'b0}} };
	freq_r <= local_cmd[23:0];
	active_r <= 1;
	zero_r <= local_zero;
end else if (active_r) begin
	mindex_r <= mindex_r + 1;
	length_r <= length_r - 1;
	phase_acc <= phase_acc + freq_r;  // note: tslicel msb of freq_r not used here
	if (length_r == 1) active_r <= 0;
end
assign qsel = (32'b1 << dest_r) & {qbits{active_r}};
assign mindex = mindex_r;
assign phase = phase_acc[23-tslicel:7-tslicel];
assign ts_phstep = freq_r[23:7-tslicel];
assign active = active_r;
assign collision = active_r & strobe;
assign zero=zero_r;
endmodule
