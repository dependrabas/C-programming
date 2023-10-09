//write a program in c++ to implement to call by reference (perform a swaping of two variable)
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    cout << "Before swapping: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 <<endl;

    
    swap(num1, num2);

    cout << "After swapping: " <<endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 <<endl;

    return 0;
}

