TGT=psbd

all: $(TGT).bit

COMMITNUM = $(shell git log --pretty=oneline --abbrev-commit --abbrev=8|head -1 | awk '{print $$1}')
COMMITMSG = $(shell git log --pretty=oneline --abbrev-commit --abbrev=8|head -1 | awk '{print $$2}')
DATETIME = $(shell date  +'%Y%m%d%H%M%S')
AUTOCOMMITMSG=Makefileautomatedcommit
TOOLS="../../submodules/tools/"
psbd: plps bramwithctrl.tcl
	time vivado -mode batch -source ../src/psbd.tcl
plps: clean pre gitrevision.v
	time vivado -mode batch -source ../src/plps.tcl
pre: makefile.pre	
	make -f makefile.pre

gitcommit:
	python $(TOOLS)/gitauto.py -action autocommit
gitlist:
	python $(TOOLS)/gitauto.py -action list
gitdiff:
	python $(TOOLS)/gitauto.py -action diff
gitlog:
	git reflog --pretty=format:"%h %cd %cn %s"
gitrevision.v: gitcommit
	echo $(COMMITNUM)
	python $(TOOLS)/gitauto.py -action revisionverilog
	cat gitrevision.v
gitpush:
	python submodules/tools/gitauto.py -action push


$(TGT).bit: $(TGT)
	$(eval FNAME:=$(TGT)_$(DATETIME)_$(COMMITNUM))
	echo $(FNAME)
	cp -f vivado_project/$(TGT)/$(TGT).runs/impl_1/$(TGT).bit  ./bits/$(FNAME).bit
	cp -f vivado_project/$(TGT)/$(TGT).xsa ./bits/$(FNAME).xsa
	ln -sf ./bits/$(FNAME).bit $(TGT).bit
	ln -sf ./bits/$(FNAME).xsa $(TGT).xsa
	ls bits/$(FNAME).bit >> bits/bits
	echo $(FNAME)
	- cp -f vivado_project/$(TGT)/$(TGT).runs/impl_1/$(TGT).ltx ./bits/$(FNAME).ltx
	- ln -sf ./bits/$(FNAME).ltx $(TGT).ltx
	- cp -f vivado_project/$(TGT)/$(TGT).runs/impl_1/$(TGT).bin    ./bits/$(FNAME).bin
	printf "\a\a\a"



clean:
	rm -rf vivado_project
	rm -f brambus.tcl bramif_lbportinst.vh bramif_lbport.vh bramif_portinst.vh bramif_port.vh braminit_parainst.vh braminit_para.vh bram_parainst.vh bram_para.vh bram_plsv.vh bram_portinst.vh bram_port.vh bram_range.tcl bram_read.vh bramsiminit.vh bramwithctrl.tcl bram_write.vh gitrevision.v ifbramctrl.sv ifcfgregs.sv ifdspregs.sv ilaauto.tcl ilaauto.v ilaauto.vh iladsp.tcl iladsp.v iladsp.vh reset_para.vh reset_plsv.vh reset_portinst.vh reset_port.vh rfdcif_portinst.vh rfdcif_port.vh rfd_clocking_nlv.log rfdc_plsv.vh rfdc_portinst.vh rfdc_port.vh rfdc_simclk.vh rfdc_wire.vh rfd_us_nlv_ADC.log rfd_us_nlv_DAC.log 
