// Write a C++ program to find power of any number x ^ y.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int x, y, power;

    cout << "Enter base: ";
    cin >> x;
    cout << "Enter exponent: ";
    cin >> y;

    power = pow(x, y);

    cout << x << " ^ " << y << " = " << power;

    return 0;
}