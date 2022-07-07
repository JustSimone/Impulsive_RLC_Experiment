import pandas as pd
import numpy as np

# Printing the value of the standard deviation got from the noise
noise = pd.read_table('data/raw data/Noise1105.txt', sep='\t')
std = np.std(noise.Noise)
print(np.std(noise.Noise))
