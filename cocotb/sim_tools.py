import numpy as np
import matplotlib.pyplot as plt

DAC_SAMPLES_PER_CLK = 4
CORDIC_DELAY = 88 #in samples (ns)
CLK_CYCLE = 4
N_CLKS = 500
ENV_BITS = 16


def unravel_dac(dac_out):
    dac_out_unravel = []
    for val in dac_out:
        for i in range(4):
            sliced_val = (int(val) >> (i*16)) & (2**16 - 1)
            dac_out_unravel.append(twoscomp_to_signed(sliced_val, 16))

    return np.asarray(dac_out_unravel)

def twoscomp_to_signed(value, nbits=16):
    sval = value & (2**(nbits - 1) - 1)
    sval += -1*(value & (2**(nbits - 1)))
    return sval

def check_pulse_output(program, dac_i, dac_q, tol=.005):
    """
    Parameters
    ----------
        program : list of dict:
            {'freq': <freq in Hz>, 'phase': initial phase in rad
             'start_time': pulse start time in clks, 'env_i': env samples
             'env_q': env samples}
        tol : float
            tolerance as a fraction of max value
    """
    dac_i_sim, dac_q_sim = generate_sim_output(program)

    tol = tol*np.max(np.append(dac_i, dac_q))
    max_len = max(len(dac_i), len(dac_i_sim))
    dac_i = np.pad(dac_i, (0, max_len-len(dac_i)))
    dac_q = np.pad(dac_q, (0, max_len-len(dac_q)))
    dac_i_sim = np.pad(dac_i_sim, (0, max_len-len(dac_i_sim)))
    dac_q_sim = np.pad(dac_q_sim, (0, max_len-len(dac_q_sim)))
    return np.all((np.abs(dac_i - dac_i_sim) < tol) & (np.abs(dac_q - dac_q_sim) < tol))

def debug_plots(program, dac_i, dac_q):
    dac_i_sim, dac_q_sim = generate_sim_output(program)
    plt.plot(dac_i, '-', label='I')
    plt.plot(dac_q, '-', label='Q')
    plt.plot(dac_i_sim, ':', label='Sim I')
    plt.plot(dac_q_sim, ':', label='Sim Q')
    plt.legend()
    plt.xlabel('Time (ns)')
    plt.show()

def generate_sim_output(program, ncycles=N_CLKS):
    dac_i_sim = np.zeros(ncycles)
    dac_q_sim = np.zeros(ncycles)
    scale_factor = 2**(ENV_BITS - 1)
    for pulse in program:
        sample_inds = np.arange(0, pulse['length'])
        phases = pulse['phase'] + 2*np.pi*(CLK_CYCLE/DAC_SAMPLES_PER_CLK)*1.e-9*sample_inds*pulse['freq']
        env_i = scale_factor*np.real(pulse['env'])[:pulse['length']]
        env_q = scale_factor*np.imag(pulse['env'])[:pulse['length']]
        pulse_i = env_i*np.cos(phases) - env_q*np.sin(phases)
        pulse_q = env_q*np.cos(phases) + env_i*np.sin(phases)

        dac_i_sim[CORDIC_DELAY + DAC_SAMPLES_PER_CLK*pulse['start_time'] : CORDIC_DELAY + DAC_SAMPLES_PER_CLK*pulse['start_time'] + pulse['length']] = pulse_i
        dac_q_sim[CORDIC_DELAY + DAC_SAMPLES_PER_CLK*pulse['start_time'] : CORDIC_DELAY + DAC_SAMPLES_PER_CLK*pulse['start_time'] + pulse['length']] = pulse_q

    return dac_i_sim.astype(int), dac_q_sim.astype(int)
