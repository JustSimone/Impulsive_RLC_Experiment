import pandas as pd
import numpy as np

# Printing the value of the standard deviation got from the noise
noise = pd.read_table('/Users/simonecoli/Desktop/Universita/Secondo_anno/Lab/RLC_exp/impulsive_RLC_experiment/data/raw data/Noise1105.txt', sep='\t')
std = np.std(noise.Noise)
print(np.std(noise.Noise))
