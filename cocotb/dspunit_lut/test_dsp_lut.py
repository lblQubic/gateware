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
async def syndrome_unit2_10_out_test(dut):
    freq = 100.e6
    phase = np.pi/2
    pulse_length = 40
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)
    ncycles = 200

    pulse_unit_ind = 2

    dspunit = DSPUnitLUTDriver(dut)
    prog = MultiUnitAssembler(dspunit.n_dspunit)
    prog.assemblers[pulse_unit_ind].add_jump_fproc(0, 'le', 'loc0', 1)
    prog.add_pulse(pulse_unit_ind, freq, phase, 10, env_i + 1j*env_q)
    prog.add_pulse(pulse_unit_ind, 2*freq, phase, 20, 2*env_i + 1j*2*env_q, label='loc0')
    #prog.add_declare_freq(ph_acc_ind, freq)

    cmd_lists, env_buffers = prog.get_compiled_program()
    meas_input = np.zeros(ncycles)
    meas_input[5] = 1
    meas_ready = np.zeros(ncycles)
    meas_ready[5] = 1
    meas_ready[6] = 2


    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_lists)
    await dspunit.load_env(env_buffers)
    await dspunit.reset()
    cocotb.start_soon(dspunit.load_meas(meas_input, meas_ready))
    await dspunit.monitor_outputs(ncycles)

    #ipdb.set_trace()
    sim_prog = prog.get_sim_program()[pulse_unit_ind]
    sim_prog = [sim_prog[-1]]
    debug_plots(sim_prog, dspunit.dac_i[pulse_unit_ind], dspunit.dac_q[pulse_unit_ind])
    assert check_pulse_output(sim_prog, dspunit.dac_i[pulse_unit_ind], dspunit.dac_q[pulse_unit_ind])
