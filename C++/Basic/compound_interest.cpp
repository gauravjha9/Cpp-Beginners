// Write a C++ program to enter P, T, R and calculate Compound Interest.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    float p, t, r, ci;

    cout << "Enter principle (amount): ";
    cin >> p;
    cout << "Enter time: ";
    cin >> t;
    cout << "Enter rate: ";
    cin >> r;

    ci = p * (pow(1 + (r / 100), t));
    cout << "Compound Interest = " << ci;
 
    return 0;
}