#include <iostream>

using namespace std;

class Person{
    // Atributes
    public:
        string name;
        float weight;
    
    public:
        Person(string, float);     // Constructor
        void Action();              // Methods
};

// Inicialization of the constructor
Person::Person(string _name, float _weight){
    name = _name;
    weight = _weight;
}

// Methods inicializated
void Person::Action(){
    cout<<"The Person is "<<name<<" and its weight is "<<weight;
}

// ----------------------------------------//
// Derived Class
class Person_derived : public Person{
    public:
        int age;
        char gender;
    
    public:
        Person_derived(string, float, int, char);
        void Action2();
};

// Inicialization of the derived constructor
Person_derived::Person_derived(string _name, float _weight, int _age, char _gender) : Person(_name, _weight){
    age = _age;
    gender= _gender;
}

// Methods inicializated
void Person_derived::Action2(){
    Action();
    cout<<"The Person is "<<age<<" years old and its gender is "<<gender;
}


// ----------------------------------------//
int main(){

    //Person p1 = Person("Alvaro", 75);      // Object created
    //p1.Action();

    Person_derived p2 = Person_derived("Alvaro", 75, 22, 'M');      // Object created
    p2.Action2();    

    return 0;
}