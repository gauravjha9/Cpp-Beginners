// Write a C++ program to enter any number and calculate its square root.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, squareRoot;

    cout << "Enter any number: ";
    cin >> n;

    squareRoot = sqrt(n);
    cout << "square root of " << n << " = " << squareRoot;

    return 0;
}