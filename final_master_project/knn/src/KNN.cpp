#include "../includes/KNN.h"

// Function to calculate the euclidean distance
double KNN::euclideanDistance(int x1, int y1, int x2, int y2){
	return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}

// KNN algorithm
int KNN::knn_algorithm(const vector<tuple<int, int, int>>& trainingData, int k, int rssiTest){

	vector<pair<double, int>> distanceTagVector; 		// Vector to save distance and tag

	// Calculate distances
	for (const auto& data : trainingData) {
		int rssiTrain = get<1>(data);			// Get RSSI value
	    int tagTrain = get<2>(data);			// Get tag value
	    double distance = euclideanDistance(rssiTest, 0, rssiTrain, 0);		// Calculate distance with the euclidean distance
	    distanceTagVector.push_back({distance, tagTrain});					// Save the distance and the tag
	}

    sort(distanceTagVector.begin(), distanceTagVector.end());				// Sort the vector in ascendent order

	int nTag0 = 0;
	int nTag1 = 0;

	// Count and return the most frequent tag
	for (int i = 0; i < k; ++i) {
		if (distanceTagVector[i].second == 0) {
			nTag0++;
		} else {
			nTag1++;
		}
	}
	if(nTag0 > nTag1){
		return 0;
	} else{
		return 1;
	}
}
