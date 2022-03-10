`define LB_HI 19
`define MIRROR_WIDTH 5
`define ADDR_HIT_MIRROR (lb_addr[`LB_HI:`MIRROR_WIDTH]==0)
`define ADDR_HIT_adc_wfm_len (lb_addr[`LB_HI:0]==0) // dsp_fmc120x2 bitwidth: 0, base_addr: 0
`define ADDR_HIT_bias_dac0 (lb_addr[`LB_HI:0]==1) // dsp_fmc120x2 bitwidth: 0, base_addr: 1
`define ADDR_HIT_bias_dac1 (lb_addr[`LB_HI:0]==2) // dsp_fmc120x2 bitwidth: 0, base_addr: 2
`define ADDR_HIT_dac_buf_flip (lb_addr[`LB_HI:0]==3) // dsp_fmc120x2 bitwidth: 0, base_addr: 3
`define ADDR_HIT_dac_permit (lb_addr[`LB_HI:0]==4) // dsp_fmc120x2 bitwidth: 0, base_addr: 4
`define ADDR_HIT_dac_wfm_len (lb_addr[`LB_HI:0]==5) // dsp_fmc120x2 bitwidth: 0, base_addr: 5
`define ADDR_HIT_dsp_reset (lb_addr[`LB_HI:0]==6) // dsp_fmc120x2 bitwidth: 0, base_addr: 6
`define ADDR_HIT_period_adc (lb_addr[`LB_HI:0]==7) // dsp_fmc120x2 bitwidth: 0, base_addr: 7
`define ADDR_HIT_period_dac0 (lb_addr[`LB_HI:0]==8) // dsp_fmc120x2 bitwidth: 0, base_addr: 8
`define ADDR_HIT_period_dac1 (lb_addr[`LB_HI:0]==9) // dsp_fmc120x2 bitwidth: 0, base_addr: 9
`define ADDR_HIT_period_dac2 (lb_addr[`LB_HI:0]==10) // dsp_fmc120x2 bitwidth: 0, base_addr: 10
`define ADDR_HIT_period_dac3 (lb_addr[`LB_HI:0]==11) // dsp_fmc120x2 bitwidth: 0, base_addr: 11
`define ADDR_HIT_period_dac4 (lb_addr[`LB_HI:0]==12) // dsp_fmc120x2 bitwidth: 0, base_addr: 12
`define ADDR_HIT_period_dac5 (lb_addr[`LB_HI:0]==13) // dsp_fmc120x2 bitwidth: 0, base_addr: 13
`define ADDR_HIT_period_dac6 (lb_addr[`LB_HI:0]==14) // dsp_fmc120x2 bitwidth: 0, base_addr: 14
`define ADDR_HIT_period_dac7 (lb_addr[`LB_HI:0]==15) // dsp_fmc120x2 bitwidth: 0, base_addr: 15
`define ADDR_HIT_period_stream (lb_addr[`LB_HI:0]==16) // dsp_fmc120x2 bitwidth: 0, base_addr: 16
