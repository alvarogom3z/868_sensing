import matplotlib.pyplot as plt                     # Package for data visualization
import sys                                          # Package for get parameters from terminal 
import numpy as np                                  # Package for work with arrays
import pandas as pd

file = sys.argv[1]                                  # Name of the excel file
image = sys.argv[2]                                 # Name of the figure

df = pd.read_excel(file)

# Obtaining data
sent_value = df['Sent value'].tolist()
rssi = df['RSSI'].tolist()
tag = df['Tag'].tolist()

# Data Visualization
fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(8, 10))

# Plot for Input Data
ax1.scatter(sent_value, rssi, s=5)
ax1.set_xlabel("t (ms)")
ax1.set_ylabel("RSSI (dBm)")
ax1.set_title("Input") 

# Plot for Output Data
ax2.scatter(sent_value, tag, s=5)
ax2.set_xlabel("t (ms)")
ax2.set_ylabel("Predictions")
ax2.set_title("k-means predictions")

plt.tight_layout()
plt.savefig(image)