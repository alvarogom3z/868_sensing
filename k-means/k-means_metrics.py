# Imports
import pandas as pd                                 # Package to read excel
import sys                                          # Package get parameters 
import pickle                                       # Package to save the model
from sklearn.cluster import KMeans                  # Package of k-means
from sklearn import metrics                         # Package for accuracy
import numpy as np                                  # Package for data visualization
import matplotlib.pyplot as plt                     # Package for data visualization

# Local variables
sent_column = 1
samples_column = 8
tag_column = 12
clusters = 2

# User parameters
excel_file = sys.argv[1]                            # Excel where are the samples
model_name = sys.argv[2]                            # Name of the model to load

# Prepare data
data = pd.read_excel(excel_file)                    # Load the data located in excel file
t = data.iloc[:, sent_column].values                # Get the Sent data values
samples = data.iloc[:, samples_column].values       # Get the RSSI data values
tag = data.iloc[:, tag_column].values               # Get the tag data values
samples2D = samples.reshape(-1, 1)                  # Reshape

                
# Load model
with open(model_name, "rb") as f:                   # Loading the model
    model = pickle.load(f)
    model.fit(samples2D)                            # Fitting Model
    predicted_label = model.predict(samples2D)      # Predicitng a single input (Presence ->  1; No presence -> 0)

    with open(model_name, "wb") as f:                   # Saving the model
        pickle.dump(model, f)


print("Tags: \n")
print(tag)                                          # Printing Tags

print("Predictions: \n")
print(predicted_label)                              # Printing Predictions


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
plt.savefig("predictions.png")


# Accuracy Visualization
fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(8, 10))

# Plot for Input Data
ax1.scatter(t, tag, s=5)
ax1.set_xlabel("t (ms)")
ax1.set_ylabel("Tag")
ax1.set_title("Tagged data") 

# Plot for Output Data
ax2.scatter(t, predicted_label, s=5)
ax2.set_xlabel("t (ms)")
ax2.set_ylabel("Predictions")
ax2.set_title("k-means predictions")

plt.tight_layout()
plt.savefig("accuracy.png")


# Metrics
accuracy = metrics.accuracy_score(tag, predicted_label)
print("Accuracy =", accuracy)

adjusted_rand_score = metrics.adjusted_rand_score(predicted_label, tag)
print("Adjusted Rand Score:", adjusted_rand_score)

fowlkes_mallows_score = metrics.fowlkes_mallows_score(predicted_label, tag)
print("Fowlkes Mallows Score:", fowlkes_mallows_score)

silhouette_score = metrics.silhouette_score(samples2D, predicted_label)
print("Silhouette Score:", silhouette_score)

# Plot metrics
labels = ["Accuracy","Adjusted Rand Score", "Fowlkes Mallows Score", "Silhouette Score"]
values = [accuracy, adjusted_rand_score, fowlkes_mallows_score, silhouette_score]
colors = ["black","blue", "red", "green"]

fig, ax = plt.subplots(figsize=(12, 10))
ax.bar(labels, values, color=colors)
for i, v in enumerate(values):
    ax.text(i, v, str(round(v, 2)), ha='center', va='bottom', fontsize=10)

ax.set_title('Accuracy')
ax.set_ylabel('Value')
ax.set_ylim(0, 1.2) 
plt.savefig('accuracy_params.png')