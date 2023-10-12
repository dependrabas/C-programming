//WAP in c++ ti implement the following using the function overloading.Area of Rectangle(Length * breadth),Area of square(side * size),Area of Circle(pi *radiud*radius)
#include <iostream>
using namespace std;


double calArea(double length, double breadth) {
return length * breadth;
}


double calArea(double side) {
    return side * side;
}


double calArea(double radius) {
    
    double pi = 3.14;
    return pi * radius * radius;
}

int main() {
    double length, breadth, side, radius;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle is " << calArea(length, breadth) << endl;

    cout << "Enter side length of the square ";
    cin >> side;
    cout << "Area of the square is " << calArea(side) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle is " << calArea(radius) << endl;

    return 0;
}


