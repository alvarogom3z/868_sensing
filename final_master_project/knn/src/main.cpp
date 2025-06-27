#include "../includes/CSV_reader.h"
#include "../includes/KNN.h"
#include <chrono>

using namespace std;

int main() {
    // Start timer
    auto start = std::chrono::high_resolution_clock::now();

    // unsync the I/O of C and C++. 
    ios_base::sync_with_stdio(false); 

    // Get training data
    const string trainingPath = "../train.csv";
    CSVReader trainReader(trainingPath, ",");
    vector<tuple<int, int, int>> dataTrain = trainReader.getTrainData();

    // Get testing data
    const string testingPath = "../test.csv";
    CSVReader testReader(testingPath, ",");
    vector<pair<int, int>> dataTest = testReader.getTestData();

    // Print data training
    cout << "********** TRAIN ********** \n";
    for(const auto& train : dataTrain){
        cout << "Sent Value: " << get<0>(train) << ", RSSI: " << get<1>(train) << ", Tag: " << get<2>(train) << "\n";
    }

    auto end_train = std::chrono::high_resolution_clock::now();

    // Print Result data
    cout << "********** TEST ********** \n";
    // Params
    KNN knn_algorithm;
    int k = 2;

    // KNN and result for every tuple
    for(const auto& test : dataTest){
        try {
            int testTag = knn_algorithm.knn_algorithm(dataTrain, k, test.second);
            cout << "Sent Value: " << test.first << ", RSSI: " << test.second << ", Predicted Tag: " << testTag << "\n";
        } catch (const runtime_error& e) {
            cerr << "Error during KDTree query: " << e.what() << "\n";
        }
    }

    // Stop timer and calculate the time
    auto end_test = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> time_train = end_train - start;
    std::chrono::duration<double> time_test = end_test - end_train;
    cout << "Time taken to train= " << time_train.count() << " s" << "\n"; 
    cout << "Time taken to test= " << time_test.count() << " s" << "\n"; 
    return 0;
}


/*
// TEST THE CSV READER
int main(){
    const string path = "C:\\Users\\Alvaro\\Desktop\\Securitas_Direct\\rf_sensing\\sensing\\c++\\knn_library1\\test.csv";
	CSVReader reader(path);
    vector<tuple<int, int, int>> data = reader.getTrainData();

    for (const auto& t : data) {
            int sentValue = get<0>(t);
            int rssiValue = get<1>(t);
            int tag = get<2>(t);

            cout << "Sent_value: " << sentValue << ", RSSI_value: " << rssiValue << ", Tag: " << tag << "\n";
        }

    return 0;
}*/