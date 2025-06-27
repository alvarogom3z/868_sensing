#include <iostream>

// CONSTANTS
#define PI 3.1415

using namespace std;

int main(){
	
	const double GRAVITY  = 9.8;
	float a = 8;
	cout << a << "\n";
	cout << GRAVITY << "\n";
	
	a += 2;
	// Error because you cant change the value of constants
	//GRAVITY += 2;
	cout << a << "\n";
	cout << GRAVITY << "\n";
	cout << PI << "\n";
	
	return 0;
}
