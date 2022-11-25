`timescale 1 ns / 1 ps
module plps #(
`include "plps_para.vh"
)(
`include "plps_port.vh"
,`include "fpga_port.vh"
,output clkadc2_300  // in the plps_inst, but not in the plps_port, because change direction
,output clkadc2_600
);
plpsboard#(
`include "plps_parainst.vh"
)
plpsboard
(
`include "plps_portinst.vh"
,`include "fpga_inst.vh"
);

endmodule
