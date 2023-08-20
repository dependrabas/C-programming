#include <iostream>
using namespace std;

int main()
{
    int Age;
    cout << "Enter your Age:";
    cin >> Age;

    if (Age < 16) {
        cout << "Too young";
    }
    else if (Age >= 16 && Age <= 42) {
        cout << "Adult";
    }
    else if (Age > 42 && Age <= 70) {
        cout << "Senior";
    }
    else {
        cout << "Invalid Age";
    }

    return 0;
}

