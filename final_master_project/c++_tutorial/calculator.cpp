#include <iostream>

using namespace std;

int main(){
	
	int option = 0;
	float a, b;
	
	cout << "Option 1 additions \n";
	cout << "Option 2 substracts \n";
	cout << "Option 3 multiplies \n";
	cout << "Option 4 divides \n";
	cout << "Enter an option: ";
	cin >> option;
	
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	
	switch(option){
		case 1:
			cout << a+b;
			break;
			
		case 2:
			cout << a-b;
			break;
			
		case 3:
			cout << a*b;
			break;
		
		case 4:
			cout << a/b;
			break;
		
	}
	
	return 0;
}
