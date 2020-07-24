import time
import serial
from uartlb import c_uartlb
#from matplotlib import pyplot
#from matplotlib.animation import FuncAnimation


if __name__=="__main__":
	import random
	ser=c_uartlb('/dev/ttyUSB0',9600,0)
	ser.write(addr=4,data=1)
	ser.write(addr=21,data=1)
#	ser.write(addr=20,data=1)
#	ser.write(addr=20,data=0)
	ser.write(addr=18,data=0xfcfcabbc)
	print([hex(int(i)) for i in ser.read(addr=19)])
