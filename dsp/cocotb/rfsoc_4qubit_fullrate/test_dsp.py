import cocotb
from cocotb.triggers import Timer, RisingEdge
import numpy as np
import matplotlib.pyplot as plt
import ipdb
import dsp_drivers as dsp
from hwconfig import RFSoCElementCfg
import distproc.assembler as asm
import distproc.compiler as cm
import sim_tools as st
import qubitconfig.qchip as qc
import distproc.hwconfig as hw


@cocotb.test()
async def test_const_pulse(dut):
    freq = 100.e6
    phase = 0
    tstart = 8
    pulse_length = 100
    amp = 0.9
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)
    elemcfg = RFSoCElementCfg()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
    prog.add_phase_reset()
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 0)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.run_program(500)
    dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
    plt.plot(dspunit.dac_out[0])
    plt.plot(dacout_sim)
    plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])


@cocotb.test()
async def test_ramp_pulse(dut):
    """
    Using a freq that is harmonic of FPGA clock period, so
    cordic phase acc doesn't matter
    """
    freq = 2500.e6
    phase = 0
    tstart = 10
    pulse_length = 1000
    amp = 0.9
    env_i = np.arange(pulse_length)/pulse_length
    env_q = np.zeros(pulse_length)/pulse_length
    elemcfg = RFSoCElementCfg()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
    prog.add_phase_reset()
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 0)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)

    await dspunit.run_program(500)
    dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
    #plt.plot(dspunit.dac_out[0])
    #plt.plot(dacout_sim)
    #plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

@cocotb.test()
async def test_consecutive_id_ramp_pulse(dut):
    elemcfg = RFSoCElementCfg()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
    prog.add_phase_reset()

    pulse_length = 92
    env_i = np.arange(pulse_length)**2/pulse_length**2
    env_q = 0.3*np.arange(pulse_length)/pulse_length
    prog.add_pulse(freq=0.85e9, phase=0, amp=0.9, start_time=50, env=env_i + 1j*env_q, elem_ind=0)

    pulse_length = 92
    env_i = np.arange(pulse_length)**2/pulse_length**2
    env_q = 0.3*np.arange(pulse_length)/pulse_length
    prog.add_pulse(freq=0.85e9, phase=0, amp=0.9, start_time=100, env=env_i + 1j*env_q, elem_ind=0)

    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = sim_prog[1:3]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)

    await dspunit.run_program(500)
    dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
    #plt.plot(dspunit.dac_out[0])
    #plt.plot(dacout_sim)
    #plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

@cocotb.test()
async def test_consecutive_ramp_pulse(dut):
    elemcfg = RFSoCElementCfg()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
    prog.add_phase_reset()

    pulse_length = 100
    env_i = np.arange(pulse_length)/pulse_length
    env_q = 0.5*np.arange(pulse_length)/pulse_length
    prog.add_pulse(freq=1.5e9, phase=0, amp=0.9, start_time=50, env=env_i + 1j*env_q, elem_ind=0)

    pulse_length = 92
    env_i = np.arange(pulse_length)**2/pulse_length**2
    env_q = 0.3*np.arange(pulse_length)/pulse_length
    prog.add_pulse(freq=0.85e9, phase=np.pi/4, amp=0.8, start_time=110, env=env_i + 1j*env_q, elem_ind=0)

    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = sim_prog[1:3]
    #pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)

    await dspunit.run_program(500)
    dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
    #plt.plot(dspunit.dac_out[0])
    #plt.plot(dacout_sim)
    #plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

@cocotb.test()
async def test_qdrv_initphase_ramp(dut):
    freq = 347.e6
    phase = np.pi/8
    tstart = 10
    pulse_length = 1000
    amp = 0.9
    env_i = np.arange(pulse_length)/pulse_length
    env_q = np.zeros(pulse_length)/pulse_length
    elemcfg = RFSoCElementCfg()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
    prog.add_phase_reset()
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 0)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)

    await dspunit.run_program(500)
    dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
    #plt.plot(dspunit.dac_out[0])
    #plt.plot(dacout_sim)
    #plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

@cocotb.test()
async def test_rdrv_pulse(dut):
    freq = 347.e6
    phase = np.pi/8
    tstart = 10
    pulse_length = 1000
    amp = 0.9
    env_i = np.arange(pulse_length)/pulse_length
    env_q = np.zeros(pulse_length)/pulse_length
    elemcfg = RFSoCElementCfg(interp_ratio=16)

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
    prog.add_phase_reset()
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 1)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)

    await dspunit.run_program(5000)
    dacout_sim = st.generate_sim_dacout(pulse_seq, 16, extra_delay=2, interp_ratio=16)
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[3])

@cocotb.test()
async def test_adc_lb(dut):
    freq = 347.e6
    phase = np.pi/8
    tstart = 10
    pulse_length = 100
    amp = 0.9
    env_i = 0.2*np.ones(pulse_length)
    env_q = np.zeros(pulse_length)

    dacelemcfg = RFSoCElementCfg(16)
    adcelemcfg = RFSoCElementCfg(4)

    adc_fullscale = 2**15-1

    dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
    adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(pulse_length) + phase)
    adc_signal[-1] = 0

    prog = asm.SingleCoreAssembler([dacelemcfg, dacelemcfg, adcelemcfg])
    prog.add_phase_reset()
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 2)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
    await dspunit.load_env_buffer(env_buffers[2], 2, 0)
    await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)

    cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 0))
    await dspunit.run_program(1000)

    acq_buf = await dspunit.read_acq_buf(pulse_length+tstart+1000, 0)
    
    plt.plot(acq_buf)
    plt.plot(adc_signal)
    plt.show()

@cocotb.test()
async def test_accbuf(dut):
    freq = 347.e6
    phase = np.pi/8
    tstart = 10
    pulse_length = 100
    amp = 0.9
    env_i = 0.2*np.ones(pulse_length)
    env_q = np.zeros(pulse_length)

    qdrvelemcfg = RFSoCElementCfg(16)
    rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
    rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)

    adc_fullscale = 2**15-1

    dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
    adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(pulse_length) + phase)
    adc_signal[-1] = 0

    prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
    prog.add_phase_reset()
    #prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 1)
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 2)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
    await dspunit.load_env_buffer(env_buffers[2], 2, 0)
    await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)

    cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 0))
    await dspunit.run_program(2500, nshots=5)
    acc_buf0 = await dspunit.read_acc_buf(3)

    prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
    prog.add_phase_reset()
    #prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 1)
    prog.add_pulse(freq, phase + np.pi/2, amp, tstart, env_i + 1j*env_q, 2)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    #cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
    await dspunit.load_env_buffer(env_buffers[2], 2, 0)
    await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)

    cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 0))
    await dspunit.run_program(500)
    acc_buf1 = await dspunit.read_acc_buf(3)
    print(acc_buf0, acc_buf1)
    
@cocotb.test()
async def test_acc_sweep(dut):
    freq = 347.e6
    phase = np.pi/8
    tstart = 20
    pulse_length = 200
    amp = 0.9
    env_i = 0.2*np.ones(pulse_length)
    env_q = np.zeros(pulse_length)
    niters = 100

    qdrvelemcfg = RFSoCElementCfg(16)
    rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
    rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)

    adc_fullscale = 2**15-1

    dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
    adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(40000) + phase)
    adc_signal[-1] = 0

    prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
    prog.add_phase_reset()
    prog.add_reg_write('n_iters', niters)
    prog.add_reg_write('i', 0)
    prog.add_reg_write('phase', 0, dtype=('phase', 2))
    prog.add_pulse(freq, 'phase', amp, tstart, env_i + 1j*env_q, 2, label='PULSE')
    prog.add_alu_cmd('inc_qclk', -(pulse_length + tstart), 'add')
    prog.add_alu_cmd('reg_alu', 1, 'add', 'i', 'i')
    prog.add_alu_cmd('reg_alu', 2*np.pi/niters, 'add', 'phase', 'phase')
    prog.add_alu_cmd('jump_cond', 'i', 'le', 'n_iters', jump_label='PULSE')
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
    await dspunit.load_env_buffer(env_buffers[2], 2, 0)
    await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)

    cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 0))
    await dspunit.run_program(10000)
    acc_buf = await dspunit.read_acc_buf(100)
    plt.plot(np.real(acc_buf), np.imag(acc_buf), '.')
    plt.show()

#@cocotb.test()
#async def test_vna(dut):
#    fr = 6.555e9
#    f0 = fr-3e6
#    f1 = fr+3e6
#    nfreq = 512
#    freqs = np.linspace(f0, f1, nfreq)
#    rdlo_delay = 100
#    rdrv_amp = 0.25
#    pulse_length = 2000 #length in samples
#    rdrv_plength = pulse_length #env size, divide by 16 b/c interpolation
#    rdlo_plength = rdrv_plength
#    
#    vna_prog = [{'op': 'declare_freq', 'freq': f, 'elem_ind': 1} for f in freqs]
#    vna_prog.extend([{'op':'declare_freq', 'freq': f, 'elem_ind': 2} for f in freqs])
#    vna_prog.append({'op': 'phase_reset'})
#    vna_prog.append({'op': 'reg_write', 'name': 'freq', 'value': 0})
#    vna_prog.append({'op': 'reg_write', 'name': 'i', 'value': 0})
#    vna_prog.append({'op': 'reg_write', 'name': 'niters', 'value': nfreq})
#    
#    vna_prog.append({'op': 'pulse', 'freq': 'freq', 'env': np.ones(rdrv_plength), 'amp': rdrv_amp, 
#                     'phase': 0, 'start_time': 20, 'elem_ind': 1, 'label': 'PULSE_START'})
#    vna_prog.append({'op': 'pulse', 'freq': 'freq', 'env': np.ones(rdlo_plength), 'amp': 1, 
#                     'phase': 0, 'start_time': 20 + rdlo_delay, 'elem_ind': 2})
#    
#    vna_prog.append({'op': 'reg_alu', 'in0': 1, 'in1_reg': 'freq', 'out_reg': 'freq', 'alu_op': 'add'})
#    vna_prog.append({'op': 'reg_alu', 'in0': 1, 'in1_reg': 'i', 'out_reg': 'i', 'alu_op': 'add'})
#    vna_prog.append({'op': 'inc_qclk', 'in0': -(20 + rdlo_delay + pulse_length + 100)})
#    vna_prog.append({'op': 'jump_cond', 'in0': 'i', 'in1_reg': 'niters', 'jump_label': 'PULSE_START', 'alu_op': 'le'})
#    vna_prog.append({'op': 'done_stb'})
#
#    dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#    # adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(40000) + phase)
#    # adc_signal[-1] = 0
#
#    qdrvelemcfg = RFSoCElementCfg(16)
#    rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
#    rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)
#
#    prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#    prog.from_list(vna_prog)
#
#    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
#    sim_prog = prog.get_sim_program()
#
#    cocotb.start_soon(dsp.generate_clock(dut))
#    await dspunit.load_program([cmd_list])
#    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
#    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
#    await dspunit.load_env_buffer(env_buffers[2], 2, 0)
#    await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)
#
#    # cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 0))
#    await dspunit.run_program(50000)
#    acc_buf = await dspunit.read_acc_buf(100)
#    plt.plot(np.real(acc_buf), np.imag(acc_buf), '.')
#    plt.show()

@cocotb.test()
async def test_compile_chain_linear(dut):
    qchip = qc.QChip('../../../submodules/distributed_processor/python/test/qubitcfg.json')
    fpga_config = {'alu_instr_clks': 2,
                   'fpga_clk_period': 2.e-9,
                   'jump_cond_clks': 3,
                   'jump_fproc_clks': 4,
                   'pulse_regwrite_clks': 1}
    program = [{'name': 'X90', 'qubit': ['Q0']},
               {'name': 'X90', 'qubit': ['Q1']},
               {'name': 'read', 'qubit': ['Q0']}]
    fpga_config = hw.FPGAConfig(**fpga_config)
    channel_configs = hw.load_channel_configs('../../../submodules/distributed_processor/python/test/channel_config.json')
    compiler = cm.Compiler(program, 'by_qubit', fpga_config, qchip)
    compiled_prog = compiler.compile()
    #compiled_prog = cm.CompiledProgram(compiler.asm_progs, fpga_config)

    globalasm = asm.GlobalAssembler(compiled_prog, channel_configs, RFSoCElementCfg)
    asmprog = globalasm.get_assembled_program()
    #ipdb.set_trace()

    dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
    # adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(40000) + phase)
    # adc_signal[-1] = 0

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([asmprog[0]['cmd_list']])
    await dspunit.load_env_buffer(asmprog[0]['env_buffers'][0], 0, 0)
    await dspunit.load_freq_buffer(asmprog[0]['freq_buffers'][0], 0, 0)
    await dspunit.run_program(1000)
    sim_prog = globalasm.assemblers[0].get_sim_program()
    #dacout_sim = st.generate_sim_dacout(sim_prog[1], 16)
    plt.plot(dspunit.dac_out[0])
    #plt.plot(dacout_sim)
    plt.show()
