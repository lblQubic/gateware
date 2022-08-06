import cocotb
import random
import ipdb
import copy
import numpy as np
import matplotlib.pyplot as plt
from cocotb.triggers import Timer, RisingEdge
import distproc.command_gen as cg
from distproc.assembler import MultiUnitAssembler, SingleUnitAssembler, ENV_BITS
from drivers import DSPUnitLUTDriver, generate_clock
from sim_tools import check_pulse_output, debug_plots

@cocotb.test()
async def const_pulse_out_test(dut):
    pass
