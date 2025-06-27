#include "CSV_reader.h"
#include "knncpp.h"

typedef Eigen::MatrixXd Matrix;
typedef knncpp::Matrixi Matrixi;

using namespace std;

int main(){
    // Get training data
    const string trainingPath = "C:\\Users\\Alvaro\\Desktop\\Securitas_Direct\\rf_sensing\\sensing\\c++\\kdTree_library\\train.csv";
    CSVReader trainReader(trainingPath, ",");
    vector<tuple<int, int, int>> dataTrain = trainReader.getTrainData();
    //Matrix dataPoints(dataTrain.size(), 2);
    Matrix dataPoints(dataTrain.size(), 1);
    Matrixi labels(dataTrain.size(), 1);

    for (size_t i = 0; i < dataTrain.size(); ++i) {
        //dataPoints(i, 0) = get<0>(dataTrain[i]);  // Sent Value
        dataPoints(i, 0) = get<1>(dataTrain[i]);  // RSSI
        labels(i, 0) = get<2>(dataTrain[i]);      // Tag
    }

    // KD-Tree
    knncpp::KDTreeMinkowskiX<double, knncpp::EuclideanDistance<double>> kdtree(dataPoints);
    kdtree.setBucketSize(16);
    kdtree.setSorted(true);
    kdtree.setTakeRoot(false);
    kdtree.setMaxDistance(0);
    kdtree.setThreads(1);
    kdtree.build();

    // Get testing data
    const string testingPath = "C:\\Users\\Alvaro\\Desktop\\Securitas_Direct\\rf_sensing\\sensing\\c++\\kdTree_library\\test.csv";
    CSVReader testReader(testingPath, ",");
    vector<pair<int, int>> dataTest = testReader.getTestData();

    cout << "********** TRAIN ********** \n";
    for (const auto& train : dataTrain){
        cout << "Sent Value: " << get<0>(train) << ", RSSI: " << get<1>(train) << ", Tag: " << get<2>(train) << "\n";
    }

    cout << "********** TEST ********** \n";
    Matrixi index;
    Matrix distances;
    Matrix queryPoint(1000, 1);

    for (size_t i = 0; i < dataTest.size(); ++i) {
		queryPoint.row(i) << dataTest[i].second;

		try {
			kdtree.query(queryPoint, 1, index, distances);
			cout << "Sent Value: " << dataTest[i].first << ", RSSI: " << dataTest[i].second << ", Tag: " << index <<", Distance: " << distances << "\n";
		}catch (const runtime_error& e) {
			cerr << "Error during KDTree query: " << e.what() << "\n";
		}
	}
    return 0;
}
