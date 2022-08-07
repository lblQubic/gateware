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
    ncycles = 50
    dspunit = DSPUnitLUTDriver(dut)
    prog = MultiUnitAssembler(dspunit.n_dspunit)

    #initial pulse/ASM code defs
    q0_freq = 300.e6
    q0_phase = 0
    pulse_length = 32
    env_t = np.arange(pulse_length)
    q0_env_i = 0.4*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)
    q0_env_q = 0.5*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)

    q1_freq = 400.e6
    q1_phase = 0
    q1_pulse_length = 32
    q1_env_t = np.arange(pulse_length)
    q1_env_i = 0.4*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)
    q1_env_q = 0.5*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)

    q2_freq = 450.e6
    q2_phase = 0
    q2_pulse_length = 32
    q2_env_t = np.arange(pulse_length)
    q2_env_i = 0.4*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)
    q2_env_q = 0.5*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)

    prog.assemblers[2].add_jump_fproc(0, 'eq', 'no_error', 1)
    prog.add_pulse(2, q0_freq, q0_phase, 10, q0_env_i + 1j*q0_env_q)
    prog.add_pulse(2, q0_freq, q0_phase, 200, np.zeros(10), label='no_error')

    prog.assemblers[3].add_jump_fproc(0, 'eq', 'no_error', 1)
    prog.add_pulse(3, q1_freq, q1_phase, 10, q1_env_i + 1j*q1_env_q)
    prog.add_pulse(3, q1_freq, q1_phase, 200, np.zeros(10), label='no_error')

    prog.assemblers[4].add_jump_fproc(0, 'eq', 'no_error', 1)
    prog.add_pulse(4, q2_freq, q2_phase, 10, q2_env_i + 1j*q2_env_q)
    prog.add_pulse(4, q2_freq, q2_phase, 200, np.zeros(10), label='no_error')

    #ancilla qubits

    prog.assemblers[0].add_jump_fproc(0, 'eq', 'no_reset', 0)
    prog.add_pulse(0, q2_freq, q2_phase, 10, q0_env_i + 1j*q0_env_q)
    prog.add_pulse(0, q2_freq, q2_phase, 200, np.zeros(10), label='no_reset')

    prog.assemblers[1].add_jump_fproc(0, 'eq', 'no_reset', 0)
    prog.add_pulse(1, q2_freq, q2_phase, 10, q0_env_i + 1j*q0_env_q)
    prog.add_pulse(1, q2_freq, q2_phase, 200, np.zeros(10), label='no_reset')
    cmd_lists, env_buffers = prog.get_compiled_program()

    m0 = 1
    m1 = 1

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

    fig = plt.figure(figsize=(12.5,10))
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

    def meastodac(y):
        return 2*(y-1) + 1
    def dactomeas(m):
        return 0.5*(m-1) + 1
    def format_meas_func(value):
        if value==0:
            return '0'
        elif value==1:
            return'1'
        elif value==0.5:
            return 'idle'

    ax0.plot(dspunit.dac_i[2]/dac_fullscale, label='DAC I')
    ax0.plot(dspunit.dac_q[2]/dac_fullscale, label='DAC Q')
    ax0.legend()
    ax1.plot(dspunit.dac_i[3]/dac_fullscale)
    ax1.plot(dspunit.dac_q[3]/dac_fullscale)
    ax2.plot(dspunit.dac_i[4]/dac_fullscale)
    ax2.plot(dspunit.dac_q[4]/dac_fullscale)
    ax3.plot(dspunit.dac_i[0]/dac_fullscale)
    ax3.plot(dspunit.dac_q[0]/dac_fullscale)

    meas0_plt = np.zeros(len(meas0))
    meas1_plt = np.zeros(len(meas1))
    meas0_plt[5:7] = m0#(m0-0.5)*2
    meas1_plt[6:8] = m1#(m1-0.5)*2
    #ax3.plot(dt[::4], meas0_plt, ':', color='g')
    #ax3.plot(dt[20:25], meas0_plt[5]*np.ones(5), '-', linewidth=3, label='measured state')#, 'x')
    measax3 = ax3.twiny()
    measax3.plot(dt[::4], meas0_plt, ':', color='g')
    measax3.plot(dt[20:25], meas0_plt[5]*np.ones(5), '-', linewidth=3, label='measured state', color='g')#, 'x')
    #measax3 = ax3.secondary_yaxis('right', functions=(dactomeas, meastodac))    
    #measax3.set_major_formatter(plt.FuncFormatter(format_meas_func))

    ax3.legend()
    ax4.plot(dspunit.dac_i[1]/dac_fullscale)
    ax4.plot(dspunit.dac_q[1]/dac_fullscale)
    ax4.plot(dt[::4], meas1_plt, ':', color='g')
    ax4.plot(dt[24:29], meas1_plt[6]*np.ones(5), '-', linewidth=3)#, 'x')
    ax4.set_xlabel('Time (ns)')
    plt.show()
