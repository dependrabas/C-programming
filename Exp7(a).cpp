//write a program in c++ to implement to declare a pointer and access the data using pointer (Display the data and address)

#include <iostream>
using namespace std;

int main() {
    int data = 42; 
    int* ptr = &data;

   
    cout << "Data: " << &ptr << endl; 
    cout << "Address: " << ptr << endl; 

    return 0;
}

