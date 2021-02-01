import numpy
import time
import argparse
from qubichw import c_qubichw
from matplotlib import pyplot

if __name__=="__main__":
	parser=argparse.ArgumentParser()
	parser.add_argument('-sfptx','--sfptx',help='sfp tx',dest='sfp',type=str,default=None)
	parser.add_argument('-smatx','--smatx',help='sma tx',dest='sma',type=str,default=None)
	clargs=parser.parse_args()
	qubichw=c_qubichw(init=False)
	if 0:
		qubichw.i2cenable()
		qubichw.lbi2c()
		qubichw.write((("sfptxdisable",1),))
		sfpinfo=qubichw.vc707.sfpinfo()
		print(sfpinfo,[chr(i) for i in sfpinfo])

	qubichw.write((("reset_sfp",0),))
	qubichw.write((("reset_smasfp",0),))
	time.sleep(0.5)
	print(('sfptestrx','smasfptestrx'))
	for i in [1]:
		print('sfptxdisable',i)
		qubichw.write((("sfptxdisable",i),))

#	print(clargs)
		regs=[]
		if clargs.sfp is not None:
			regs.append(('sfptesttx',int(clargs.sfp,0)))
		if clargs.sma is not None:
			regs.append(('smasfptesttx',int(clargs.sma,0)))
		if len(regs):
			qubichw.write(regs)
		time.sleep(1)
		print([hex(i) for i in qubichw.read(('sfptestrx','smasfptestrx'))])
