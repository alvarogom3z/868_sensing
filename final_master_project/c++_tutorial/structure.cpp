#include <iostream>

using namespace std;

struct Pokemon{
    char name[50];
    char type[50];
    float weight;
    char gender;
};

int main(){

    Pokemon pokemon1;
    cout << "Name of the pokemon";
    cin.getline(pokemon1.name, 50, '\n');       // To obtain all the characters that the user insert
    cout << "Type of the pokemon";
    cin.getline(pokemon1.type, 50, '\n');
    cout << "Weight of the pokemon";
    cin >> pokemon1.weight;
    cout << "Gender of the pokemon";
    cin >> pokemon1.gender;

    cout << "Name: " << pokemon1.name << "\n";
    cout << "Type: " << pokemon1.type << "\n";
    cout << "Weight: " << pokemon1.weight << "\n";
    cout << "Gender: " << pokemon1.gender << "\n";

    return 0;
}