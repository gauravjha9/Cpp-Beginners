// Write a C++ program to find maximum between two numbers using conditional operator.

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int num1, num2, max;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    max = (num1 > num2) ? num1 : num2;
    cout << "Maximum: " << max;

    return 0;
}