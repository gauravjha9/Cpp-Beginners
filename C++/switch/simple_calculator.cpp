// Write a C++ program to create Simple Calculator using switch case.

#include <iostream>
using namespace std;

int main()
{

    int num1, num2, ans;
    char ch;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter Operator (+, -, *, /, %): ";
    cin >> ch;
    cout << "Enter second number: ";
    cin >> num2;

    switch (ch)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    case '%':
        ans = num1 % num2;
        break;
    default:
        cout << "Please Enter valid input!" << endl;
    }

    cout << num1 << " " << ch << " " << num2 << " = " << ans << endl;

    return 0;
}