#ifndef CSV_READER_H
#define CSV_READER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <tuple>

using namespace std;

class CSVReader {
public:
	CSVReader(const string& fileName, const string& delimeter);
	vector<pair<int, int>> getTestData();
	vector<tuple<int, int, int>> getTrainData();

private:
	string fileName;
	string delimeter;

	vector<string> split(string target, string delim);
};

#endif