`include "xc7vx485tffg1761pkg.vh"
module qubic(xc7vx485tffg1761pkg fpga);
//localparam DEBUG="true";
localparam DEBUG="false";
parameter BAUD=9600;
parameter SIM=0;
hw hw();
localbus#(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32))
localbus();
dsp #(.DEBUG(DEBUG)) dsp();
qubichw qubichw(.hw(hw),.fpga(fpga));
qubichw_config #(.DEBUG(DEBUG),.BAUD(BAUD),.SIM(SIM))qubichw_config(.hw(hw),.lb(localbus.cfg),.dsp(dsp.cfg));
qubicdsp qubicdsp(.dsp(dsp.dsp),.lb(localbus.dsp));
endmodule
