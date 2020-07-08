module qubichw (hw hw,xc7vx485tffg1761pkg fpga);
vc707 vc707(.fpga(fpga),.hw(hw.vc707.hw));
fmc120 fmc1(.fmcpin(hw.vc707.fmc1pin),.fmc120(hw.fmc1.hw));
fmc120 fmc2(.fmcpin(hw.vc707.fmc2pin),.fmc120(hw.fmc2.hw));
endmodule

interface hw();

//`include "vc707.vh"
ivc707 vc707();
ifmc120 fmc1();
ifmc120 fmc2();

/*modport hw(inout fmc_vadj_on_b_ls,phy_mdio,pmbus_alert,pmbus_clk,pmbus_data,user_clock_n,user_clock_p,user_sma_clock_n,user_sma_clock_p,user_sma_gpio_n,user_sma_gpio_p
,input gpio_led_0,gpio_led_1,gpio_led_2,gpio_led_3,gpio_led_4,gpio_led_5,gpio_led_6,gpio_led_7,phy_int,phy_mdc,phy_reset,sgmii_tx_n,sgmii_tx_p,si5324_rst,sm_fan_pwm
,output cpu_reset,fmc1_hpc_gbtclk0_m2c_c_n,fmc1_hpc_gbtclk0_m2c_c_p,fmc1_hpc_gbtclk1_m2c_c_n,fmc1_hpc_gbtclk1_m2c_c_p,fmc2_hpc_gbtclk0_m2c_c_n,fmc2_hpc_gbtclk0_m2c_c_p,fmc2_hpc_gbtclk1_m2c_c_n,fmc2_hpc_gbtclk1_m2c_c_p,gpio_dip_sw0,gpio_dip_sw1,gpio_dip_sw2,gpio_dip_sw3,gpio_dip_sw4,gpio_dip_sw5,gpio_dip_sw6,gpio_dip_sw7,gpio_sw_c,gpio_sw_e,gpio_sw_n,gpio_sw_s,gpio_sw_w,rec_clock_c_n,rec_clock_c_p,rotary_inca,rotary_incb,rotary_push,sgmii_rx_n,sgmii_rx_p,sgmiiclk_q0_n,sgmiiclk_q0_p,si5324_int_alm,si5324_out_c_n,si5324_out_c_p,sm_fan_tach,sma_mgt_refclk_n,sma_mgt_refclk_p,sma_mgt_rx_n,sma_mgt_rx_p,sma_mgt_tx_n,sma_mgt_tx_p,sysclk,VP_0,VN_0
);
modport cfg(inout phy_mdio,user_clock_n,user_clock_p,user_sma_clock_n,user_sma_clock_p,user_sma_gpio_n,user_sma_gpio_p
,input cpu_reset,gpio_dip_sw0,gpio_dip_sw1,gpio_dip_sw2,gpio_dip_sw3,gpio_dip_sw4,gpio_dip_sw5,gpio_dip_sw6,gpio_dip_sw7,gpio_sw_c,gpio_sw_e,gpio_sw_n,gpio_sw_s,gpio_sw_w,rotary_inca,rotary_incb,rotary_push,sgmii_rx_n,sgmii_rx_p,sgmiiclk_q0_n,sgmiiclk_q0_p,sysclk,VP_0,VN_0
,output gpio_led_0,gpio_led_1,gpio_led_2,gpio_led_3,gpio_led_4,gpio_led_5,gpio_led_6,gpio_led_7,phy_int,phy_mdc,phy_reset,sgmii_tx_n,sgmii_tx_p
);
modport sim(
inout fmc_vadj_on_b_ls,phy_mdio,pmbus_alert,pmbus_clk,pmbus_data,user_clock_n,user_clock_p,user_sma_clock_n,user_sma_clock_p,user_sma_gpio_n,user_sma_gpio_p
,output gpio_led_0,gpio_led_1,gpio_led_2,gpio_led_3,gpio_led_4,gpio_led_5,gpio_led_6,gpio_led_7,phy_int,phy_mdc,phy_reset,sgmii_tx_n,sgmii_tx_p,si5324_rst,sm_fan_pwm
,input cpu_reset,fmc1_hpc_gbtclk0_m2c_c_n,fmc1_hpc_gbtclk0_m2c_c_p,fmc1_hpc_gbtclk1_m2c_c_n,fmc1_hpc_gbtclk1_m2c_c_p,fmc2_hpc_gbtclk0_m2c_c_n,fmc2_hpc_gbtclk0_m2c_c_p,fmc2_hpc_gbtclk1_m2c_c_n,fmc2_hpc_gbtclk1_m2c_c_p,gpio_dip_sw0,gpio_dip_sw1,gpio_dip_sw2,gpio_dip_sw3,gpio_dip_sw4,gpio_dip_sw5,gpio_dip_sw6,gpio_dip_sw7,gpio_sw_c,gpio_sw_e,gpio_sw_n,gpio_sw_s,gpio_sw_w,rec_clock_c_n,rec_clock_c_p,rotary_inca,rotary_incb,rotary_push,sgmii_rx_n,sgmii_rx_p,sgmiiclk_q0_n,sgmiiclk_q0_p,si5324_int_alm,si5324_out_c_n,si5324_out_c_p,sm_fan_tach,sma_mgt_refclk_n,sma_mgt_refclk_p,sma_mgt_rx_n,sma_mgt_rx_p,sma_mgt_tx_n,sma_mgt_tx_p,sysclk,VP_0,VN_0
);
*/
endinterface
