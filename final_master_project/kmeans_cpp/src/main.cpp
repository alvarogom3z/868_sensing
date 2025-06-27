#include "../includes/Kmeans.hpp"
#include "../includes/CSV_reader.h"

#include <chrono>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Start timer
    auto start = std::chrono::high_resolution_clock::now();

    // unsync the I/O of C and C++. 
    ios_base::sync_with_stdio(false); 

    // Get testing data
    const string testingPath = "../test.csv";
    CSVReader testReader(testingPath, ",");
    vector<pair<int, int>> dataTest = testReader.getTestData();

    // Check if it is empty
    if (dataTest.empty()) {
        cerr << "Error: CSV is empty or couldn't be read." << endl;
        return 1;
    }

    // Prepare params
    int ndim = 1;
    int nobs = dataTest.size();
    int k = 3;
    vector<double> matrix(nobs);
    for (size_t i = 0; i < dataTest.size(); ++i) {
        matrix[i] = dataTest[i].second;
    }

    // k-means
    auto res = kmeans::Kmeans<double, int, int>().run(ndim, nobs, matrix.data(), k);
    auto centers = res.centers;         // Matrix of centroid
    auto clusters = res.clusters;       // Vector of clusters
    auto details = res.details;         // Details from the clustering algorithm

    // Results
    cout << "\nTest Points:" << endl;
    for (size_t i = 0; i < dataTest.size(); ++i) {
        cout << "\tSent Value: " << dataTest[i].first << ", RSSI: " << dataTest[i].second << ", Predicted Cluster: " << clusters[i] << "\n";
    }

    // Stop timer and calculate the time
    auto end_test = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> time_test = end_test - start;
    cout << "Time taken = " << time_test.count() << " s" << "\n"; 
    return 0;
}