module element #(
	parameter tslice=4,
	parameter qbits=4,
	parameter aw=10,
	parameter dw=16,
	// Don't override these
	parameter tslicel=$clog2(tslice),
	parameter qbitl=$clog2(qbits)
	,parameter DEBUG="true"
) (
	input clk,
	// passed through to pulser module
	input [63:0] command,
	input cstrobe,
	output active,
	output collision,
	// write access to waveform (envelope) memory
	input [aw+tslicel-1:0] waddr,
	input [2*dw-1:0] wdata,
	input wstrobe,
	// output to summing matrix
	output [dw*tslice-1:0] xout,
	output [dw*tslice-1:0] yout,
	output [qbits-1:0] qsel
	,input daczero
);

wire [qbits-1:0] qseli;
wire [aw-1:0] mindex;
wire [16:0] phase;
wire active_el;
wire [16+tslicel:0] ts_phstep;  // read as "timeslice phase step"
pulser #(.aw(aw), .qbits(qbits), .tslicel(tslicel)) pulser(.clk(clk),
	.command(command), .strobe(cstrobe), .active(active_el), .collision(collision),
	.qsel(qseli), .mindex(mindex), .phase(phase), .ts_phstep(ts_phstep)
	,.daczero(daczero),.zero(zero)
);

reg_delay #(.dw(1),.len(19)) delayactive(.clk(clk),.din(active_el),.dout(active),.gate(1'b1));

wire [aw-1:0] waddr_h = waddr[aw+tslicel-1:tslicel];
// Stupid avoidance of illegal Verilog zero-length array in the case tslice==1.
// waddr_l is one bit wider than otherwise needed.
wire [tslicel:0] waddr_l;
generate if (tslicel > 0) assign waddr_l = waddr[tslicel-1:0];
else assign waddr_l = 0;
endgenerate

wire [dw*tslice-1:0] xout_w;
wire [dw*tslice-1:0] yout_w;
reg [dw*tslice-1:0] xout_r=0;
reg [dw*tslice-1:0] yout_r=0;

genvar ix;
generate for (ix=0; ix<tslice; ix=ix+1) begin: timeslice
	// Write-path pipeline step, localized copy of shared bus
	wire waddr_hit = waddr_l == ix;
	reg wstrobe1=0;
	reg [2*dw-1:0] memin=0;
	always @(posedge clk) begin
		wstrobe1 <= 0;
		if (wstrobe & waddr_hit) begin
			wstrobe1 <= 1;
			memin <= wdata;
		end
	end
	// First real pipeline cycle: memory lookup, phase adjust
	wire [2*dw-1:0] memout;
	dpram #(.aw(aw), .dw(2*dw)) waves(.clka(clk), .clkb(clk),
		.addra(waddr_h), .dina(wdata), .wena(wstrobe1),
		.addrb(mindex), .doutb(memout)
	);
	wire signed [dw-1:0] wave_i = zero ? 0 : memout[dw-1:0];
	wire signed [dw-1:0] wave_q = zero ? 0 : memout[2*dw-1:dw];
	wire [16:0] l_phase_adj = (ix * ts_phstep) >> tslicel;  // Vivado can do this without a DSP element
	reg [16:0] l_phase=0;
	always @(posedge clk) l_phase <= phase + l_phase_adj;
	// Second and following pipeline cycles in CORDIC
	cordicg #(.width(dw)) cordic(.clk(clk), .opin(2'b0),
		.xin(wave_i), .yin(wave_q), .phasein(l_phase),
		.xout(xout_w[ix*dw+:dw]), .yout(yout_w[ix*dw+:dw])
	);
end endgenerate
always @(posedge clk) begin
	xout_r<=xout_w;
	yout_r<=yout_w;
end
assign xout=active ? xout_r : 0;
assign yout=active ? yout_r : 0;
// synchronize control with data
// keep an eye on this, and adjust delay as needed based on simulation
reg_delay #(.dw(qbits), .len(19)) ctlp(.clk(clk),
	.gate(1'b1), .din(qseli), .dout(qsel));

endmodule
