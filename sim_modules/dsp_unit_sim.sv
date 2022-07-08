module dsp_unit_sim#(
    parameter DATA_WIDTH=32,
    parameter DAC_WORD_WIDTH=64)(
    input clk,
    input reset,
    input[12:0] mem_write_addr,
    input[DATA_WIDTH-1:0] mem_write_data,
    input mem_write_en,
    output[DAC_WORD_WIDTH-1:0] dac_i,
    output[DAC_WORD_WIDTH-1:0] dac_q);

    sync_iface sync;
    fproc_iface fproc;

    dsp_unit unit(.clk(clk), .reset(reset),
        .sync(sync), .fproc(fproc),
        .mem_write_addr(mem_write_addr),
        .mem_write_data(mem_write_data),
        .mem_write_en(mem_write_en),
        .dac_i(dac_i), .dac_q(dac_q));

endmodule
