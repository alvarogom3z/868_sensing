#include "../includes/CSV_reader.h"
#include "../includes/dkm.hpp"

#include <chrono>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <random>


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
        cerr << "Error: CSV is empty." << endl;
        return 1;
    }

    // Prepare and convert the data
    vector<array<float, 1>> data;
    for (const auto& tuple : dataTest) {
        array<float, 1> entry = {static_cast<float>(tuple.second)};
        data.push_back(entry);
    }

    // k-means
    auto cluster_data = dkm::kmeans_lloyd(data, 2);

    // Results
    cout << "Means:" << endl;
    for (const auto& mean : std::get<0>(cluster_data)) {
        cout << "\t" << mean[0] << endl;
    }
    
    cout << "\n Test Points:" << endl;
    for (size_t i = 0; i < dataTest.size(); ++i) {
        cout << "\t\tSent Value: " << dataTest[i].first << ", RSSI: " << dataTest[i].second << ", Predicted Tag: " << std::get<1>(cluster_data)[i] << "\n";
    }

    // Stop timer and calculate the time
    auto end_test = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> time_test = end_test - start;
    cout << "Time taken = " << time_test.count() << " s" << "\n"; 
    return 0;
}
