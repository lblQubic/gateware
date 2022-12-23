TGT=psbd

all: $(TGT).bit

COMMITNUM = $(shell git log --pretty=oneline --abbrev-commit --abbrev=8|head -1 | awk '{print $$1}')
COMMITMSG = $(shell git log --pretty=oneline --abbrev-commit --abbrev=8|head -1 | awk '{print $$2}')
DATETIME = $(shell date  +'%Y%m%d%H%M%S')
AUTOCOMMITMSG=Makefileautomatedcommit
TOOLS="../../submodules/tools/"
psbd: plps bramwithctrl.tcl
	time vivado -mode batch -source psbd.tcl
plps: clean pre gitrevision.v
	time vivado -mode batch -source plps.tcl
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


$(TGT).bit: $(TGT).tcl psbd
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
