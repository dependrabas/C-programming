//WAP to print the ASCII value of a character entered by  the user.

#include<iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter any character: ";
    cin >> ch;

     
    int ASCII = static_cast<int>(ch);
   

    cout << " The ASCII value of " << ch << " is: " << ASCII << endl;

    return 0;
}
