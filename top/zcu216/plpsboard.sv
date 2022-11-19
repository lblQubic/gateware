`timescale 1 ns / 1 ps
module plpsboard #(parameter integer DATA_WIDTH	= 32
,parameter integer ADDR_WIDTH	= 4
,parameter DEBUG="true"
,parameter DAC_AXIS_DATAWIDTH=256
,parameter ADC_AXIS_DATAWIDTH=128
,parameter integer BRAMREAD_ADDRWIDTH=13
,parameter integer BRAMREAD_DATAWIDTH=64
,parameter integer BRAMWRITE_ADDRWIDTH=32
,parameter integer BRAMWRITE_DATAWIDTH=256
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

plsv #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),.DAC_AXIS_DATAWIDTH(DAC_AXIS_DATAWIDTH),.BRAMREAD_ADDRWIDTH(BRAMREAD_ADDRWIDTH),.BRAMREAD_DATAWIDTH(BRAMREAD_DATAWIDTH),.BRAMWRITE_ADDRWIDTH(BRAMWRITE_ADDRWIDTH),.BRAMWRITE_DATAWIDTH(BRAMWRITE_DATAWIDTH))
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
