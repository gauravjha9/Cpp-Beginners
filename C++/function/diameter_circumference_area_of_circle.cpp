// Write a C++ program to find diameter, circumference and area of circle using functions.

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

// function declaration
float diameter(float);
float circumference(float);
float area(float);

int main()
{

    float r, d, c, a;

    cout << "Enter the radius: ";
    cin >> r;

    d = diameter(r);
    cout << "Diameter of circle: " << d << " units" << endl;

    c = circumference(r);
    cout << "cicumference of circle: " << fixed << setprecision(2) << c << " units" << endl;

    a = area(r);
    cout << "Area of circle: " << fixed << setprecision(2) << a << " units" << endl;

    return 0;
}

float diameter(float r)
{
    return 2 * r;
}

float circumference(float r)
{
    return (2 * M_PI * r);
}

float area(float r)
{
    return (M_PI * r * r);
}
