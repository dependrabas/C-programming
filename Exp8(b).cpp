// create pointer object, access and display the data using object 
//Access and display the data using pointer object 
#include <iostream>
using namespace std;
class MyClass {
public:
    int data;

    MyClass(int value) : data(value) {}
};

int main() {
   
    MyClass obj(42);

   
    MyClass* ptr = &obj;

   
    cout << "Data using object: " << obj.data <<endl;

   
    cout << "Data using pointer: " << ptr->data <<endl;

    return 0;
}

