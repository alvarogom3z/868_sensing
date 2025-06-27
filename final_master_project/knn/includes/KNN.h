#ifndef KNN_H
#define KNN_H

#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>
#include <algorithm>

using namespace std;

class KNN {
public:
	double euclideanDistance(int x1, int y1, int x2, int y2);
	int knn_algorithm(const vector<tuple<int, int, int>>& trainingData, int k, int rssiTest);
};

#endif
