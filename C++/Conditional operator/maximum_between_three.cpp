// Write a C++ program to find maximum between three numbers using conditional operator.

#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3, max;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2
                                                              : num3;

    cout << "Maximum is " << max << endl;

    return 0;
}