import pandas as pd
import numpy as np
from scipy.optimize import curve_fit
from scipy.stats import chi2_contingency
import matplotlib.pyplot as plt
from matplotlib.gridspec import GridSpec

# Calculation the standard deviation from the noise
noise = pd.read_table('data/raw data/Noise1105.txt', sep='\t')
std = np.std(noise.Noise)

# Defining the function for the fit of the data
def sind(x,A,b,c,d):
  return A*np.exp(b*x)*np.sin(c*x+d)

def lin(x, a, b):
  return a*x + b

# Actual data analysis
data_max = pd.read_table('data/raw data/Dati1105_Maxati.txt', sep ='\t')

datax = data_max.TimeV_C
datay = data_max.AmplitudeV_C

removed_data = 200
n = len(datax) - removed_data + 1
for i in range(n , len(datax)):
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
plt.title('Potenziale ai capi del condensatore - Onda Quadra R2', fontsize=32)

fig1.errorbar(datax, datay, std, fmt='o', ms = 3, mew = 2, capsize=5, capthick=1, zorder=10, label = 'Dati')
par, cov = curve_fit(sind, datax, datay, p0 = [5, -10200, 45100,-0.1])
fit_sind = sind(datax, par[0], par[1], par[2], par[3])
fig1.plot(datax, fit_sind, label = 'Fit', lw = 3, zorder = 5)
#fig1.plot(datax, sind(datax, 2.5, -10200, 45100, 0), color = 'black', lw = 1.5, ls = "-.", label = "Andamento Teorico", zorder = 0)
fig1.legend(loc="upper right", prop={'size': 28})
plt.xlabel('Time [s]')
plt.ylabel('Voltage [V]')


fig2 = fig.add_subplot(gs[5,0])
fig2.grid(True)
res = fit_sind-datay
fig2.axhline(0, color='black')
fig2.plot(datax, res, lw = 2)

fig.set_size_inches(19, 15)
plt.savefig('QuadraR2.pdf', dpi=300, bbox_inches='tight')

print(np.sqrt(np.diag(cov)))

for i in range(4):
  print('par', i,' ', par[i])

# Chi-Square calculations
Chi2 = sum(((res)/std)**2)
v = len(res) - 4
Chi2R = Chi2/v
print(v)
print(Chi2)
print(Chi2R)
