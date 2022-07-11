import pandas as pd
import numpy as np
from scipy.optimize import curve_fit
from scipy.stats import chi2_contingency
import matplotlib.pyplot as plt
from matplotlib.gridspec import GridSpec

# Calculation for the standard deviation from the noise
noise = pd.read_table('/Users/simonecoli/Desktop/Universita/Secondo_anno/Lab/RLC_exp/impulsive_RLC_experiment/data/raw data/Noise1105.txt', sep='\t')
std = np.std(noise.Noise)

# Defining the function for the fit of the data
def sind(x,A,b,c,d):
  return A*np.exp(b*x)*np.sin(c*x+d)

def lin(x, a, b):
  return a*x + b

# Actual data analysis
data_impulse = pd.read_table('/Users/simonecoli/Desktop/Universita/Secondo_anno/Lab/RLC_exp/impulsive_RLC_experiment/data/raw data/Dati1105_waveformimpulse3.txt', sep = '\t')

datax = data_impulse.TimeV_C
datay = data_impulse.AmplitudeV_C

removed_data_after = 150
n = len(datax) - removed_data_after + 1
for i in range(n , len(datax)):
  datax.pop(i)
  datay.pop(i)

removed_data_before = 7
for i in range(removed_data_before):
  datax.pop(i)
  datay.pop(i)

fig = plt.figure(constrained_layout = True)
gs = GridSpec(6, 1, figure = fig)
fig1 = fig.add_subplot(gs[:-1,0])
fig1.grid(True)

plt.rc('xtick', labelsize=28)
plt.rc('ytick', labelsize=28)
plt.xlabel('Time [s]', fontsize=30)
plt.ylabel('Voltage [V]', fontsize=30)
plt.title('Potenziale ai capi del condensatore - Onda Impulsiva R1 ', fontsize=32)

fig1.errorbar(datax, datay, std, fmt='o', ms = 3, mew = 2, capsize=5, capthick=1, zorder=10, label = 'Dati')
par, cov = curve_fit(sind, datax, datay, p0 = [2, -12000, 45000,-0.1])
fit_sind = sind(datax, par[0], par[1], par[2], par[3])
fig1.plot(datax, fit_sind, label = 'Fit', lw = 3, zorder = 5, color = 'deeppink')
#fig1.plot(datax, sind(datax, 4.5, -13000, 81100, 0), color = 'black', zorder = 0, lw = 1.5, ls = "-.", label = "Andamento Teorico")
fig1.legend(loc="upper right", prop={'size': 28})

fig2 = fig.add_subplot(gs[5,0])
fig2.grid(True)
res3 = fit_sind-datay
fig2.plot(datax, res3, lw = 2)
fig2.axhline(0, color='black')

fig.set_size_inches(19, 15)
plt.savefig('/Users/simonecoli/Desktop/Universita/Secondo_anno/Lab/RLC_exp/impulsive_RLC_experiment/graphs/ImpulsoR1.pdf', dpi=300, bbox_inches='tight')

print(np.sqrt(np.diag(cov)))

for i in range(4):
  print('par', i,' ', par[i])

# Chi-Square calculations
Chi2_3 = sum(((res3)/std)**2)
v = len(res3) - 4
Chi2R_3 = Chi2_3/v
print(v)
print(Chi2_3)
print(Chi2R_3)
