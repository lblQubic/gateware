`timescale 1 ns / 1 ps
module plpsboard #(parameter integer LB_DATAWIDTH	= 32
,parameter integer LB_ADDRWIDTH	= 4
,parameter DEBUG="true"
,parameter DAC_AXIS_DATAWIDTH=256
,parameter ADC_AXIS_DATAWIDTH=128
,parameter integer BRAMTOHOST_ADDRWIDTH=13
,parameter integer BRAMTOHOST_DATAWIDTH=64
,parameter integer BRAMFROMHOST_ADDRWIDTH=32
,parameter integer BRAMFROMHOST_DATAWIDTH=256
,parameter integer ACCBUF_ADDRWIDTH=64
,parameter integer ACCBUF_DATAWIDTH=32
,parameter integer COMMAND_ADDRWIDTH=128
,parameter integer COMMAND_DATAWIDTH=32
)(`include "plps_port.vh"
,
	`include "fpga_port.vh"
,output clkadc2_300
,output clkadc2_600
);




fpga fpga();
`include "fpga_via.vh"

hwif hw();
board board(.fpga(fpga),.hw(hw.hw));

plsv #(.LB_DATAWIDTH(LB_DATAWIDTH),.LB_ADDRWIDTH(LB_ADDRWIDTH),.DAC_AXIS_DATAWIDTH(DAC_AXIS_DATAWIDTH),.ADC_AXIS_DATAWIDTH(ADC_AXIS_DATAWIDTH),.BRAMTOHOST_ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.BRAMTOHOST_DATAWIDTH(BRAMTOHOST_DATAWIDTH),.BRAMFROMHOST_ADDRWIDTH(BRAMFROMHOST_ADDRWIDTH),.BRAMFROMHOST_DATAWIDTH(BRAMFROMHOST_DATAWIDTH),.ACCBUF_DATAWIDTH(ACCBUF_DATAWIDTH),.ACCBUF_ADDRWIDTH(ACCBUF_ADDRWIDTH),.COMMAND_DATAWIDTH(COMMAND_DATAWIDTH),.COMMAND_ADDRWIDTH(COMMAND_ADDRWIDTH))
plsv 
(	`include "plps_inst.vh"
,.hw(hw)
);

reg [7:0] resetcnt=100;
always @(posedge clk_adc2) begin
	if (|resetcnt) begin
		resetcnt<=resetcnt-1;
	end
end

wire clkadc2_mmcm_fb;
wire clkadc2_mmcm_out0;
wire clkadc2_mmcm_out1;
MMCME4_ADV#(.CLKIN1_PERIOD(3.333)
,.CLKFBOUT_MULT_F(4.000)
,.CLKFBOUT_PHASE(0.000)
,.CLKFBOUT_USE_FINE_PS("FALSE")
,.CLKOUT0_DIVIDE_F(4.000)
,.CLKOUT0_PHASE(0.000)
,.CLKOUT0_DUTY_CYCLE(0.500)
,.CLKOUT0_USE_FINE_PS("FALSE")
,.CLKOUT1_DIVIDE(2)
,.CLKOUT1_PHASE(0.000)
,.CLKOUT1_DUTY_CYCLE(0.500)
,.CLKOUT1_USE_FINE_PS("FALSE")
)clkadc2_mmcm(.PWRDWN(1'b0)
,.CLKIN1(clk_adc2)
,.RST((~aresetn)|(|resetcnt))
,.CLKIN2(1'b0)
,.CLKINSEL(1'b1)
,.CLKFBIN(clkadc2_mmcm_fb)
,.CLKFBOUT(clkadc2_mmcm_fb)
,.CLKOUT0(clkadc2_mmcm_out0)
,.CLKOUT1(clkadc2_mmcm_out1)
,.LOCKED(clkadc2_mmcm_locked)
,.DADDR(7'h0),.DCLK(1'b0),.DEN(1'b0),.DI(16'h0),.DWE(1'b0),.CDDCREQ(1'b0),.PSCLK(1'b0),.PSEN(1'b0),.PSINCDEC(1'b0)
);

BUFG clkout1_buf
(.I(clkadc2_mmcm_out0)
,.O(clkadc2_300));


BUFG clkout2_buf
(.I(clkadc2_mmcm_out1)
,.O(clkadc2_600));
endmodule
