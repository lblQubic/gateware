include ../../dir_list.mk
XILINX_TOOL = VIVADO
DSP_FLAVOR = 7
DAUGHTER = fmc120x2
BIT_ :=  $(HARDWARE)_$(DAUGHTER).bit
all: $(BIT_)

.PHONY: all program_flash

vpath %.xdc $(BOARD_SUPPORT_DIR)/$(HARDWARE)

IP_NAME = lbl_mac_sgmii dsp_qubit bsp_fmc120
SUB_IP_DIR = $(IP_NAME:%=$(HDL_SRC_DIR)/%)
SUB_IP_DIR += $(PICORV32SOC_DIR)/project/vc707_fmc120
.SECONDARY: $(IP_NAME:%=$(HDL_SRC_DIR)/%/$(IPX_DIR)/component.xml)

$(DEPDIR)/%_ip_bit.d: $(HDL_SRC_DIR)/%/$(IPX_DIR)/component.xml
	mkdir -p $(DEPDIR); (printf "$(BIT_) $@: "; cat $<) > $@

$(HDL_SRC_DIR)/%/$(IPX_DIR)/component.xml: $(HDL_SRC_DIR)/%
	echo "Making IP: $* ..."; \
	make -C $(HDL_SRC_DIR)/$*

IP_BIT_D = $(IP_NAME:%=$(DEPDIR)/%_ip_bit.d)
IP_BIT_D += $(DEPDIR)/picorv32soc_ip_bit.d
IP_TCL = ./xilinx_ip/gtwizard_0.tcl
IP_TCL += ../../hdl_src/bsp_fmc120/jesd204_ads54j60.tcl  ../../hdl_src/bsp_fmc120/jesd204_dac39j84.tcl  ../../hdl_src/bsp_fmc120/jesd204_phy_8lane.tcl

vpath %.v $(PICORV32SOC_DIR)/gateware
PICORV32SOC_SRC = picorv32.v uart_fifo_pack.v uart_rx.v uart_tx.v mpack.v munpack.v pico_pack.v
PICORV32SOC_SRC += stream_fifo.v shortfifo.v
PICORV32SOC_SRC += memory_pack.v sfr_pack.v gpio_pack.v gpioz_pack.v lb_bridge.v lb_merge.v lb_reading.v
PICORV32SOC_SRC += $(BOARD_SUPPORT_DIR)/$(HARDWARE)/vc707_clocks.v
PICORV32SOC_SRC += $(PICORV32SOC_DIR)/project/vc707_fmc120/system.v
PICORV32SOC_SRC += $(PICORV32SOC_DIR)/project/vc707_fmc120/system32.hex

$(DEPDIR)/picorv32soc_ip_bit.d: $(PICORV32SOC_SRC)
	mkdir -p $(DEPDIR); (printf "$(BIT_) $@: $^") > $@

$(BIT_): $(IP_TCL) system_imp.xdc

fmc120_fmc1_dp.xdc: $(BOARD_SUPPORT_DIR)/fmc120/pinmap.txt
	python $(BOARD_SUPPORT_DIR)/fmc120/gen_fmc_dp.py --fmc1 -i $< -o $@

fmc120_fmc2_dp.xdc: $(BOARD_SUPPORT_DIR)/fmc120/pinmap.txt
	python $(BOARD_SUPPORT_DIR)/fmc120/gen_fmc_dp.py --fmc2 -i $< -o $@

system_top.xdc: system_timing.xdc base.xdc sgmii.xdc $(BOARD_SUPPORT_DIR)/fmc120/fmc120.xdc fmc120_fmc1_dp.xdc fmc120_fmc2_dp.xdc
	cat $^ > $@

$(PICORV32SOC_DIR)/project/vc707_fmc120/system32.hex:
	$(MAKE) -C $(PICORV32SOC_DIR)/project/vc707_fmc120 clean system32.hex

#JTAG_DEV = JtagSmt1
JTAG_INDEX = 2
JTAG_DEV = VC707
.PHONY: system_config

system_config: $(BIT_)
	djtgcfg -d $(JTAG_DEV) prog -i $(JTAG_INDEX) -f $<

program_flash: $(HARDWARE)_$(DAUGHTER)_bpi.mcs
	$(VIVADO_CMD) -source ./program_bpi.tcl -tclargs $< $(JTAG_INDEX)

include $(BUILD_DIR)/top_rules.mk
MEM_SIZE = 24576

ifeq (,$(MAKECMDGOALS))
    -include $(IP_BIT_D)
endif


../../hdl_src/dsp_qubit/_autogen/addr_map_dsp_fmc120x2.vh:
	make -C  ../../hdl_src/dsp_qubit/ _autogen/addr_map_dsp_fmc120x2.vh
../../hdl_src/dsp_qubit/_autogen/config_romx.v:
	make -C ../../hdl_src/dsp_qubit/ _autogen/config_romx.v
../../hdl_src/dsp_qubit/_autogen/dsp_fmc120x2_auto.vh:
	make -C ../../hdl_src/dsp_qubit/ _autogen/dsp_fmc120x2_auto.vh
../../hdl_src/lbl_mac_sgmii/aggregate.v:
	make -C ../../hdl_src/lbl_mac_sgmii/ aggregate.v crc8e_guts.vh
../../hdl_src/lbl_mac_sgmii/crc8e_guts.vh:
	make -C ../../hdl_src/lbl_mac_sgmii/ crc8e_guts.vh
SYNTH_SOURCE= $(shell grep -v ".ucf\|xdc" sv707.d)
sv707: sv707.tcl sv707.d system_top.xdc $(SYNTH_SOURCE)
	vivado -mode batch -source sv707.tcl

CLEAN += system_top.xdc $(BIT_) $(IP_BIT_D) fmc120_fmc1_dp.xdc fmc120_fmc2_dp.xdc
CLEAN_DIRS += _xilinx .Xil

clean:
	rm -f $(CLEAN)
	rm -rf $(CLEAN_DIRS)
	@for d in $(SUB_IP_DIR); do \
	    $(MAKE) -C $$d clean; \
	done;
