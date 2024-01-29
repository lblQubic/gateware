`timescale 1 ns / 1 ps 

module state_disc #(parameter STATEDISC_IN_DATAWIDTH = 32, parameter STATEDISC_OUT_DATAWIDTH = 18)(
    ifsd.sd sdif,
    // clk,
    input rst,
    input start_trigger, //==we
    input [(STATEDISC_IN_DATAWIDTH*2)-1:0] accumulated_data,
    output idle,
    output ready,
    output [STATEDISC_OUT_DATAWIDTH-1:0] inference_prob,
    output inference_state,
    output done_trigger
);

// localparam inWidth = 32;
// localparam outWidth = 18;
//Input Signals
// input clk;
// input start_trigger;
// input rst;
// input [(inWidth*2)-1:0] accumulated_data;
// // Output Signals
// output idle;
// output ready;
// output [outWidth-1:0] inference_prob;
// output inference_state;
// output done_trigger;

wire [(STATEDISC_OUT_DATAWIDTH*2)-1:0] normalized_data;
wire NN_startTrigger;

normalizer #(.STATEDISC_IN_DATAWIDTH(STATEDISC_IN_DATAWIDTH), .STATEDISC_OUT_DATAWIDTH(STATEDISC_OUT_DATAWIDTH)) normalizer (
    .sdif(sdif), 
    // .clk(sdif.clk),
    .stb_start(start_trigger),
    .accumulated_input(accumulated_data),
    .normalized_output(normalized_data),
    .NN_startTrigger(NN_startTrigger)
);

nn_model  #(.IN(35),.DS(17)) nn_model(
    .sdif(sdif),
    // .clk(sdif.clk),
    .rst(rst),
    .nn_start(NN_startTrigger),
    .normalized_input(normalized_data),
    .nn_idle(idle),
    .nn_ready(ready),
    .nn_done(done_trigger),
    .state_probability(inference_prob),
    .state(inference_state)
);

initial begin

    $dumpvars(1,ml_interface);
end
endmodule

// interface ifsd #(parameter NDLO=8) //NDLO from dsp.sv; NDLO = NDLO1 (8) + NDLO2 (0)
//     input clk;
//     logic [17:0]weight_bias [0:NDLO-1][0:64];
// 	logic [31:0]normalizer_min [0:NDLO-1][0:1];
//     modport sd(input clk, weight_bias,normalizer_min);
// endinterface //ifsd

interface ifsd 
    (input clk);
    logic [17:0]weight_bias [0:64];
	logic [31:0]normalizer_min [0:1];
    modport sd(input clk, weight_bias,normalizer_min);
endinterface //ifsd