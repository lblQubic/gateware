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
	mkdir ./bits/$(FNAME)
	cp -f vivado_project/$(TGT)/$(TGT).runs/impl_1/$(TGT).bit  ./bits/$(FNAME)/$(FNAME).bit
	cp -f vivado_project/$(TGT)/$(TGT).xsa ./bits/$(FNAME)/$(FNAME).xsa
	cp -f bram.json dspregs.json rfdc.json cfgregs.json ./bits/$(FNAME)
	ln -sf ./bits/$(FNAME)/$(FNAME).bit $(TGT).bit
	ln -sf ./bits/$(FNAME)/$(FNAME).xsa $(TGT).xsa

	ls bits/$(FNAME)/$(FNAME).bit >> bits/bits
	echo $(FNAME)
	- cp -f vivado_project/$(TGT)/$(TGT).runs/impl_1/$(TGT).ltx ./bits/$(FNAME)/$(FNAME).ltx
	- ln -sf ./bits/$(FNAME)/$(FNAME).ltx $(TGT).ltx
	- cp -f vivado_project/$(TGT)/$(TGT).runs/impl_1/$(TGT).bin    ./bits/$(FNAME)/$(FNAME).bin
	printf "\a";sleep 1; printf "\a"; sleep 1; printf "\a"



clean:
	rm -rf vivado_project
