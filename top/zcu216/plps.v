`timescale 1 ns / 1 ps
module plps #(parameter integer DATA_WIDTH	= 32
,parameter integer ADDR_WIDTH	= 4
,parameter integer DAC_AXIS_DATAWIDTH= 256
,parameter integer ADC_AXIS_DATAWIDTH=64
,parameter integer BRAMREAD_ADDRWIDTH=32
,parameter integer BRAMREAD_DATAWIDTH=64
,parameter integer BRAMWRITE_ADDRWIDTH=32
,parameter integer BRAMWRITE_DATAWIDTH=256
)(
`include "plps_port.vh"
,
`include "fpga_port.vh"
);
plpsboard#(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),.DAC_AXIS_DATAWIDTH(DAC_AXIS_DATAWIDTH),.BRAMREAD_ADDRWIDTH(BRAMREAD_ADDRWIDTH),.BRAMREAD_DATAWIDTH(BRAMREAD_DATAWIDTH)
,.BRAMWRITE_ADDRWIDTH(BRAMWRITE_ADDRWIDTH),.BRAMWRITE_DATAWIDTH(BRAMWRITE_DATAWIDTH)
)
plpsboard
(
`include "plps_inst.vh"
,`include "fpga_inst.vh"
);

endmodule
