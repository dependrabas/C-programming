#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r1, r2;
    cout << "Enter the Starting Range:";
    cin >> r1;
    cout << "Enter the Ending Range:";
    cin >> r2;

    for (int i = r1; i <= r2; i++) {
        int count = 0;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                count = 1;
                break;
            }
        }
        if (count == 0 && i > 1) {
            cout << i<<" ";
        }
    }

    return 0;
}

