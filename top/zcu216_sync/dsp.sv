module dsp #(`include "plps_para.vh"	
,`include "bram_para.vh"
,`include "braminit_para.vh"
)(ifdsp.dsp dspif
);


localparam dw=16;
localparam tslice=16;
localparam tslicel=$clog2(tslice);

wire stb=dspif.reset;
reg local_stb=0;

reg [23-tslicel:0] phase_acc={14'h0, {10-tslicel{1'b0}}};
reg [23:0] freq_r=24'h40000;//24'h80000;
reg [15:0] amp=16'h4650;

always @(posedge dspif.clk) begin
    local_stb <= stb;
    if (stb) begin
        amp <= dspif.test_amp;
        freq_r <= dspif.test_freq;
        //phase <= lbreg.test_phase;
    end
end

reg start_d=0;
always @(posedge dspif.clk) begin
    start_d <= dspif.start;
end

always @(posedge dspif.clk) begin
    if (~start_d & dspif.start) phase_acc <= 0;
    else if (dspif.start) phase_acc <= phase_acc + freq_r; // note: tslicel msb of freq_r not used here
end

wire [16:0] phase;
wire [16+tslicel:0] ts_phstep;
assign phase = phase_acc[23-tslicel:7-tslicel];
assign ts_phstep = freq_r[23:7-tslicel];

wire [dw*tslice-1:0] xout;
wire [dw*tslice-1:0] yout;
reg [dw*tslice-1:0] xout_d[0:NDAC-1];
reg [dw*tslice-1:0] yout_d[0:NDAC-1];

// sine wave //
genvar ix;
generate for (ix=0; ix<tslice; ix=ix+1) begin: timeslice
    wire [16:0] l_phase_adj = (ix * ts_phstep) >> tslicel;  // Vivado can do this without a DSP element
    reg [16:0] l_phase=0;
    always @(posedge dspif.clk) l_phase <= phase + l_phase_adj;
    cordicg #(.WIDTH(dw),.NSTAGE(dw),.NORMALIZE(0),.BUFIN(1),.GW(1),.OPIN(1'b0))
    cordic(.clk(dspif.clk), .xin(amp), .yin(16'h0), .phasein(l_phase), .xout(xout[ix*dw+:dw]), .yout(yout[ix*dw+:dw]), .phaseout(),.error(),.gin(1'b1),.gout());
end endgenerate




/*
reg [16:0] dac0=0;
reg [255:0] dac=0;
always @(posedge dspif.clk) begin
	dac0<=dac0+1;
	dac<={16{dac0}};
end
*/
generate
for (genvar i=0;i<NDAC;i=i+1) begin
	assign dspif.dac[i]=xout_d[i];
	always @(posedge dspif.clk) begin
		xout_d[i]<=xout;
		yout_d[i]<=yout;
	end
end
endgenerate

endmodule

