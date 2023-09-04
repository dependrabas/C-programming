#include<iostream>
using namespace std;

int main() {
    int size;

    // Input the size of the pattern
    cout << "Enter the size: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        // Print leading spaces
        for (int j = 0; j < size - i - 1; j++) {
            cout << " ";
        }

        // Print numbers in increasing order
        for (int k = 1; k <= 2 * i + 1; k++) {
            cout << k;
        }

        // Move to the next line after printing the pattern for this row
        cout << endl;
    }

    return 0;
}

