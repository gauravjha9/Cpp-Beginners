// Write a C++ program to enter length in centimeter and convert it into meter and kilometer.

#include <iostream>
using namespace std;

int main()
{
    float cm, m, km;

    cout << "Enter length in centimeter: ";
    cin >> cm;

    m = cm / 100;
    km = cm / 100000;

    cout << "Length in meter: " << m << " m" << endl;
    cout << "Length in kilometer: " << km << " km" << endl;
    return 0;
}