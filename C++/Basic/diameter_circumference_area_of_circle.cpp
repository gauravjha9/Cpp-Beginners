// Write a C++ program to enter radius of a circle and find its diameter, circumference and area.

#include <iostream>
using namespace std;

int main()
{

    int radius, diameter, area;
    float circumference, PI = 3.14;

    cout << "Enter radius: ";
    cin >> radius;

    diameter = (2 * radius);
    circumference = (2 * PI * radius);
    area = (PI * (radius * radius));

    cout << "Diameter: " << diameter << " units" << endl;
    cout << "Circumference: " << circumference << " units" << endl;
    cout << "Area: " << area << " sq. units" << endl;

    return 0;
}