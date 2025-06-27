# Imports
import pandas as pd                                 # Package to read excel
import sys                                          # Package get parameters 
import pickle                                       # Package to save the model
import matplotlib.pyplot as plt                     # Package for data visualization
from sklearn.cluster import KMeans                  # Package of k-means

# Local variables
sent_column = 1
samples_column = 8

# User parameters
excel_file = sys.argv[1]                            # Excel where are the samples
model_name = sys.argv[2]                            # Name of the model to load/save.
clusters = int(sys.argv[3])                         # Number of clusters
image = sys.argv[4]                                 # Name of the figure

# Prepare data
data = pd.read_excel(excel_file)                    # Load the data located in excel file
t = data.iloc[:, sent_column].values                # Get the Sent data values
samples = data.iloc[:, samples_column].values       # Get the RSSI data values
samples2D = samples.reshape(-1, 1)                  # Reshape

# Load model
with open(model_name, "rb") as f:                   
    model = pickle.load(f)
    model.n_clusters = clusters
    model.fit(samples2D)                            # Fitting Model
    predicted_label = model.predict(samples2D)      # Predicitng a single input
    print("Predictions: \n")
    print(predicted_label)                          # Printing Predictions
    
with open(model_name, "wb") as f:                   # Saving the model
    pickle.dump(model, f)


# Data Visualization
fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(8, 10))

# Plot for Input Data
ax1.scatter(t, samples, s=5)
ax1.set_xlabel("t (ms)")
ax1.set_ylabel("RSSI (dBm)")
ax1.set_title("Input") 

# Plot for Output Data
ax2.scatter(t, predicted_label, s=5)
ax2.set_xlabel("t (ms)")
ax2.set_ylabel("Predictions")
ax2.set_title("k-means predictions")

plt.tight_layout()
plt.savefig(image)