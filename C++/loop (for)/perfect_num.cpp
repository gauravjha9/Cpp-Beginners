// Write a C++ program to check whether a number is Perfect number or not.

// Perfect number, a positive integer that is equal to the sum of its proper divisors.

#include <iostream>
using namespace std;

int main()
{

    int n, s = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    if (s == n)
    {
        cout << n << " is Perfect number" << endl;
    }
    else
    {
        cout << n << " is not Perfect number" << endl;
    }

    return 0;
}