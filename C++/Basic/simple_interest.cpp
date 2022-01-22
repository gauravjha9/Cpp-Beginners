// Write a C++ program to enter P, T, R and calculate Simple Interest.

#include <iostream>
using namespace std;

int main()
{

    float p, t, r, si;

    cout << "Enter principle: ";
    cin >> p;
    cout << "Enter time: ";
    cin >> t;
    cout << "Enter rate: ";
    cin >> r;

    si = (p * t * r) / 100;
    cout << "Simple Interest = " << si;

    return 0;
}