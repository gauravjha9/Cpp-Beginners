// Write a C++ program to find LCM of two numbers.

#include <iostream>
using namespace std;

int main()
{

    int i, num1, num2, max, lcm = 1;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    max = (num1 > num2) ? num1 : num2;
    i = max;
    for (;;)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
        i += max;
    }

    cout << "LCM : " << lcm;

    return 0;
}