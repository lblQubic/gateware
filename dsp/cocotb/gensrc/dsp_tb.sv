module dsp_tb#(
	parameter DEBUG="true" ,parameter integer LB1_DATAWIDTH=32 ,parameter integer LB1_ADDRWIDTH=10 ,parameter integer LB2_DATAWIDTH=32 ,parameter integer LB2_ADDRWIDTH=10 ,parameter integer LB3_DATAWIDTH=32 ,parameter integer LB3_ADDRWIDTH=20 ,parameter integer LB4_DATAWIDTH=32 ,parameter integer LB4_ADDRWIDTH=20 ,parameter integer DAC_AXIS_DATAWIDTH=256 ,parameter integer ADC_AXIS_DATAWIDTH=64 ,parameter integer BRAMADDRWIDTH=32 
	,`include "bram_para.vh")(
    input clk,
    input reset,
    input[511:0] mem_write_data,
    input[11:0] mem_write_addr,
    input[2:0] mem_write_sel, //0 for cmd, 1 for env, 2 for freq
    input mem_write_en,
    input[ADC_AXIS_DATAWIDTH-1:0] adc20,
    input[ADC_AXIS_DATAWIDTH-1:0] adc21,
    output[DAC_AXIS_DATAWIDTH-1:0] dac00,
    output[DAC_AXIS_DATAWIDTH-1:0] dac01);

    ifdspregs regs();
    ifdsp dspif();

    dsp dspmod(.regs(regs), .dspif(dspif));

endmodule



