// Write a C program to find HCF (GCD) of two numbers.
//High common factor (HCF)

#include <iostream>
using namespace std;

int main()
{

    int i, num1, num2, min, hcf = 1;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    min = (num1 > num2) ? num2 : num1;

    for (i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF of " << num1 << " and " << num2 << ": " << hcf << endl;

    return 0;
}