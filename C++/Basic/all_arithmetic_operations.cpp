// Write a C++ program to enter two numbers and perform all arithmetic operations.

#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Enter two number: ";
    cin >> a >> b;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " % " << b << " = " << a % b << endl;

    return 0;
}