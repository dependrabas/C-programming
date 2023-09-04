//WAP  TO INSERT A NEW ELEMENT IN THE PARTICULAR POSITION OF AN 1-D ARRAY. ACCEPT THE VALUE OF NEW ELEMENT ANS POSITION FROM THE USER.
#include<iostream>
using namespace std;

int main() {
    int i, num;

    cout << "Enter the size for the array: ";
    cin >> num;
    int arr[num];

    cout << "\nEnter " << num << " elements for the array:\n";
    for (i = 0; i < num; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\nThe array is:\n";
    for (i = 0; i < num; i++)
        cout << arr[i] << "  ";

    
    int newValue;
    cout << "\nEnter the value to insert in array: ";
    cin >> newValue;

    
    int position;
    cout << "Enter the position to insert the value (0 to " << num << "): ";
    cin >> position;

    
    if (position >= 0 && position <= num) {
        
        for (i = num; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        
        arr[position] = newValue;
        num++; 

        cout << "Value " << newValue << " inserted at position " << position << ".\n";
        cout << "New array:\n";
        for (i = 0; i < num; i++) {
            cout << arr[i] << "  ";
        }
    } else {
        cout << "Invalid position. Position should be between 0 and " << num << ".\n";
    }

    return 0;
}

