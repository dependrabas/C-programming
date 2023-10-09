//write a program in c++ to implement to declare a pointer and call a function using pointer.
#include <iostream>
using namespace std;


void displayMyName() {
    cout << "This is Dependra Basnet..." << endl;
}

int main() {
    
    void (*functionPointer)() = nullptr;

    
    functionPointer = &displayMyName;

    
    (*functionPointer)();

    return 0;
}


