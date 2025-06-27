#include <iostream>

using namespace std;

// FUNCTIONS
void message(string m);
void add(int a, int b);
void mult(int a, int b);

int main(){
	
	message("Hola");
	
	add(3, 4);
	
	mult(3, 4);
	
	return 0;
}

void message(string m){
	cout << m << "\n";
}

void add(int a, int b){
	int c = a + b;
	cout << c;
}

void mult(int a, int b){
	int c = a * b;
	cout << c;
}
