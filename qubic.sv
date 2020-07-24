`include "xc7vx485tffg1761pkg.vh"
//xc7vx485tffg1761pkg #(.USEREFPIN("true")) fpga;
module qubic(xc7vx485tffg1761pkg fpga);
localparam DEBUG="true";
parameter BAUD=9600;
hw hw();
localbus#(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32))
localbus();
dsp #(.DEBUG(DEBUG)) dsp();
qubichw qubichw(.hw(hw),.fpga(fpga));
qubichw_config #(.DEBUG(DEBUG),.BAUD(BAUD))qubichw_config(.hw(hw),.lb(localbus.cfg),.dsp(dsp.cfg));
qubicdsp qubicdsp(.dsp(dsp.dsp),.lb(localbus.dsp));
endmodule
