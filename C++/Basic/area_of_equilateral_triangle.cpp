// Write a C++ program to calculate area of an equilateral triangle.

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{

    float s, equiTri;

    cout << "Enter side of the equilateral triangle: ";
    cin >> s;

    equiTri = (sqrt(3) / 4) * (s * s);
    cout << "Area of equilateral triangle = " << fixed << setprecision(2) << equiTri << " sq. units";

    return 0;
}