create_ip -name gtwizard_ultrascale -vendor xilinx.com -library ip -version 1.7 -module_name gty_sfp
set_property -dict {
	CONFIG.Component_Name {gty_sfp}
	CONFIG.FREERUN_FREQUENCY {125}
	CONFIG.LOCATE_RX_USER_CLOCKING {CORE}
	CONFIG.LOCATE_TX_USER_CLOCKING {CORE}
	CONFIG.RX_COMMA_ALIGN_WORD {4}
	CONFIG.RX_COMMA_M_ENABLE {true}
	CONFIG.RX_COMMA_P_ENABLE {true}
	CONFIG.RX_DATA_DECODING {8B10B}
	CONFIG.RX_LINE_RATE {10}
	CONFIG.RX_REFCLK_FREQUENCY {500}
	CONFIG.RX_REFCLK_SOURCE {X0Y4 clk1}
	CONFIG.TX_DATA_ENCODING {8B10B}
	CONFIG.TX_LINE_RATE {10}
	CONFIG.TX_REFCLK_FREQUENCY {500}
	CONFIG.TX_REFCLK_SOURCE {X0Y4 clk1}
} [get_ips gty_sfp]