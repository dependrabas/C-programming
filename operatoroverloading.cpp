#include<iostream>
using namespace std;

class complex {
private:
    float r, i;
public:
    complex(float real, float imag) {
        r = real;
        i = imag;
    }

    complex() {
        r = 0;
        i = 0;
    }

    void displaydata() {
        cout << "real part = " << r << endl;
        cout << "imaginary part = " << i << endl;
    }

    complex operator+(const complex& c) {
        return complex(r + c.r, i + c.i);
    }
};

int main() {
    complex a(2, 3);
    complex b(3, 4);
    complex c = a + b;
    c.displaydata();

    return 0;
}
