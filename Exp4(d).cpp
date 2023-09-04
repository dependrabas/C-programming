//WAP TO CREATE AN ARRAY OF  SIZE N. ACCEPT A VALUE FROM USER AND DELETE IT FROM THE ARRAY.

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

    
    int Delete;
    cout << "\nEnter the value to delete from the array: ";
    cin >> Delete;

    
    bool found = false;
    for (i = 0; i < num; i++) {
        if (arr[i] == Delete) {
            found = true;
            for (int j = i; j < num - 1; j++) {
                arr[j] = arr[j + 1];
            }
            num--;
            break;
        }
    }

    if (found) {
        cout << "Value " << Delete << " deleted from the array.\n";
        cout << "New array:\n";
        for (i = 0; i < num; i++) {
            cout << arr[i] << "  ";
        }
    } else {
        cout << "Value " << Delete << " not found in the array.\n";
    }

    return 0;
}
