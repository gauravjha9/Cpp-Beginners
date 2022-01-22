// Write a C++ program to find power of a number using for loop.

#include <iostream>
using namespace std;

int main()
{

    int i, b, e, p = 1;

    cout << "Enter base: ";
    cin >> b;
    cout << "Enter exponent: ";
    cin >> e;

    for (i = 1; i <= e; i++)
    {
        p *= b;
    }

    cout << b << " ^ " << e << " = " << p << endl;

    return 0;
}