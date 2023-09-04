#include<iostream>
using namespace std;

int main() {
    int size = 5;

    for (int i = 0; i < size; ++i) {
        for (int j = 1; j <= size - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

