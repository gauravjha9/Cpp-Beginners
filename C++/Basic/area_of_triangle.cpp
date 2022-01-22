// Write a C++ program to enter base and height of a triangle and find its area.

#include <iostream>
using namespace std;

int main()
{

    int base, height, area;

    cout << "Enter base of a triangle: ";
    cin >> base;
    cout << "Enter height of a triangle: ";
    cin >> height;

    area = (height * base) / 2;

    cout << "Area of the triangle = " << area << " sq. units";

    return 0;
}