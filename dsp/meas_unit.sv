/**
* Contains the modules necessary to control a single DAC I/Q pair:
*   - distributed processor core
*   - command buffer memory
*   - element.v -- CORDIC wave generation + envelope memory
*
* Addressing scheme:
* |1b sel cmd/wave| ------------ 12b wave addr -------------|
*   0 for cmd     | 2b resrv | 2b cmd_sel | 8b buffer addr  |
*   1 for wave
*
*   TODO: maybe impose rotation axis 
* 
**/
module meas_unit #(
    parameter CMD_ADDR_WIDTH=8,
    parameter MEM_ADDR_WIDTH=13,
    parameter DATA_WIDTH=32,
    parameter ADC_WORD_WIDTH=64)(
    sync_iface.proc sync,
    fproc_iface.proc fproc,
    input clk,
    input reset,
    input[12:0] mem_write_addr,
    input[DATA_WIDTH-1:0] mem_write_data,
    input mem_write_en,
    input[DAC_WORD_WIDTH-1:0] adc_i,
    input[DAC_WORD_WIDTH-1:0] adc_q,
    output resultx,
    output resulty);

    localparam CMD_MEM_WIDTH = 32;
    localparam MEM_TO_CMD = 4;
    localparam REG_ADDR_WIDTH = 4;
    localparam SYNC_BARRIER_WIDTH = 8;
    localparam ENV_ADDR_WIDTH = 10;
    localparam ENV_DATA_WIDTH = 16;
    localparam FREQ_WIDTH = 24;
    localparam ENV_WIDTH = 24;
    localparam PHASE_WIDTH = 14;

    reg[FREQ_WIDTH-1:0] phase_tref;
    always @(posedge clk) begin
        if(reset)
            phase_tref <= 0;
        else
            phase_tref <= phase_tref + 1;
    end

    //wire declarations
    wire[63:0] cmd_out;
    wire cmd_strobe;
    wire[CMD_ADDR_WIDTH-1:0] cmd_buffer_addr;
    wire[$clog2(MEM_TO_CMD)-1:0] cmd_mem_sel;
    wire[MEM_TO_CMD-1:0] cmd_write_enable;
    wire[FREQ_WIDTH-1:0] freq;
    wire[ENV_WIDTH-1:0] env_word;
    wire[PHASE_WIDTH-1:0] phase;

    //proc side
    cmd_mem_iface #(.CMD_ADDR_WIDTH(CMD_ADDR_WIDTH), .MEM_WIDTH(CMD_MEM_WIDTH), 
        .MEM_TO_CMD(MEM_TO_CMD)) memif();
    proc #(.DATA_WIDTH(DATA_WIDTH), .CMD_WIDTH(CMD_MEM_WIDTH*MEM_TO_CMD), 
        .CMD_ADDR_WIDTH(CMD_ADDR_WIDTH), .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
        .SYNC_BARRIER_WIDTH(SYNC_BARRIER_WIDTH)) dpr(.clk(clk), .reset(reset),
        .phase_tref(phase_tref), .env_word_out(env_word), .freq_out(freq),
        .phase_out(phase), .cmd_iface(memif), .cstrobe_out(cmd_strobe), 
        .fproc(fproc), .sync(sync));
        
    assign cmd_buffer_addr = mem_write_addr[CMD_ADDR_WIDTH-1:0];
    assign cmd_mem_sel = mem_write_addr[CMD_ADDR_WIDTH+$clog2(MEM_TO_CMD)-1:CMD_ADDR_WIDTH];
    //localparam[$clog2(MEM_TO_CMD)-1:0][MEM_TO_CMD-1:0] cmd_mem_inds = {2'b00, 2'b01, 2'b10, 2'b11}; //dirty hack to get around genvar issue...
    genvar i;
    generate 
        for(i = 0; i < MEM_TO_CMD; i = i + 1) begin
            assign cmd_write_enable[i] = (cmd_mem_sel == i[$clog2(MEM_TO_CMD)-1:0]) & (mem_write_addr[MEM_ADDR_WIDTH-1] == 0) 
                                    & mem_write_en;
            cmd_mem #(.CMD_WIDTH(CMD_MEM_WIDTH), .ADDR_WIDTH(CMD_ADDR_WIDTH)) mem(.clk(clk), 
                .write_enable(cmd_write_enable[i]), .cmd_in(mem_write_data), 
                .write_address(cmd_buffer_addr), .read_address(memif.instr_ptr), 
                .cmd_out(memif.mem_bus[i]));
        end
    endgenerate

    //element stuff
    assign cmd_out[61:62-ENV_WIDTH] = env_word;
    assign cmd_out[62-ENV_WIDTH-1:62-ENV_WIDTH-PHASE_WIDTH] = phase;
    assign cmd_out[62-ENV_WIDTH-PHASE_WIDTH-1:62-ENV_WIDTH-PHASE_WIDTH-FREQ_WIDTH] = freq;
    wire[ENV_ADDR_WIDTH-1:0] env_mem_raddr;
    wire[ENV_DATA_WIDTH*2*4-1:0] env_data;
    //TODO: replace hardcoded params below
    aligned_ram #(.DIN_WIDTH(2*ENV_DATA_WIDTH), .N_DIN_TO_DOUT(4), .DOUT_ADDR_WIDTH(ENV_ADDR_WIDTH)) wavemem(.clk(clk), 
        .write_enable(mem_write_en & (mem_write_addr[12] == 1)), .write_data(mem_write_data), 
        .write_addr(mem_write_addr[11:0]), .read_addr(env_mem_raddr), .read_data(env_data));
    element elem(.clk(clk), .command(cmd_out), .cstrobe(cmd_strobe), .active(),
        .collision(), .env_mem_raddr(env_mem_raddr), .env_data_in(env_data), .xout(dac_i), 
        .yout(dac_q), .qsel(), .daczero());


endmodule
