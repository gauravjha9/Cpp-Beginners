//Write a C++ program to calculate factorial of a number.

#include <iostream>
using namespace std;

int main()
{

    int i, n, f = 1;

    cout << "Enter number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        f *= i;
    }

    cout << "Factorial of " << n << ": " << f << endl;

    return 0;
}