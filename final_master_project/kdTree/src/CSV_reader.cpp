#include "csv_reader.h"

CSVReader::CSVReader(const string& fileName, const string& delimiter):
	fileName(fileName),
	delimeter(delimiter)
{}

/*
* Function to fetch the data to test from a CSV file
*/
vector<tuple<int, int, int>> CSVReader::getTrainData() {

	ifstream file(this->fileName);						// Open the file
	vector<tuple<int, int, int>> data;					// Vector to store the tuple of integers
	string line = "";									// Variable to save the line
	bool firstline = true;								// Flag to avoid the first line

	while (getline(file, line)) {
		if(firstline == true){							// Avoid first line
			firstline = false;
			continue;
		}
		vector<string> tmp;
		tmp = this->split(line, ",");											// Split the line in different elements
		if (tmp.size() == 3){													// Check if there are 2 elements
			int sentValue = stoi(tmp[0]);										// Convert first element to integer
			int rssiValue = stoi(tmp[1]);										// Convert second element to integer
			int tag = stoi(tmp[2]);												// Convert third element to integer
			data.push_back(tuple<int, int, int>(sentValue, rssiValue, tag));	// Save the tuple in the data vector
		}
	}
	file.close();										// Close the file
	return data;										// Return the vector
}

/*
* Function to fetch the data to predict from a CSV file
*/
vector<pair<int, int>> CSVReader::getTestData() {

	ifstream file(this->fileName);						// Open the file
	vector<pair<int, int>> data;						// Vector to store pairs of integers
	string line = "";									// Variable to save the line
	bool firstline = true;								// Flag to avoid the first line

	while (getline(file, line)) {
		if(firstline == true){							// Avoid first line
			firstline = false;
			continue;
		}
		vector<string> tmp;
		tmp = this->split(line, ",");					// Split the line in different elements
		if (tmp.size() == 2){							// Check if there are 2 elements
			int sentValue = stoi(tmp[0]);				// Convert first element to integer
			int rssiValue = stoi(tmp[1]);				// Convert second element to integer
			data.push_back({sentValue, rssiValue});		// Save the pair in the data vector
		}
	}
	file.close();										// Close the file
	return data;										// Return the vector
}

/*
* Function used to split each line by the delimiter
*/
vector<string> CSVReader::split(string target, string delim) {
	vector<string> v;												// Vector to store the resulting substrings
	if (!target.empty()) {											// Check if it is not empty
		size_t pos = 0;												// Variable for the position
		do {
			size_t x = target.find(delim, pos);						// Search for the next iteration
			// a check whether the target is found
			if (x == string::npos) {
				break;
			}
			string tmp = target.substr(pos, x - pos);				// Obtain the substring and stores it in tmp
			v.push_back(tmp);										// Add the substring to the vector v
			pos += delim.size() + tmp.size();						// Update the position
		} while (true);

		v.push_back(target.substr(pos));							// Add the remaining portion of the target string to the vector v
	}
	return v;														// Returns the vector containing the split substrings
}
