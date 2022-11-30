import cocotb
import random
import ipdb
import copy
import numpy as np
import matplotlib.pyplot as plt
from cocotb.triggers import Timer, RisingEdge
import distproc.command_gen as cg
import distproc.compiler as cm
from distproc.assembler import MultiUnitAssembler, SingleUnitAssembler, ENV_BITS
from dsp_drivers import MeasDriver, DSPUnitHWConf, generate_clock
import sim_tools as st
from qubitconfig.qchip import QChip
from qubitconfig.wiremap import Wiremap

@cocotb.test()
async def test_compile(dut):
    pass

@cocotb.test()
async def test_elem_prod(dut):
    measunit = MeasDriver(dut)
    freq = 100.e6
    length = 50
    env_i = 0.2*np.ones(length)
    env_q = 0.3*np.ones(length)

    adc_env_i = 0.5
    adc_env_q = 0.5
    adc_length = 500
    adc_freq = 100.e6

    phases = 2*np.pi*1.e-9*np.arange(adc_length)*freq
    adc_signal = adc_env_i*np.cos(phases) - adc_env_q*np.cos(phases)\
            + 1j*(adc_env_q*np.cos(phases) + adc_env_i*np.cos(phases))

    measunit.add_adc_signal(adc_signal)

    hwconf = DSPUnitHWConf()
    prog = SingleUnitAssembler(hwconf)

    prog.add_pulse(freq, np.pi, 2, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()
    ipdb.set_trace()

    cocotb.start_soon(generate_clock(dut))
    await measunit.load_program([cmd_list])
    await measunit.load_env([env_buffer])
    await measunit.run_program(400)

