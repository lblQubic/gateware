/** Addressing scheme:
* |log2(N_MEAS_UNIT) unit sel |1b sel cmd/wave| ------------ 12b wave addr -------------|
*                              0 for cmd     | 2b resrv | 2b cmd_sel | 8b buffer addr  |
*                              1 for wave
* 
**/

module meas_unit_sim#(
    parameter DATA_WIDTH=32,
    parameter ADC_WORD_WIDTH=64,
    parameter N_MEAS_UNIT=8,
    parameter FPROC_ID_WIDTH=8)(
    input clk,
    input reset,
    input[12+$clog2(N_MEAS_UNIT):0] mem_write_addr,
    input[DATA_WIDTH-1:0] mem_write_data,
    input mem_write_en,
    output[ADC_WORD_WIDTH-1:0] adc_i[N_MEAS_UNIT-1:0],
    output[ADC_WORD_WIDTH-1:0] adc_q[N_MEAS_UNIT-1:0],
    input[0:0] fproc_ready[N_MEAS_UNIT-1:0], //[0:0] is there to force unpacked array (list) in cocotb
    input[DATA_WIDTH-1:0] fproc_data[N_MEAS_UNIT-1:0],
    output[0:0] fproc_enable[N_MEAS_UNIT-1:0],
    output[FPROC_ID_WIDTH-1:0] fproc_id[N_MEAS_UNIT-1:0],
    output[ADC_WORD_WIDTH-1:0] xbase[N_MEAS_UNIT-1:0],
    output[ADC_WORD_WIDTH-1:0] ybase[N_MEAS_UNIT-1:0],
    output resultx[N_MEAS_UNIT-1:0],
    output resulty[N_MEAS_UNIT-1:0]);

    parameter LOG_N_MEAS = $clog2(N_MEAS_UNIT);

    sync_iface sync[N_MEAS_UNIT-1:0];
    fproc_iface #(.FPROC_RESULT_WIDTH(DATA_WIDTH),
                  .FPROC_ID_WIDTH(FPROC_ID_WIDTH)) fproc[N_MEAS_UNIT-1:0];

    genvar i;
    generate 
        for(i = 0; i < N_MEAS_UNIT; i = i + 1) begin
            assign fproc[i].data = fproc_data[i];
            assign fproc[i].ready = fproc_ready[i];
            assign fproc_enable[i] = fproc[i].enable;
            assign fproc_id[i] = fproc[i].id;
            meas_unit unit(.clk(clk), .reset(reset),
                .sync(sync[i]), .fproc(fproc[i]),
                .mem_write_addr(mem_write_addr[12:0]),
                .mem_write_data(mem_write_data),
                .mem_write_en(mem_write_en & (mem_write_addr[12+LOG_N_MEAS:13] == i)),
                .adc_i(adc_i[i]), .adc_q(adc_q[i]), .xbase(xbase[i]), 
                .ybase(ybase[i]), .resultx(resultx[i]), .resulty(resulty[i]));
        end
    endgenerate
        

endmodule
