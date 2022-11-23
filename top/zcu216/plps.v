`timescale 1 ns / 1 ps
module plps #(parameter integer LB_DATAWIDTH	= 32
,parameter integer LB_ADDRWIDTH	= 4
,parameter integer DAC_AXIS_DATAWIDTH= 256
,parameter integer ADC_AXIS_DATAWIDTH=64
,parameter integer BRAMTOHOST_ADDRWIDTH=32
,parameter integer BRAMTOHOST_DATAWIDTH=64
,parameter integer BRAMFROMHOST_ADDRWIDTH=32
,parameter integer BRAMFROMHOST_DATAWIDTH=256
)(
`include "plps_port.vh"
,
`include "fpga_port.vh"
,output clkadc2_300
,output clkadc2_600
);
plpsboard#(.LB_DATAWIDTH(LB_DATAWIDTH),.LB_ADDRWIDTH(LB_ADDRWIDTH),.DAC_AXIS_DATAWIDTH(DAC_AXIS_DATAWIDTH),.BRAMTOHOST_ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.BRAMTOHOST_DATAWIDTH(BRAMTOHOST_DATAWIDTH)
,.BRAMFROMHOST_ADDRWIDTH(BRAMFROMHOST_ADDRWIDTH),.BRAMFROMHOST_DATAWIDTH(BRAMFROMHOST_DATAWIDTH)
)
plpsboard
(
`include "plps_inst.vh"
,`include "fpga_inst.vh"
);

endmodule
