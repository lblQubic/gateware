import cocotb
from cocotb.triggers import Timer, RisingEdge
import numpy as np
import matplotlib.pyplot as plt
import ipdb
import dsp_drivers as dsp
from qubic.rfsoc.hwconfig import RFSoCElementCfg
import distproc.assembler as asm
import distproc.compiler as cm
import sim_tools as st
import qubitconfig.qchip as qc
import distproc.hwconfig as hw

sdpara=["260183","4862","261334","260711","262141","259938","4215","4895","1258","4406","259194","260609","260881","261883","3074","2106","260105","261076","1240","2377","260362","6050","261792","7072","261219","261083","231","2514","1992","2883","260124","260161","260317","259731","261824","261593","2757","261239","1128","259316","796","9162","260588","13399","2316","11726","80","8325","3299","247774","258016","248723","262042","259230","0","0","0","0","258988","259290","262129","259931","0","259739","22860","262143","262143"]
# @cocotb.test()
# async def test_const_pulse(dut):
#     freq = 100.e6
#     phase = 0
#     tstart = 8
#     pulse_length = 100
#     amp = 0.9
#     env_i = 0.2*np.ones(pulse_length)
#     env_q = 0.1*np.ones(pulse_length)
#     elemcfg = RFSoCElementCfg()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

#     prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
#     prog.add_phase_reset()
#     prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 0)
#     prog.add_done_stb()
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
#     sim_prog = prog.get_sim_program()
#     pulse_seq = [sim_prog[1]]
#     # print(env_buffers)
#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#     await dspunit.load_sdpara_buffer(sdpara,0)
#     await dspunit.run_program(1000)
#     dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
#     # ipdb.set_trace()
#     plt.plot(dspunit.dac_out[0])
#     plt.plot(dacout_sim)
#     plt.show()
#     assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])


# @cocotb.test()
# async def test_ramp_pulse(dut):
#     """
#     Using a freq that is harmonic of FPGA clock period, so
#     cordic phase acc doesn't matter
#     """
#     freq = 2500.e6
#     phase = 0
#     tstart = 10
#     pulse_length = 1000
#     amp = 0.9
#     env_i = np.arange(pulse_length)/pulse_length
#     env_q = np.zeros(pulse_length)/pulse_length
#     elemcfg = RFSoCElementCfg()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

#     prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
#     prog.add_phase_reset()
#     prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 0)
#     prog.add_done_stb()
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
#     sim_prog = prog.get_sim_program()
#     pulse_seq = [sim_prog[1]]

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)

#     await dspunit.run_program(500)
#     dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
#     #plt.plot(dspunit.dac_out[0])
#     #plt.plot(dacout_sim)
#     #plt.show()
#     assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

# @cocotb.test()
# async def test_consecutive_id_ramp_pulse(dut):
#     elemcfg = RFSoCElementCfg()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

#     prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
#     prog.add_phase_reset()

#     pulse_length = 92
#     env_i = np.arange(pulse_length)**2/pulse_length**2
#     env_q = 0.3*np.arange(pulse_length)/pulse_length
#     prog.add_pulse(freq=0.85e9, phase=0, amp=0.9, start_time=50, env=env_i + 1j*env_q, elem_ind=0)

#     pulse_length = 92
#     env_i = np.arange(pulse_length)**2/pulse_length**2
#     env_q = 0.3*np.arange(pulse_length)/pulse_length
#     prog.add_pulse(freq=0.85e9, phase=0, amp=0.9, start_time=100, env=env_i + 1j*env_q, elem_ind=0)

#     prog.add_done_stb()
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
#     sim_prog = prog.get_sim_program()
#     pulse_seq = sim_prog[1:3]

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)

#     await dspunit.run_program(500)
#     dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
#     #plt.plot(dspunit.dac_out[0])
#     #plt.plot(dacout_sim)
#     #plt.show()
#     assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

# @cocotb.test()
# async def test_consecutive_ramp_pulse(dut):
#     elemcfg = RFSoCElementCfg()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

#     prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
#     prog.add_phase_reset()

#     pulse_length = 100
#     env_i = np.arange(pulse_length)/pulse_length
#     env_q = 0.5*np.arange(pulse_length)/pulse_length
#     prog.add_pulse(freq=1.5e9, phase=0, amp=0.9, start_time=50, env=env_i + 1j*env_q, elem_ind=0)

#     pulse_length = 92
#     env_i = np.arange(pulse_length)**2/pulse_length**2
#     env_q = 0.3*np.arange(pulse_length)/pulse_length
#     prog.add_pulse(freq=0.85e9, phase=np.pi/4, amp=0.8, start_time=110, env=env_i + 1j*env_q, elem_ind=0)

#     prog.add_done_stb()
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
#     sim_prog = prog.get_sim_program()
#     pulse_seq = sim_prog[1:3]
#     #pulse_seq = [sim_prog[1]]

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)

#     await dspunit.run_program(500)
#     dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
#     #plt.plot(dspunit.dac_out[0])
#     #plt.plot(dacout_sim)
#     #plt.show()
#     assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

# @cocotb.test()
# async def test_consecutive_immediate_ramp_pulse(dut):
#     elemcfg = RFSoCElementCfg()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

#     prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
#     prog.add_phase_reset()

#     pulse_length = 100
#     env_i = np.arange(pulse_length)/pulse_length
#     env_q = 0.5*np.arange(pulse_length)/pulse_length
#     prog.add_pulse(freq=1.5e9, phase=0, amp=0.9, start_time=50, env=env_i + 1j*env_q, elem_ind=0)

#     pulse_length = 92
#     env_i = np.arange(pulse_length)**2/pulse_length**2
#     env_q = 0.5*np.arange(pulse_length)/pulse_length
#     prog.add_pulse(freq=0.27e9, phase=np.pi/4, amp=0.4, start_time=55, env=env_i + 1j*env_q, elem_ind=0)

#     prog.add_done_stb()
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
#     sim_prog = prog.get_sim_program()
#     pulse_seq = sim_prog[1:3]
#     #pulse_seq = [sim_prog[1]]

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)

#     await dspunit.run_program(500)
#     dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
#     # TODO: fix consecutive pulse issue
#     plt.plot(dspunit.dac_out[0])
#     plt.plot(dacout_sim)
#     plt.show()
#     assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

# @cocotb.test()
# async def test_qdrv_initphase_ramp(dut):
#     freq = 347.e6
#     phase = np.pi/8
#     tstart = 10
#     pulse_length = 1000
#     amp = 0.9
#     env_i = np.arange(pulse_length)/pulse_length
#     env_q = np.zeros(pulse_length)/pulse_length
#     elemcfg = RFSoCElementCfg()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

#     prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
#     prog.add_phase_reset()
#     prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 0)
#     prog.add_done_stb()
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
#     sim_prog = prog.get_sim_program()
#     pulse_seq = [sim_prog[1]]

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#     await dspunit.load_env_buffer(env_buffers[1], 1, 0)
#     await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)

#     await dspunit.run_program(500)
#     dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
#     #plt.plot(dspunit.dac_out[0])
#     #plt.plot(dacout_sim)
#     #plt.show()
#     assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

# @cocotb.test()
# async def test_rdrv_pulse(dut):
#     freq = 347.e6
#     phase = np.pi/8
#     tstart = 10
#     pulse_length = 1000
#     amp = 0.9
#     env_i = np.arange(pulse_length)/pulse_length
#     env_q = np.zeros(pulse_length)/pulse_length
#     elemcfg = RFSoCElementCfg(interp_ratio=16)

#     dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

#     prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
#     prog.add_phase_reset()
#     prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 1)
#     prog.add_done_stb()
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
#     sim_prog = prog.get_sim_program()
#     pulse_seq = [sim_prog[1]]

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#     await dspunit.load_env_buffer(env_buffers[1], 1, 0)
#     await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)

#     await dspunit.run_program(5000)
#     dacout_sim = st.generate_sim_dacout(pulse_seq, 16, extra_delay=2, interp_ratio=16)
#     assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[3])

# @cocotb.test()
# async def test_adc_lb(dut):
#     freq = 347.e6
#     phase = np.pi/8
#     tstart = 10
#     pulse_length = 100
#     amp = 0.9
#     env_i = 0.2*np.ones(pulse_length)
#     env_q = np.zeros(pulse_length)

#     dacelemcfg = RFSoCElementCfg(16)
#     adcelemcfg = RFSoCElementCfg(4)

#     adc_fullscale = 2**15-1

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*2*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(pulse_length) + phase)
#     adc_signal[-1] = 0

#     prog = asm.SingleCoreAssembler([dacelemcfg, dacelemcfg, adcelemcfg])
#     prog.add_phase_reset()
#     prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 2)
#     prog.add_done_stb()
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
#     sim_prog = prog.get_sim_program()
#     pulse_seq = [sim_prog[1]]

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#     await dspunit.load_env_buffer(env_buffers[1], 1, 0)
#     await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
#     await dspunit.load_env_buffer(env_buffers[2], 2, 0)
#     await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)

#     cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 0))
#     await dspunit.run_program(1000)

#     acq_buf = await dspunit.read_acq_buf(pulse_length+tstart+1000, 0)
    
#     plt.plot(acq_buf)
#     plt.plot(adc_signal)
#     plt.show()

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
    adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*2*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(pulse_length) + phase)
    adc_signal[-1] = 0

    prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
    prog.add_phase_reset()
    #prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 1)
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 2)
    prog.add_done_stb()
    cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_sdpara_buffer(sdpara,0)
    await dspunit.load_program([cmd_buf])
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
    cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    #cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_buf])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
    await dspunit.load_env_buffer(env_buffers[2], 2, 0)
    await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)

    cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 0))
    await dspunit.run_program(1000)
    acc_buf1 = await dspunit.read_acc_buf(3)
    print(acc_buf0, acc_buf1)
    
# @cocotb.test()
# async def test_acc_sweep(dut):
#     freq = 347.e6
#     phase = np.pi/8
#     tstart = 20
#     pulse_length = 200
#     amp = 0.9
#     env_i = 0.2*np.ones(pulse_length)
#     env_q = np.zeros(pulse_length)
#     niters = 100

#     qdrvelemcfg = RFSoCElementCfg(16)
#     rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
#     rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)

#     adc_fullscale = 2**15-1

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*2*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(40000) + phase)
#     adc_signal[-1] = 0

#     prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#     prog.add_phase_reset()
#     prog.add_reg_write('n_iters', niters)
#     prog.add_reg_write('i', 0)
#     prog.add_reg_write('phase', 0, dtype=('phase', 2))
#     prog.add_pulse(freq, 'phase', amp, tstart, env_i + 1j*env_q, 2, label='PULSE')
#     prog.add_alu_cmd('inc_qclk', -(pulse_length + tstart), 'add')
#     prog.add_alu_cmd('reg_alu', 1, 'add', 'i', 'i')
#     prog.add_alu_cmd('reg_alu', 2*np.pi/niters, 'add', 'phase', 'phase')
#     prog.add_alu_cmd('jump_cond', 'i', 'le', 'n_iters', jump_label='PULSE')
#     prog.add_done_stb()
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
#     sim_prog = prog.get_sim_program()
#     pulse_seq = [sim_prog[1]]

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#     await dspunit.load_env_buffer(env_buffers[1], 1, 0)
#     await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
#     await dspunit.load_env_buffer(env_buffers[2], 2, 0)
#     await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)

#     cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 0))
#     await dspunit.run_program(10000)
#     acc_buf = await dspunit.read_acc_buf(100)
#     plt.plot(np.real(acc_buf), np.imag(acc_buf), '.')
#     plt.show()

# #@cocotb.test()
# #async def test_vna(dut):
# #    fr = 6.555e9
# #    f0 = fr-3e6
# #    f1 = fr+3e6
# #    nfreq = 512
# #    freqs = np.linspace(f0, f1, nfreq)
# #    rdlo_delay = 100
# #    rdrv_amp = 0.25
# #    pulse_length = 2000 #length in samples
# #    rdrv_plength = pulse_length #env size, divide by 16 b/c interpolation
# #    rdlo_plength = rdrv_plength
# #    
# #    vna_prog = [{'op': 'declare_freq', 'freq': f, 'elem_ind': 1} for f in freqs]
# #    vna_prog.extend([{'op':'declare_freq', 'freq': f, 'elem_ind': 2} for f in freqs])
# #    vna_prog.append({'op': 'phase_reset'})
# #    vna_prog.append({'op': 'reg_write', 'name': 'freq', 'value': 0})
# #    vna_prog.append({'op': 'reg_write', 'name': 'i', 'value': 0})
# #    vna_prog.append({'op': 'reg_write', 'name': 'niters', 'value': nfreq})
# #    
# #    vna_prog.append({'op': 'pulse', 'freq': 'freq', 'env': np.ones(rdrv_plength), 'amp': rdrv_amp, 
# #                     'phase': 0, 'start_time': 20, 'elem_ind': 1, 'label': 'PULSE_START'})
# #    vna_prog.append({'op': 'pulse', 'freq': 'freq', 'env': np.ones(rdlo_plength), 'amp': 1, 
# #                     'phase': 0, 'start_time': 20 + rdlo_delay, 'elem_ind': 2})
# #    
# #    vna_prog.append({'op': 'reg_alu', 'in0': 1, 'in1_reg': 'freq', 'out_reg': 'freq', 'alu_op': 'add'})
# #    vna_prog.append({'op': 'reg_alu', 'in0': 1, 'in1_reg': 'i', 'out_reg': 'i', 'alu_op': 'add'})
# #    vna_prog.append({'op': 'inc_qclk', 'in0': -(20 + rdlo_delay + pulse_length + 100)})
# #    vna_prog.append({'op': 'jump_cond', 'in0': 'i', 'in1_reg': 'niters', 'jump_label': 'PULSE_START', 'alu_op': 'le'})
# #    vna_prog.append({'op': 'done_stb'})
# #
# #    dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
# #    # adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(40000) + phase)
# #    # adc_signal[-1] = 0
# #
# #    qdrvelemcfg = RFSoCElementCfg(16)
# #    rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
# #    rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)
# #
# #    prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
# #    prog.from_list(vna_prog)
# #
# #    cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
# #    sim_prog = prog.get_sim_program()
# #
# #    cocotb.start_soon(dsp.generate_clock(dut))
# #    await dspunit.load_program([cmd_buf])
# #    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
# #    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
# #    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
# #    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
# #    await dspunit.load_env_buffer(env_buffers[2], 2, 0)
# #    await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)
# #
# #    # cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 0))
# #    await dspunit.run_program(50000)
# #    acc_buf = await dspunit.read_acc_buf(100)
# #    plt.plot(np.real(acc_buf), np.imag(acc_buf), '.')
# #    plt.show()

# @cocotb.test()
# async def test_compile_chain_linear(dut):
#     qchip = qc.QChip('qubitcfg.json')
#     fpga_config = {'alu_instr_clks': 2,
#                    'fpga_clk_period': 2.e-9,
#                    'jump_cond_clks': 3,
#                    'jump_fproc_clks': 4,
#                    'pulse_regwrite_clks': 1}
#     program = [{'name': 'X90', 'qubit': ['Q0']},
#                {'name': 'X90', 'qubit': ['Q1']},
#                {'name': 'read', 'qubit': ['Q0']}]
#     fpga_config = hw.FPGAConfig(**fpga_config)
#     channel_configs = hw.load_channel_configs('../../../submodules/distributed_processor/python/test/channel_config.json')
#     compiler = cm.Compiler(program)
#     compiler.run_ir_passes(cm.get_default_passes(fpga_config, qchip))
#     compiled_prog = compiler.compile()
#     #compiled_prog = cm.CompiledProgram(compiler.asm_progs, fpga_config)

#     globalasm = asm.GlobalAssembler(compiled_prog, channel_configs, RFSoCElementCfg)
#     asmprog = globalasm.get_assembled_program()
#     #ipdb.set_trace()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     # adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(40000) + phase)
#     # adc_signal[-1] = 0

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([asmprog['0']['cmd_buf']])
#     await dspunit.load_env_buffer(asmprog['0']['env_buffers'][0], 0, 0)
#     await dspunit.load_freq_buffer(asmprog['0']['freq_buffers'][0], 0, 0)
#     await dspunit.run_program(1000)
#     sim_prog = globalasm.assemblers['0'].get_sim_program()
#     #dacout_sim = st.generate_sim_dacout(sim_prog[1], 16)
#     plt.plot(dspunit.dac_out[0])
#     #plt.plot(dacout_sim)
#     plt.show()

# @cocotb.test()
# async def test_compile_chain_pulse(dut):
#     qchip = qc.QChip('qubitcfg.json')
#     fpga_config = {'alu_instr_clks': 2,
#                    'fpga_clk_period': 2.e-9,
#                    'jump_cond_clks': 3,
#                    'jump_fproc_clks': 4,
#                    'pulse_regwrite_clks': 1}
#     program = [{'name': 'pulse', 'phase': np.pi/2, 'freq': 'Q0.freq', 'env': np.ones(24*16//2),
#                 'twidth': 24.e-9, 'amp': 0.5, 'dest': 'Q0.qdrv'},
#                {'name': 'read', 'qubit': ['Q0']}]
#     fpga_config = hw.FPGAConfig(**fpga_config)
#     channel_configs = hw.load_channel_configs('../../../submodules/distributed_processor/python/test/channel_config.json')
#     compiler = cm.Compiler(program)
#     compiler.run_ir_passes(cm.get_default_passes(fpga_config, qchip))
#     compiled_prog = compiler.compile()
#     #compiled_prog = cm.CompiledProgram(compiler.asm_progs, fpga_config)

#     globalasm = asm.GlobalAssembler(compiled_prog, channel_configs, RFSoCElementCfg)
#     asmprog = globalasm.get_assembled_program()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     # adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(40000) + phase)
#     # adc_signal[-1] = 0

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([asmprog['0']['cmd_buf']])
#     await dspunit.load_env_buffer(asmprog['0']['env_buffers'][0], 0, 0)
#     await dspunit.load_freq_buffer(asmprog['0']['freq_buffers'][0], 0, 0)
#     await dspunit.run_program(1000)
#     sim_prog = globalasm.assemblers['0'].get_sim_program()
#     #dacout_sim = st.generate_sim_dacout(sim_prog[1], 16)
#     plt.plot(dspunit.dac_out[0])
#     #plt.plot(dacout_sim)
#     plt.show()

# @cocotb.test()
# async def test_fproc_read(dut):
#     dac_samples_per_clk = 16
#     adc_samples_per_clk = 4
#     qdrv_interp_ratio = 1
#     rdrv_interp_ratio = 16
#     rdlo_interp_ratio = 4
#     progdict = [{'op' : 'declare_reg', 'name' : 'fproc_meas0'},
#             {'op' : 'phase_reset'},
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 5, 'elem_ind': 1}, 
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 25, 'elem_ind': 2}, 
#             {'op' : 'idle', 'end_time': 25 + 200 + 64},
#             {'op' : 'alu_fproc', 'in0': 0, 'alu_op': 'id1', 'out_reg': 'fproc_meas0'},
#             {'op' : 'done_stb'}]

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     qdrvelemcfg = RFSoCElementCfg(dac_samples_per_clk)
#     rdrvelemcfg = RFSoCElementCfg(dac_samples_per_clk, interp_ratio=rdrv_interp_ratio)
#     rdloelemcfg = RFSoCElementCfg(adc_samples_per_clk, interp_ratio=rdlo_interp_ratio)
#     prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#     prog.from_list(progdict)
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#     await dspunit.load_env_buffer(env_buffers[1], 1, 0)
#     await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
#     await dspunit.load_env_buffer(env_buffers[2], 2, 0)
#     await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)
#     await dspunit.run_program(500)

# @cocotb.test()
# async def test_fproc_jump(dut):
#     progdict = [{'op' : 'declare_reg', 'name' : 'fproc_meas0'},
#             {'op' : 'phase_reset'},
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 5, 'elem_ind': 1}, 
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 25, 'elem_ind': 2}, 
#             {'op' : 'idle', 'end_time': 25 + 200 + 64},
#             {'op' : 'jump_fproc', 'in0': 1, 'alu_op': 'eq', 'jump_label': 'done'},
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 300, 'elem_ind': 0}, 
#             {'op' : 'done_stb', 'label': 'done'}]

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     qdrvelemcfg = RFSoCElementCfg(16)
#     rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
#     rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)
#     prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#     prog.from_list(progdict)
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#     await dspunit.load_env_buffer(env_buffers[1], 1, 0)
#     await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
#     await dspunit.load_env_buffer(env_buffers[2], 2, 0)
#     await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)
#     await dspunit.run_program(500)
#     assert np.all(dspunit.dac_out[0] == 0)

# @cocotb.test()
# async def test_fproc_notjump(dut):
#     progdict = [{'op' : 'declare_reg', 'name' : 'fproc_meas0'},
#             {'op' : 'phase_reset'},
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 5, 'elem_ind': 1}, 
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 25, 'elem_ind': 2}, 
#             {'op' : 'idle', 'end_time': 25 + 200 + 64},
#             {'op' : 'jump_fproc', 'in0': 0, 'alu_op': 'eq', 'jump_label': 'done'},
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 302, 'elem_ind': 0}, 
#             {'op' : 'done_stb', 'label': 'done'}]

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     qdrvelemcfg = RFSoCElementCfg(16)
#     rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
#     rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)
#     prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#     prog.from_list(progdict)
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#     await dspunit.load_env_buffer(env_buffers[1], 1, 0)
#     await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
#     await dspunit.load_env_buffer(env_buffers[2], 2, 0)
#     await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)
#     await dspunit.run_program(500)
#     assert not np.all(dspunit.dac_out[0] == 0)

# @cocotb.test()
# async def test_fproc_jump_ph_adj(dut):
#     progdict = [{'op' : 'declare_reg', 'name' : 'fproc_meas0'},
#             {'op' : 'phase_reset'},
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 5, 'elem_ind': 1}, 
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : np.pi, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 25, 'elem_ind': 2}, 
#             {'op' : 'idle', 'end_time': 25 + 200 + 64},
#             {'op' : 'jump_fproc', 'in0': 0, 'alu_op': 'eq', 'jump_label': 'done'},
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 302, 'elem_ind': 0}, 
#             {'op' : 'done_stb', 'label': 'done'}]

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     qdrvelemcfg = RFSoCElementCfg(16)
#     rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
#     rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)
#     prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#     prog.from_list(progdict)
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#     await dspunit.load_env_buffer(env_buffers[1], 1, 0)
#     await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
#     await dspunit.load_env_buffer(env_buffers[2], 2, 0)
#     await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)
#     await dspunit.run_program(500)
#     assert np.all(dspunit.dac_out[0] == 0)


# @cocotb.test()
# async def test_fproc_jump_diffcore(dut):
#     """
#     Same as above but change rdlo phase to 0
#     """
#     freq = 347.e6
#     progdict1 = [{'op' : 'phase_reset'},
#             {'op' : 'pulse', 'freq' : freq, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 5, 'elem_ind': 1}, 
#             {'op' : 'pulse', 'freq' : freq, 'phase' : np.pi, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 25, 'elem_ind': 2}, 
#             {'op' : 'done_stb', 'label': 'done'}]

#     progdict2 = [{'op' : 'declare_reg', 'name' : 'fproc_meas0'},
#             {'op' : 'phase_reset'},
#             {'op' : 'idle', 'end_time': 25 + 200 + 64},
#             {'op' : 'jump_fproc', 'in0': 0, 'alu_op': 'eq', 'jump_label': 'done', 'func_id': 1},
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 302, 'elem_ind': 0}, 
#             {'op' : 'done_stb', 'label': 'done'}]


#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     qdrvelemcfg = RFSoCElementCfg(16)
#     rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
#     rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)
#     prog1 = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#     prog2 = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#     prog1.from_list(progdict1)
#     prog2.from_list(progdict2)
#     cmd_buf1, env_buffers1, freq_buffers1 = prog1.get_compiled_program()
#     cmd_buf2, env_buffers2, freq_buffers2 = prog2.get_compiled_program()

#     adc_signal = (2**15-1)*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(500))
#     adc_signal[-1] = 0

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([bytes(), cmd_buf1, cmd_buf2])
#     await dspunit.load_env_buffer(env_buffers1[0], 0, 1)
#     await dspunit.load_freq_buffer(freq_buffers1[0], 0, 1)
#     await dspunit.load_env_buffer(env_buffers1[1], 1, 1)
#     await dspunit.load_freq_buffer(freq_buffers1[1], 1, 1)
#     await dspunit.load_env_buffer(env_buffers1[2], 2, 1)
#     await dspunit.load_freq_buffer(freq_buffers1[2], 2, 1)

#     await dspunit.load_env_buffer(env_buffers2[0], 0, 2)
#     await dspunit.load_freq_buffer(freq_buffers2[0], 0, 2)
#     await dspunit.load_env_buffer(env_buffers2[1], 1, 2)
#     await dspunit.load_freq_buffer(freq_buffers2[1], 1, 2)
#     await dspunit.load_env_buffer(env_buffers2[2], 2, 2)
#     await dspunit.load_freq_buffer(freq_buffers2[2], 2, 2)

#     cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 1))
#     await dspunit.run_program(500)
#     assert np.all(dspunit.dac_out[2] == 0)


# @cocotb.test()
# async def test_fproc_nojump_diffcore(dut):
#     freq = 347.e6
#     progdict1 = [{'op' : 'phase_reset'},
#             {'op' : 'pulse', 'freq' : freq, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 5, 'elem_ind': 1}, 
#             {'op' : 'pulse', 'freq' : freq, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 25, 'elem_ind': 2}, 
#             {'op' : 'done_stb', 'label': 'done'}]

#     progdict2 = [{'op' : 'declare_reg', 'name' : 'fproc_meas0'},
#             {'op' : 'phase_reset'},
#             {'op' : 'idle', 'end_time': 25 + 200 + 64},
#             {'op' : 'jump_fproc', 'in0': 0, 'alu_op': 'eq', 'jump_label': 'done', 'func_id': 1},
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
#              'start_time': 302, 'elem_ind': 0}, 
#             {'op' : 'done_stb', 'label': 'done'}]


#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     qdrvelemcfg = RFSoCElementCfg(16)
#     rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
#     rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)
#     prog1 = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#     prog2 = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#     prog1.from_list(progdict1)
#     prog2.from_list(progdict2)
#     cmd_buf1, env_buffers1, freq_buffers1 = prog1.get_compiled_program()
#     cmd_buf2, env_buffers2, freq_buffers2 = prog2.get_compiled_program()

#     adc_signal = (2**15-1)*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(500))
#     adc_signal[-1] = 0

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([bytes(),cmd_buf1,cmd_buf2])
#     await dspunit.load_env_buffer(env_buffers1[0], 0, 1)
#     await dspunit.load_freq_buffer(freq_buffers1[0], 0, 1)
#     await dspunit.load_env_buffer(env_buffers1[1], 1, 1)
#     await dspunit.load_freq_buffer(freq_buffers1[1], 1, 1)
#     await dspunit.load_env_buffer(env_buffers1[2], 2, 1)
#     await dspunit.load_freq_buffer(freq_buffers1[2], 2, 1)

#     await dspunit.load_env_buffer(env_buffers2[0], 0, 2)
#     await dspunit.load_freq_buffer(freq_buffers2[0], 0, 2)
#     await dspunit.load_env_buffer(env_buffers2[1], 1, 2)
#     await dspunit.load_freq_buffer(freq_buffers2[1], 1, 2)
#     await dspunit.load_env_buffer(env_buffers2[2], 2, 2)
#     await dspunit.load_freq_buffer(freq_buffers2[2], 2, 2)

#     cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 1))
#     await dspunit.run_program(500)
#     assert not np.all(dspunit.dac_out[2] == 0)

# @cocotb.test()
# async def test_fproc_reset_compile(dut):
#     qchip = qc.QChip('qubitcfg.json')
#     program = [{'name': 'X90', 'qubit': ['Q0']},
#                {'name': 'read_test', 'qubit': ['Q0']},
#                {'name': 'branch_fproc', 'alu_cond': 'eq', 'cond_lhs': 1, 'func_id': 'Q0.meas', 'scope': ['Q0'],
#                 'true': [#{'name': 'delay', 't': 146.e-9, 'qubit': ['Q0']},
#                              {'name': 'X90', 'qubit': ['Q0']}, 
#                              {'name': 'X90', 'qubit': ['Q0']}], 
#                     'false': []},
#                {'name': 'read_test', 'qubit': ['Q0']}]
#     fpga_config = hw.FPGAConfig()
#     channel_configs = hw.load_channel_configs('../../../submodules/distributed_processor/python/test/channel_config.json')
#     compiler = cm.Compiler(program)
#     compiler.run_ir_passes(cm.get_default_passes(fpga_config, qchip))
#     compiled_prog = compiler.compile()
#     for statement in compiled_prog.program[('Q0.qdrv', 'Q0.rdrv', 'Q0.rdlo')]:
#         print(statement)

#     globalasm = asm.GlobalAssembler(compiled_prog, channel_configs, RFSoCElementCfg)
#     asmprog = globalasm.get_assembled_program()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([asmprog['0']['cmd_buf']])
#     await dspunit.load_env_buffer(asmprog['0']['env_buffers'][0], 0, 0)
#     await dspunit.load_freq_buffer(asmprog['0']['freq_buffers'][0], 0, 0)
#     await dspunit.run_program(1500)
#     plt.plot(dspunit.dac_out[0])
#     plt.show()
#     #assert not np.all(dspunit.dac_out[2] == 0)
#     #plt.plot(dspunit.dac_out[0])
#     assert not np.all(dspunit.dac_out[0][1250:] == 0)

# @cocotb.test()
# async def test_fproc_noreset_compile(dut):
#     qchip = qc.QChip('qubitcfg.json')
#     program = [{'name': 'X90', 'qubit': ['Q0']},
#                {'name': 'read_test', 'qubit': ['Q0']},
#                {'name': 'branch_fproc', 'alu_cond': 'eq', 'cond_lhs': 0, 'func_id': 'Q0.meas', 'scope': ['Q0'],
#                 'true': [{'name': 'delay', 't': 146.e-9, 'qubit': ['Q0']},
#                              {'name': 'X90', 'qubit': ['Q0']}, 
#                              {'name': 'X90', 'qubit': ['Q0']}], 
#                     'false': []},
#                {'name': 'read_test', 'qubit': ['Q0']}]
#     fpga_config = hw.FPGAConfig()
#     channel_configs = hw.load_channel_configs('../../../submodules/distributed_processor/python/test/channel_config.json')
#     compiler = cm.Compiler(program)
#     compiler.run_ir_passes(cm.get_default_passes(fpga_config, qchip))
#     compiled_prog = compiler.compile()
#     #compiled_prog = cm.CompiledProgram(compiler.asm_progs, fpga_config)
#     for statement in compiled_prog.program[('Q0.qdrv', 'Q0.rdrv', 'Q0.rdlo')]:
#         print(statement)

#     globalasm = asm.GlobalAssembler(compiled_prog, channel_configs, RFSoCElementCfg)
#     asmprog = globalasm.get_assembled_program()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([asmprog['0']['cmd_buf']])
#     await dspunit.load_env_buffer(asmprog['0']['env_buffers'][0], 0, 0)
#     await dspunit.load_freq_buffer(asmprog['0']['freq_buffers'][0], 0, 0)
#     await dspunit.run_program(1500)
#     plt.plot(dspunit.dac_out[0])
#     plt.show()
#     assert np.all(dspunit.dac_out[0][1250:] == 0)

# @cocotb.test()
# async def test_asm_cw(dut):
#     progdict = [
#             {'op' : 'phase_reset'},
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : 'cw', 'amp' : 0.5, 
#              'start_time': 50, 'elem_ind': 0}, 
#             {'op' : 'pulse', 'freq' : 750.e6, 'phase' : np.pi/2, 'env' : np.ones(200), 'amp' : 0.7, 
#              'start_time': 500, 'elem_ind': 0}, 
#             {'op' : 'done_stb', 'label': 'done'}]

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     qdrvelemcfg = RFSoCElementCfg(16)
#     rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
#     rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)
#     prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
#     prog.from_list(progdict)
#     cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([cmd_buf])
#     await dspunit.load_env_buffer(env_buffers[0], 0, 0)
#     await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
#     await dspunit.load_env_buffer(env_buffers[1], 1, 0)
#     await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
#     await dspunit.load_env_buffer(env_buffers[2], 2, 0)
#     await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)
#     await dspunit.run_program(1000)

#     sim_pulse = [
#             {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(450*16), 'amp' : 0.5, 
#              'start_time': 50, 'elem_ind': 1},
#             {'op' : 'pulse', 'freq' : 750.e6, 'phase' : np.pi/2, 'env' : np.ones(200), 'amp' : 0.7, 
#              'start_time': 500, 'elem_ind': 0}] 

#     dacout_sim = st.generate_sim_dacout(sim_pulse, 16)
#     plt.plot(dspunit.dac_out[0])
#     plt.plot(dacout_sim)
#     plt.show()

#     #TODO: fix amp issue
#     assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

# @cocotb.test()
# async def test_compile_cw(dut):
#     qchip = qc.QChip('qubitcfg.json')
#     fpga_config = {'alu_instr_clks': 4,
#                    'fpga_clk_period': 2.e-9,
#                    'jump_cond_clks': 5,
#                    'jump_fproc_clks': 5,
#                    'pulse_regwrite_clks': 4}
#     program = [
#             {'name' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : 'cw', 'amp' : 0.99, 
#              'start_time': 50, 'twidth': 100.e-9, 'dest': 'Q0.qdrv'}]

#     fpga_config = hw.FPGAConfig(**fpga_config)
#     channel_configs = hw.load_channel_configs('../../../submodules/distributed_processor/python/test/channel_config.json')
#     compiler = cm.Compiler(program)
#     compiler.run_ir_passes(cm.get_default_passes(fpga_config, qchip))
#     compiled_prog = compiler.compile()
#     #compiled_prog = cm.CompiledProgram(compiler.asm_progs, fpga_config)
#     for statement in compiled_prog.program[('Q0.qdrv', 'Q0.rdrv', 'Q0.rdlo')]:
#         print(statement)

#     globalasm = asm.GlobalAssembler(compiled_prog, channel_configs, RFSoCElementCfg)
#     asmprog = globalasm.get_assembled_program()


#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
#     qdrvelemcfg = RFSoCElementCfg(16)
#     rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
#     rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([asmprog['0']['cmd_buf']])
#     await dspunit.load_env_buffer(asmprog['0']['env_buffers'][0], 0, 0)
#     await dspunit.load_freq_buffer(asmprog['0']['freq_buffers'][0], 0, 0)
#     await dspunit.run_program(1000)


#     plt.plot(dspunit.dac_out[0])
#     plt.show()

# @cocotb.test()
# async def test_cond_bitflip(dut):
#     qchip = qc.QChip('qubitcfg.json')
#     program = [
#         {'name': 'X90', 'qubit': ['Q1']},
#         {'name': 'read', 'qubit': ['Q1']},
#         {'name': 'branch_fproc', 'alu_cond': 'eq', 'cond_lhs': 1, 'func_id': 'Q1.meas', 'scope': ['Q0', 'Q1'],
#                     'true': [
#                                  {'name': 'X90', 'qubit': ['Q0']}, 
#                                  {'name': 'X90', 'qubit': ['Q0']}], 
#                     'false': []},
#         {'name': 'barrier', 'qubit':['Q0', 'Q1']},
#         {'name': 'read', 'qubit': ['Q0']},
#         {'name': 'read', 'qubit': ['Q1']},
    
#     ]

#     fpga_config = hw.FPGAConfig()
#     channel_configs = hw.load_channel_configs('../../../submodules/distributed_processor/python/test/channel_config.json')
#     compiler = cm.Compiler(program)
#     compiler.run_ir_passes(cm.get_default_passes(fpga_config, qchip))
#     compiled_prog = compiler.compile()
#     #compiled_prog = cm.CompiledProgram(compiler.asm_progs, fpga_config)
#     for statement in compiled_prog.program[('Q0.qdrv', 'Q0.rdrv', 'Q0.rdlo')]:
#         print(statement)
#     for statement in compiled_prog.program[('Q1.qdrv', 'Q1.rdrv', 'Q1.rdlo')]:
#         print(statement)

#     globalasm = asm.GlobalAssembler(compiled_prog, channel_configs, RFSoCElementCfg)
#     asmprog = globalasm.get_assembled_program()

#     dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)

#     cocotb.start_soon(dsp.generate_clock(dut))
#     await dspunit.load_program([asmprog['0']['cmd_buf'], asmprog['1']['cmd_buf']])
#     await dspunit.load_env_buffer(asmprog['0']['env_buffers'][0], 0, 0)
#     await dspunit.load_freq_buffer(asmprog['0']['freq_buffers'][0], 0, 0)
#     await dspunit.load_env_buffer(asmprog['0']['env_buffers'][1], 1, 0)
#     await dspunit.load_freq_buffer(asmprog['0']['freq_buffers'][1], 1, 0)
#     await dspunit.load_env_buffer(asmprog['0']['env_buffers'][2], 2, 0)
#     await dspunit.load_freq_buffer(asmprog['0']['freq_buffers'][2], 2, 0)

#     await dspunit.load_env_buffer(asmprog['1']['env_buffers'][0], 0, 1)
#     await dspunit.load_freq_buffer(asmprog['1']['freq_buffers'][0], 0, 1)
#     await dspunit.load_env_buffer(asmprog['1']['env_buffers'][1], 1, 1)
#     await dspunit.load_freq_buffer(asmprog['1']['freq_buffers'][1], 1, 1)
#     await dspunit.load_env_buffer(asmprog['1']['env_buffers'][2], 2, 1)
#     await dspunit.load_freq_buffer(asmprog['1']['freq_buffers'][2], 2, 1)
#     await dspunit.run_program(1500)
#     #assert np.all(dspunit.dac_out[0][1250:] == 0)


# #@cocotb.test()
# #async def test_long_twidth(dut):
# #    progdict = [
# #            {'op' : 'phase_reset'},
# #            {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : 
# #             {'env_func': 'cos_edge_square', 'paradict': {'ramp_fraction': 0.25, 'twidth': 5.12e-7}}, 'amp' : 0.5, 
# #             'start_time': 5, 'elem_ind': 0}, 
# #            {'op' : 'pulse', 'freq' : 347.e6, 'phase' : 0, 'env' : np.ones(200), 'amp' : 0.5, 
# #             'start_time': 25, 'elem_ind': 1}, 
# #            {'op' : 'done_stb'}]
# #
# #    dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
# #    qdrvelemcfg = RFSoCElementCfg(16)
# #    rdrvelemcfg = RFSoCElementCfg(16, interp_ratio=16)
# #    rdloelemcfg = RFSoCElementCfg(4, interp_ratio=4)
# #    prog = asm.SingleCoreAssembler([qdrvelemcfg, rdrvelemcfg, rdloelemcfg])
# #    prog.from_list(progdict)
# #    cmd_buf, env_buffers, freq_buffers = prog.get_compiled_program()
# #
# #    cocotb.start_soon(dsp.generate_clock(dut))
# #    await dspunit.load_program([cmd_buf])
# #    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
# #    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
# #    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
# #    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
# #    await dspunit.load_env_buffer(env_buffers[2], 2, 0)
# #    await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)
# #    await dspunit.run_program(500)
