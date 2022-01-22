// Write a C++ program to find maximum between two numbers using switch case.

#include <iostream>
using namespace std;

int main()
{

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (num1 > num2)
    {
    case 0:
        cout << "Maximum: " << num2;
        break;
    case 1:
        cout << "Maximum: " << num1;
        break;
    }

    return 0;
}