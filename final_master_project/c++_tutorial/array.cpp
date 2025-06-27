#include <iostream>

using namespace std;

int main(){

    int array[] = {1, 2, 3, 4, 5};
    int array2[5];                     // Array of 5 positions
    int a;

    for(int i = 0; i < sizeof(array); i++){
        cout<<"Array 1: "<< array[i] << "\n";
    }

    for(int j = 0; j < sizeof(array2); j++){
        cout << "Number: ";
        cin >> a;
        array2[j] = a;
    }

    for(int a = 0; a < sizeof(array); a++){
        cout<<"Array 2: "<< array2[a] << "\n";
    }    

    return 0;
}