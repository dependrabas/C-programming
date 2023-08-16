//wap in cpp to accept a N digit number from keyboard and print the single digit sum of the number without using laops.
#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return num % 10 + sumOfDigits(num / 10);
}

int main() {
    int n;
    cout << "Enter an N-digit number: ";
    cin >> n;

    int digitSum = sumOfDigits(n);
    cout << "Sum of digits: " << digitSum << endl;

    return 0;
}

