#include <iostream>
using namespace std;

int main() {
    int Num1, Num2, Num3;
    cout << "Enter Three Numbers:\n";
    cin >> Num1 >> Num2 >> Num3;

    if (Num1 >= Num2 && Num1 >= Num3) {
        cout << "Num1 is the greatest among three numbers" << endl;
        if (Num2 >= Num3) {
            cout << "Num2 is the second largest" << endl;
            cout << "Num3 is the smallest";
        } else {
            cout << "Num3 is the second largest" << endl;
            cout << "Num2 is the smallest";
        }
    } else if (Num2 >= Num1 && Num2 >= Num3) {
        cout << "Num2 is the greatest among three numbers" << endl;
        if (Num1 >= Num3) {
            cout << "Num1 is the second largest" << endl;
            cout << "Num3 is the smallest";
        } else {
            cout << "Num3 is the second largest" << endl;
            cout << "Num1 is the smallest";
        }
    } else {
        cout << "Num3 is the greatest among three numbers" << endl;
        if (Num1 >= Num2) {
            cout << "Num1 is the second largest" << endl;
            cout << "Num2 is the smallest";
        } else {
            cout << "Num2 is the second largest" << endl;
            cout << "Num1 is the smallest";
        }
    }

    return 0;
}
