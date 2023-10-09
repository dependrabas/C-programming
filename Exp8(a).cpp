//write a program in c++ to declare a class, declare some variable,share data into variables,
// create  object of the class

#include <iostream>
using namespace std;


class Person {
public:
    
    string name;
    int age;

    
    void displayDetail() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

int main() {
    
    Person person1;

    
    person1.name = "John Doe";
    person1.age = 30;
    
    

    return 0;
}

