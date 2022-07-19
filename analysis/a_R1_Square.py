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
data_quadra = pd.read_table('/Users/simonecoli/Desktop/Universita/Secondo_anno/Lab/RLC_exp/impulsive_RLC_experiment/data/raw data/Dati0511_1.txt', sep = '\t')

datax = data_quadra.TimeV_C
datay = data_quadra.AmplitudeV_C

removed_data_after = 200
n = len(datax) - removed_data_after + 1
for i in range(n , len(datax)):
  datax.pop(i)
  datay.pop(i)

removed_data_before = 5
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
plt.title('Potenziale ai capi del condensatore  -  Onda Quadra R1 ', fontsize=42)

#fig1.plot(datax, sind(datax, 5, -5400, 81100, 0), color = 'black', lw = 1.5, ls = "-.", label = "Andamento Teorico", zorder = 0)
fig1.errorbar(datax, datay, std, fmt='o', ms = 3, mew = 2, capsize=5, capthick=1, zorder=10, label = 'Dati')
par, cov = curve_fit(sind, datax, datay, p0 = [2, -5000, 45000,-0.1])
fit_sind = sind(datax, par[0], par[1], par[2], par[3])
fig1.plot(datax, fit_sind, label = 'Fit', lw = 3, zorder = 5)
fig1.legend(loc="upper right", prop={'size': 28})


fig2 = fig.add_subplot(gs[5,0])
fig2.grid(True)
res2 = fit_sind-datay
fig2.axhline(0, color='black')
fig2.plot(datax, res2, lw = 2)

fig.set_size_inches(19, 15)

print(np.sqrt(np.diag(cov)))

plt.savefig('/Users/simonecoli/Desktop/Universita/Secondo_anno/Lab/RLC_exp/impulsive_RLC_experiment/graphs/QuadraR1.pdf', dpi=300, bbox_inches='tight')

for i in range(4):
  print('par', i,' ', par[i])

# Chi-Square calculation
Chi2_2 = sum(((res2)/std)**2)
v = len(res2) - 4
Chi2R_2 = Chi2_2/v
print(v)
print(Chi2_2)
print(Chi2R_2)
