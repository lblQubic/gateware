import cocotb
import random
import ipdb
import copy
import numpy as np
import matplotlib.pyplot as plt
from cocotb.triggers import Timer, RisingEdge
import distproc.command_gen as cg
from distproc.assembler import MultiUnitAssembler, SingleUnitAssembler, ENV_BITS
from drivers import DSPUnitSimDriver, generate_clock
from sim_tools import check_pulse_output, debug_plots
from hwconfig import HWConfigTest

@cocotb.test()
async def const_pulse_out_test(dut):
    freq = 100.e6
    phase = 0
    tstart = 0
    pulse_length = 40
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)
    hwconf = HWConfigTest()

    dspunit = DSPUnitSimDriver(dut)

    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.add_pulse(0, freq, phase, tstart, env_i + 1j*env_q)
    cmd_lists, env_buffers = prog.get_compiled_program()

    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_lists)
    await dspunit.load_env(env_buffers)
    await dspunit.run_program(200)

    debug_plots(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])

@cocotb.test()
async def two_const_pulse_out_test(dut):
    freq = 100.e6
    phase = 0
    tstart = 5
    pulse_length = 30
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)

    dspunit = DSPUnitSimDriver(dut)

    hwconf = HWConfigTest()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.add_pulse(0, freq, phase, tstart, env_i + 1j*env_q)

    env_i = 0.7*np.ones(pulse_length)
    env_q = 0.5*np.ones(pulse_length)
    prog.add_pulse(0, freq, phase, 50, env_i + 1j*env_q)
    cmd_lists, env_buffers = prog.get_compiled_program() 

    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_lists)
    await dspunit.load_env(env_buffers)
    await dspunit.run_program(200)

    ipdb.set_trace()
    debug_plots(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])

@cocotb.test()
async def two_const_pulse_out_same_env_test(dut):
    freq = 100.e6
    phase = 0
    tstart = 5
    pulse_length = 30
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)
    
    dspunit = DSPUnitSimDriver(dut)

    hwconf = HWConfigTest()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.add_pulse(0, freq, phase, tstart, env_i + 1j*env_q)

    #env_i = 0.7*np.ones(pulse_length)
    #env_q = 0.5*np.ones(pulse_length)
    phase = np.pi/4
    prog.add_pulse(0, freq, phase, 50, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()

    cocotb.start_soon(generate_clock(dut))

    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])

@cocotb.test()
async def two_gauss_pulse(dut):
    freq = 425.e6
    phase = 0
    tstart = 5
    pulse_length = 30
    env_t = np.arange(pulse_length)
    env_i = 0.4*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)
    env_q = 0.3*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)

    dspunit = DSPUnitSimDriver(dut)

    hwconf = HWConfigTest()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.add_pulse(0, freq, phase, tstart, env_i + 1j*env_q)

    #env_i = 0.7*np.ones(pulse_length)
    #env_q = 0.5*np.ones(pulse_length)
    phase = np.pi/4
    prog.add_pulse(0, freq, phase, 50, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()

    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])

@cocotb.test()
async def ramp_pulse(dut):
    freq = 20.e6
    phase = np.pi
    tstart = 40
    pulse_length = 40
    
    env_i = np.arange(pulse_length)/pulse_length
    env_q = 0

    dspunit = DSPUnitSimDriver(dut)

    hwconf = HWConfigTest()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.add_pulse(0, freq, phase, tstart, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()

    cocotb.start_soon(generate_clock(dut))
    await dspunit.flush_cmd_mem()
    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])

@cocotb.test()
async def neg_pulse(dut):
    freq = 100.e6
    phase = 0
    tstart = 0
    pulse_length = 40
    env_i = -0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)

    dspunit = DSPUnitSimDriver(dut)

    hwconf = HWConfigTest()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.add_pulse(0, freq, phase, tstart, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()

    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])

@cocotb.test()
async def two_unit_pulse(dut):
    freq = 100.e6
    phase = np.pi/2
    tstart = 5
    pulse_length = 40
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)

    dspunit = DSPUnitSimDriver(dut)
    hwconf = HWConfigTest()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.add_pulse(0, freq, phase, tstart, env_i + 1j*env_q)

    freq = 200.e6
    tstart = 5
    env_q = 0.4*np.ones(pulse_length)
    prog.add_pulse(1, freq, phase, tstart, env_i + 1j*env_q)
    cmd_lists, env_buffers = prog.get_compiled_program()

    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_lists)
    await dspunit.load_env(env_buffers)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(prog.get_sim_program()[0], dspunit.dac_i[0], dspunit.dac_q[0])

    #debug_plots(prog.get_sim_program()[1], dspunit.dac_i[1], dspunit.dac_q[1])
    assert check_pulse_output(prog.get_sim_program()[1], dspunit.dac_i[1], dspunit.dac_q[1])

@cocotb.test()
async def cond_j_pulse(dut):
    """
    see if we can jump over a pulse
    """
    freq = 100.e6
    phase = np.pi/2
    pulse_length = 40
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)

    dspunit = DSPUnitSimDriver(dut)
    hwconf = HWConfigTest()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.assemblers[0].add_reg_write('r0', 5)
    prog.assemblers[0].add_jump_cond(2, 'le', 'r0', 'loc0')
    prog.add_pulse(0, freq, phase, 10, env_i + 1j*env_q)
    prog.add_pulse(0, 2*freq, phase, 20, 2*env_i + 1j*2*env_q, label='loc0')
    #prog.add_declare_freq(ph_acc_ind, freq)

    cmd_lists, env_buffers = prog.get_compiled_program()

    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_lists)
    await dspunit.load_env(env_buffers)
    await dspunit.run_program(200)

    #ipdb.set_trace()
    sim_prog = prog.get_sim_program()[0]
    sim_prog = [sim_prog[-1]]
    #debug_plots(sim_prog, dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(sim_prog, dspunit.dac_i[0], dspunit.dac_q[0])

@cocotb.test()
async def jump_fproc_true(dut):
    """
    skip over pulse given FPROC = 1 input
    """
    freq = 100.e6
    phase = np.pi/2
    pulse_length = 40
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)
    ncycles = 200

    dspunit = DSPUnitSimDriver(dut)
    hwconf = HWConfigTest()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.assemblers[0].add_jump_fproc(0, 'le', 'loc0')
    prog.add_pulse(0, freq, phase, 10, env_i + 1j*env_q)
    prog.add_pulse(0, 2*freq, phase, 20, 2*env_i + 1j*2*env_q, label='loc0')
    #prog.add_declare_freq(ph_acc_ind, freq)

    cmd_lists, env_buffers = prog.get_compiled_program()
    fproc_input = np.zeros(ncycles)
    fproc_input[5] = 1
    fproc_ready = np.zeros(ncycles)
    fproc_ready[5] = 1

    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_lists)
    await dspunit.load_env(env_buffers)
    await dspunit.reset()
    cocotb.start_soon(dspunit.load_fproc(0, fproc_input, fproc_ready))
    await dspunit.monitor_outputs(ncycles)

    #ipdb.set_trace()
    sim_prog = prog.get_sim_program()[0]
    sim_prog = [sim_prog[-1]]
    #debug_plots(sim_prog, dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(sim_prog, dspunit.dac_i[0], dspunit.dac_q[0])

@cocotb.test()
async def jump_fproc_false(dut):
    """
    DON'T skip over pulse given FPROC = 1 input
    """
    freq = 100.e6
    phase = np.pi/2
    pulse_length = 40
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)
    ncycles = 200

    dspunit = DSPUnitSimDriver(dut)
    hwconf = HWConfigTest()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.assemblers[0].add_jump_fproc(1, 'le', 'loc0')
    prog.add_pulse(0, freq, phase, 10, env_i + 1j*env_q)
    prog.add_pulse(0, 2*freq, phase, 20, 2*env_i + 1j*2*env_q, label='loc0')
    #prog.add_declare_freq(ph_acc_ind, freq)

    cmd_lists, env_buffers = prog.get_compiled_program()
    fproc_input = np.zeros(ncycles)
    fproc_input[5] = 1
    fproc_ready = np.zeros(ncycles)
    fproc_ready[5] = 1

    cocotb.start_soon(generate_clock(dut))
    await dspunit.load_program(cmd_lists)
    await dspunit.load_env(env_buffers)
    await dspunit.reset()
    cocotb.start_soon(dspunit.load_fproc(0, fproc_input, fproc_ready))
    await dspunit.monitor_outputs(ncycles)

    #ipdb.set_trace()
    sim_prog = prog.get_sim_program()[0]
    sim_prog = sim_prog[1:]
    #debug_plots(sim_prog, dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(sim_prog, dspunit.dac_i[0], dspunit.dac_q[0])

@cocotb.test()
async def loop_pulse_test(dut):
    #TODO: when clk increment is -40, cstrobe gets sent at the end
    #  b/c qclk counter will wrap
    freq = 225.e6
    phase = 0
    tstart = 10
    pulse_length = 30
    env_t = np.arange(pulse_length)
    env_i = 0.4*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)
    env_q = 0.3*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)

    n_loop_iters = 5
    qclk_inc = -15

    dspunit = DSPUnitSimDriver(dut)
    hwconf = HWConfigTest()
    prog = MultiUnitAssembler(dspunit.n_dspunit, hwconf)
    prog.assemblers[0].add_reg_write('loop_iters', n_loop_iters)
    prog.assemblers[0].add_reg_write('loop_cnt', 0)
    prog.add_pulse(0, freq, phase, tstart, env_i + 1j*env_q, label='pulse0')
    prog.assemblers[0].add_reg_alu(1, 'add', 'loop_cnt', 'loop_cnt')
    prog.assemblers[0].add_inc_qclk(qclk_inc)
    prog.assemblers[0].add_jump_cond('loop_cnt', 'le', 'loop_iters', 'pulse0')

    cmd_lists, env_buffers = prog.get_compiled_program()
    cocotb.start_soon(generate_clock(dut))
    await dspunit.flush_cmd_mem(30)
    await dspunit.load_program(cmd_lists)
    await dspunit.load_env(env_buffers)
    await dspunit.reset()
    await dspunit.monitor_outputs(300)

    sim_prog = prog.get_sim_program()[0]
    sim_pulse = sim_prog[2]
    sim_prog = []
    for i in range(n_loop_iters):
        ts = tstart - i*qclk_inc
        sim_pulse['start_time'] = ts
        sim_prog.append(copy.deepcopy(sim_pulse))

    debug_plots(sim_prog, dspunit.dac_i[0], dspunit.dac_q[0])
    assert check_pulse_output(sim_prog, dspunit.dac_i[0], dspunit.dac_q[0])
    #plt.plot(dspunit.dac_i[0])
    #plt.plot(dspunit.dac_q[0])
    #plt.show()
