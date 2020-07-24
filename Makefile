TGT=qubic
SYNTH_SOURCE = $(shell grep -v ".ucf\|.xdc" $(TGT).d)
SYNTH_CONSTR = $(shell grep ".ucf\|.xdc" $(TGT).d)
SIM_SOURCE = $(shell grep -v .xdc $(TGT)_tb.d)
SIM_CONSTR = $(shell grep .xdc $(TGT)_tb.d)
TAR_SOURCE = $(shell cat tar.d)
SIM = ISIM
#SIM = IVERILOG
COMMITNUM = $(shell git log --pretty=oneline --abbrev-commit |head -1 | awk '{print $$1}')
COMMITMSG = $(shell git log --pretty=oneline --abbrev-commit |head -1 | awk '{print $$2}')
DATETIME = $(shell date  +'%Y%m%d%H%M%S')
AUTOCOMMITMSG=Makefileautomatedcommit

all: $(TGT).bit

tar: $(TAR_SOURCE) $(SYNTH_SOURCE) $(SIM_SOURCE) $(SYNTH_CONSTR) $(SIM_CONSTR)
	tar -cvzf $(TGT)_$(DATETIME)_$(COMMITNUM).tar.gz $^

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

fname: FNAME = $(TGT)_$(DATETIME)_$(COMMITNUM)
fname:
	echo $(FNAME)
	sleep 2
	echo $(FNAME)

test:
	echo $(FNAME)

$(TGT).bit: FNAME = $(TGT)_$(DATETIME)_$(COMMITNUM)
$(TGT).bit: $(TGT).tcl $(SYNTH_SOURCE) bitclean gitcommit fname
	echo $(FNAME)
	time vivado -mode batch -source $<
	cp vivado_project/$(TGT).runs/impl_1/$(TGT).bit	./bits/$(FNAME).bit
	cp -f vivado_project/$(TGT).runs/impl_1/$(TGT).ltx ./bits/$(FNAME).ltx
	ln -sf ./bits/$(FNAME).bit $(TGT).bit
	ln -sf ./bits/$(FNAME).ltx $(TGT).ltx
	printf "\a\a\a"
	echo $(FNAME)

TEND=1000ns
$(TGT).fst: $(TGT)_tb.tcl $(SIM_SOURCE) $(SYNTH_SOURCE) simclean
	vivado -mode batch -source $< -tclargs $(TEND)
	vcd2fst -v  ./vivado_project_sim/$(TGT).sim/sim_1/behav/xsim/$(TGT).vcd -f $(TGT).fst
	printf "\a"
	#cp ./vivado_project_sim/gun.sim/sim_1/behav/dump.vcd $(TGT).vcd

#powerup:
#	ipmiutil power -u -N 192.168.1.202 -U ADMIN -P ADMIN
#powerdown:
#	ipmiutil power -d -N 192.168.1.202 -U ADMIN -P ADMIN
#reboot:
#	ipmiutil power -r -N 192.168.1.202 -U ADMIN -P ADMIN

BITS=$(TGT).bit
prog: submodules/tools/prog.tcl
	vivado -mode batch -source $< -tclargs $(BITS)

-include makefile.pre

.PHONY: configromxclean simclean bitclean clean lbclean ilaclean
configromxclean:
	rm -f config_romx.v
simclean:
	rm -f $(TGT).vcd $(TGT)_tb $(TGT)_beh.prj $(TGT)_itb $(TGT)_vcd.cmd isim.wdb
	rm -rf isim
	rm -f isim.log fuse.log  fuseRelaunch.cmd  fuse.xmsgs
	rm -rf vivado_project_sim
bitclean:
	rm -rf vivado_project


clean: simclean bitclean lbclean ilaclean
	rm -f vivado*.jou vivado*.log webtalk*.jou webtalk*.log vivado_pid*.str 
	rm -rf .Xil
