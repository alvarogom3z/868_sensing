#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	// Variables
	float weight = 0;
	float height = 0;
	float bmi = 0;
	
	cout << "BMI calculator \n";
	// Obtain the weight
	cout << "Weight: ";
	cin >> weight;
	
	// Obtain the height
	cout << "Height: ";
	cin >> height;
	
	// Calculate the BMI
	bmi = weight/pow(height, 2);
	
	cout << "Your BMI is: "<< bmi << " kg/m^2"<<"\n";
	
	return 0;
}
