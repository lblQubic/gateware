/** Addressing scheme:
* |log2(N_DSP_UNIT) unit sel |1b sel cmd/wave| ------------ 12b wave addr -------------|
*                              0 for cmd     | 2b resrv | 2b cmd_sel | 8b buffer addr  |
*                              1 for wave
* 
**/

module dsp_unit_sim#(
    parameter DATA_WIDTH=32,
    parameter DAC_WORD_WIDTH=64,
    parameter N_DSP_UNIT=2)(
    input clk,
    input reset,
    input[12+$clog2(N_DSP_UNIT):0] mem_write_addr,
    input[DATA_WIDTH-1:0] mem_write_data,
    input mem_write_en,
    output[DAC_WORD_WIDTH-1:0] dac_i[N_DSP_UNIT-1:0],
    output[DAC_WORD_WIDTH-1:0] dac_q[N_DSP_UNIT-1:0]);

    sync_iface sync[N_DSP_UNIT-1:0];
    fproc_iface fproc[N_DSP_UNIT-1:0];

    genvar i;
    generate 
        for(i = 0; i < N_DSP_UNIT; i = i + 1) begin
            dsp_unit unit(.clk(clk), .reset(reset),
                .sync(sync[i]), .fproc(fproc[i]),
                .mem_write_addr(mem_write_addr),
                .mem_write_data(mem_write_data),
                .mem_write_en(mem_write_en & (mem_write_addr[12+$clog2(N_DSP_UNIT):13] == i)),
                .dac_i(dac_i[i]), .dac_q(dac_q[i]));
        end
    endgenerate
        

endmodule
