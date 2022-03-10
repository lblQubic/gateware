TGT=vc707_fmc120x2
SYNTH_SOURCE = $(shell grep -v ".ucf\|.xdc" $(TGT).d)
SIM_SOURCE = $(shell grep -v .xdc $(TGT)_tb.d)
SIM = ISIM
#SIM = IVERILOG
COMMITNUM = $(shell git log --pretty=oneline --abbrev-commit |head -1 | awk '{print $$1}')
COMMITMSG = $(shell git log --pretty=oneline --abbrev-commit |head -1 | awk '{print $$2}')
DATETIME = $(shell date  +'%Y%m%d%H%M%S')
AUTOCOMMITMSG=Makefileautomatedcommit

all: $(TGT).vcd
test:
	echo abc\'def '"'$(AUTOCOMMITMSG)'"'
	echo $(COMMITMSG)=$(AUTOCOMMITMSG)
gitcommit: $(filter-out ./config_romx.v, $(SYNTH_SOURCE))
ifeq ($(COMMITMSG),$(AUTOCOMMITMSG))
	echo yes
	git reset --soft HEAD^
	-git commit -a -m $(AUTOCOMMITMSG)
else
	echo no,
	echo $(AUTOCOMMITMSG)
	echo $(COMMITMSG)
	-git commit -a -m $(AUTOCOMMITMSG)
endif

#config_romx.v: ../../hdl_src/dsp_qubit/_autogen/regmap_full.json gitcommit
#	    python ../../submodules/build/build_rom.py -v $@ -j $<

cpbit:
	cp vivado_project1/$(TGT).runs/impl_1/$(TGT).bit	./$(TGT)_$(shell date  +'%Y%m%d%H%M%S')_$(COMMITNUM).bit
	ln -sf ./$(TGT)_$(shell date  +'%Y%m%d%H%M%S')_$(COMMITNUM).bit $(TGT).bit

$(TGT).bit: $(TGT).tcl $(SYNTH_SOURCE) bitclean 
	vivado -mode batch -source $<
	cp vivado_project1/$(TGT).runs/impl_1/$(TGT).bit	./bits/$(TGT)_$(DATETIME)_$(COMMITNUM).bit
	ln -sf ./bits/$(TGT)_$(DATETIME)_$(COMMITNUM).bit $(TGT).bit

BIT=$(TGT).bit
#BOARD=localhost:3121/xilinx_tcf/Digilent/210203A25059A   board in chassis
BOARD=localhost:3121/xilinx_tcf/Digilent/210203A7C343A        # bare board
load: prog.tcl
	vivado -mode batch  -source $< -tclargs $(BIT) $(BOARD)

#$(TGT)_tb: $(TGT)_tb.v $(SYNTH_SOURCE) $(SIM_SOURCE)
#	    iverilog -g2012 -g specify -DSIMULATE -o $@ $(filter %.v, $^) $(filter %.vhd, $^) -I../../submodules/common_hdl -I../../submodules/board_support/llrf46 -I../../apex2/
#
.SECONDEXPANSION:
%_tb: $$(shell grep -v ".ucf\|.xdc" $$*.d) $$(shell grep -v .xdc $$*_tb.d)
	rm -f $@
	iverilog -o $@ $^

%.vcd:%_tb
	vvp $^ +fst


view:$(TGT).vcd
	    gtkwave $(TGT).vcd $(TGT).gtkw

$(TGT).fst: $(TGT)_tb.vcd
	vcd2fst -v $< -f $@

ifeq ($(SIM),ISIM)
TEND=1000ns
$(TGT)_tb.vcd: $(TGT)_tb.tcl $(SIM_SOURCE) $(SYNTH_SOURCE) simclean
	vivado -mode batch -source $< -tclargs $(TEND)
	cp ./vivado_project_sim/$(TGT).sim/sim_1/behav/xsim/$(TGT)_tb.vcd $(TGT)_tb.vcd
	#cp ./vivado_project_sim/gun.sim/sim_1/behav/dump.vcd $(TGT).vcd
else
$(TGT).vcd: $(TGT)_tb
	vvp $^ +vcd
endif

IPMIIP=192.168.0.101
powerup:
	ipmiutil power -u -N $(IPMIIP) -U ADMIN -P ADMIN
powerdown:
	ipmiutil power -d -N $(IPMIIP) -U ADMIN -P ADMIN
reboot:
	ipmiutil power -r -N $(IPMIIP) -U ADMIN -P ADMIN

configromxclean:
	rm -f config_romx.v
simclean:
	rm -f $(TGT).vcd $(TGT)_tb $(TGT)_beh.prj $(TGT)_itb $(TGT)_vcd.cmd isim.wdb
	rm -rf isim
	rm -f isim.log fuse.log  fuseRelaunch.cmd  fuse.xmsgs
	rm -rf vivado_project_sim
bitclean:
	rm -rf vivado_project1


clean: simclean bitclean
	rm -f vivado*.jou vivado*.log
