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
from dsp_drivers import DSPUnitHWConf
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
    hwconf = DSPUnitHWConf()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
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
    #debug_plots(sim_prog, dspunit.dac_i[pulse_unit_ind], dspunit.dac_q[pulse_unit_ind])
    assert check_pulse_output(sim_prog, dspunit.dac_i[pulse_unit_ind], dspunit.dac_q[pulse_unit_ind])

@cocotb.test()
async def syndrome_unit2_11_out_test(dut):
    freq = 100.e6
    phase = np.pi/2
    pulse_length = 40
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)
    ncycles = 200

    pulse_unit_ind = 2

    dspunit = DSPUnitLUTDriver(dut)
    hwconf = DSPUnitHWConf()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.assemblers[pulse_unit_ind].add_jump_fproc(0, 'le', 'loc0', 1)
    prog.add_pulse(pulse_unit_ind, freq, phase, 10, env_i + 1j*env_q)
    prog.add_pulse(pulse_unit_ind, 2*freq, phase, 20, 2*env_i + 1j*2*env_q, label='loc0')
    #prog.add_declare_freq(ph_acc_ind, freq)

    cmd_lists, env_buffers = prog.get_compiled_program()
    meas_input = np.zeros(ncycles)
    meas_input[5] = 1
    meas_ready = np.zeros(ncycles)
    meas_ready[5] = 1
    meas_input[6] = 2
    meas_ready[6] = 2


    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_lists)
    await dspunit.load_env(env_buffers)
    await dspunit.reset()
    cocotb.start_soon(dspunit.load_meas(meas_input, meas_ready))
    await dspunit.monitor_outputs(ncycles)

    #ipdb.set_trace()
    sim_prog = prog.get_sim_program()[pulse_unit_ind]
    sim_prog = sim_prog[-2:]
    #debug_plots(sim_prog, dspunit.dac_i[pulse_unit_ind], dspunit.dac_q[pulse_unit_ind])
    assert check_pulse_output(sim_prog, dspunit.dac_i[pulse_unit_ind], dspunit.dac_q[pulse_unit_ind])

@cocotb.test()
async def syndrome_plots(dut):
    """
    Not a real test, just for making plots of 3-qubit repetition code
    """
    ncycles = 40
    dspunit = DSPUnitLUTDriver(dut)
    hwconf = DSPUnitHWConf()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)

    #initial pulse/ASM code defs
    q0_freq = 300.e6
    q0_phase = 0
    pulse_length = 32
    env_t = np.arange(pulse_length)
    q0_env_i = 0.6*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)
    q0_env_q = 0.5*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)

    q1_freq = 400.e6
    q1_phase = 0
    q1_pulse_length = 32
    q1_env_t = np.arange(pulse_length)
    q1_env_i = 0.5*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)
    q1_env_q = 0.5*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)

    q2_freq = 350.e6
    q2_phase = 0
    q2_pulse_length = 32
    q2_env_t = np.arange(pulse_length)
    q2_env_i = 0.5*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)
    q2_env_q = 0.6*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)

    prog.assemblers[2].add_jump_fproc(0, 'eq', 'no_error', 1)
    prog.add_pulse(2, q0_freq, q0_phase, 8, q0_env_i + 1j*q0_env_q)
    prog.add_pulse(2, q0_freq, q0_phase, 200, np.zeros(10), label='no_error')

    prog.assemblers[3].add_jump_fproc(0, 'eq', 'no_error', 1)
    prog.add_pulse(3, q1_freq, q1_phase, 8, q1_env_i + 1j*q1_env_q)
    prog.add_pulse(3, q1_freq, q1_phase, 200, np.zeros(10), label='no_error')

    prog.assemblers[4].add_jump_fproc(0, 'eq', 'no_error', 1)
    prog.add_pulse(4, q2_freq, q2_phase, 8, q2_env_i + 1j*q2_env_q)
    prog.add_pulse(4, q2_freq, q2_phase, 200, np.zeros(10), label='no_error')

    #ancilla qubits

    prog.assemblers[0].add_jump_fproc(0, 'eq', 'no_reset', 0)
    prog.add_pulse(0, q2_freq, q2_phase, 8, q0_env_i + 1j*q0_env_q)
    prog.add_pulse(0, q2_freq, q2_phase, 200, np.zeros(10), label='no_reset')

    prog.assemblers[1].add_jump_fproc(0, 'eq', 'no_reset', 0)
    prog.add_pulse(1, q2_freq, q2_phase, 8, q0_env_i + 1j*q0_env_q)
    prog.add_pulse(1, q2_freq, q2_phase, 200, np.zeros(10), label='no_reset')
    cmd_lists, env_buffers = prog.get_compiled_program()

    m0 = 1
    m1 = 0

    meas0 = np.zeros(ncycles, dtype=int)
    meas0_valid = np.zeros(ncycles, dtype=int)
    meas1 = np.zeros(ncycles, dtype=int)
    meas1_valid = np.zeros(ncycles, dtype=int)

    meas0[5] = m0
    meas0_valid[5] = 1

    meas1[6] = m1
    meas1_valid[6] = 1

    meas = meas0 + (meas1 << 1)
    meas_valid = meas0_valid + (meas1_valid << 1)

    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_lists)
    await dspunit.load_env(env_buffers)
    await dspunit.reset()
    cocotb.start_soon(dspunit.load_meas(meas, meas_valid))
    await dspunit.monitor_outputs(ncycles)

    dt = np.arange(ncycles*4)
    dac_fullscale = 32768

    #fig = plt.figure(figsize=(4.5,9)) size in poster
    fig = plt.figure(figsize=(7,9))
    ax0 = fig.add_subplot(511)
    ax0.set_ylim((-1.1,1.1))
    ax1 = fig.add_subplot(512)
    ax1.set_ylim((-1.1,1.1))
    ax2 = fig.add_subplot(513)
    ax2.set_ylim((-1.1,1.1))
    ax3 = fig.add_subplot(514)
    ax3.set_ylim((-1.1,1.1))
    ax4 = fig.add_subplot(515)
    ax4.set_ylim((-1.1,1.1))

    ax0.plot(dspunit.dac_i[2]/dac_fullscale, label='DAC I')
    ax0.plot(dspunit.dac_q[2]/dac_fullscale, label='DAC Q')
    ax0.set_ylabel('Q0')
    ax0.legend()
    ax1.plot(dspunit.dac_i[3]/dac_fullscale)
    ax1.plot(dspunit.dac_q[3]/dac_fullscale)
    ax1.set_ylabel('Q1')
    ax2.plot(dspunit.dac_i[4]/dac_fullscale)
    ax2.plot(dspunit.dac_q[4]/dac_fullscale)
    ax2.set_ylabel('Q2')
    ax3.plot(dspunit.dac_i[0]/dac_fullscale)
    ax3.plot(dspunit.dac_q[0]/dac_fullscale)
    ax3.set_ylabel('A0')

    meas0_plt = np.zeros(len(meas0))
    meas1_plt = np.zeros(len(meas1))
    meas0_plt[5:7] = (m0-0.5)*2
    meas1_plt[6:8] = (m1-0.5)*2

    measax3 = ax3.twinx()
    measax3.plot(dt[::4], meas0_plt, ':', color='tab:green')
    measax3.plot(dt[20:25], meas0_plt[5]*np.ones(5), '-', linewidth=1.5, label='measured state', color='tab:green')#, 'x')
    measax3.set_ylim((-1.1,1.1))
    measax3.set_yticks([-1, 0, 1])
    measax3.set_yticklabels(['0', 'idle', '1'], color='tab:green')
    measax3.legend()

    ax4.plot(dspunit.dac_i[1]/dac_fullscale)
    ax4.plot(dspunit.dac_q[1]/dac_fullscale)
    ax4.set_ylabel('A1')
    measax4 = ax4.twinx()
    measax4.plot(dt[::4], meas1_plt, ':', color='tab:green')
    measax4.plot(dt[24:29], meas1_plt[6]*np.ones(5), '-', linewidth=1.5, label='measured state', color='tab:green')#, 'x')
    measax4.set_ylim((-1.1,1.1))
    measax4.set_yticks([-1, 0, 1])
    measax4.set_yticklabels(['0', 'idle', '1'], color='tab:green')
    #measax4.legend()

    fig.supylabel('DAC value (arb)')
    ax4.set_xlabel('Time (ns)')
    plt.show()
