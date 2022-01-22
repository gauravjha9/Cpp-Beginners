// Write a C++ program to find all factors of a number.

#include <iostream>
using namespace std;

int main()
{

    int i, n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Factors of " << n << ": ";
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}