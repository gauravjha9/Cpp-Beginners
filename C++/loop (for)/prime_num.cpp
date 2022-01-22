// Write a C program to check whether a number is Prime number or not.

// a number that is divisible only by itself and 1 (e.g. 2, 3, 5, 7, 11).

#include <iostream>
using namespace std;

int main()
{

    int i, n, flag = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag++;
        }
    }

    if (flag > 0 || n == 1)
    {
        cout << "It's not Prime number" << endl;
    }
    else
    {
        cout << "It's Prime number" << endl;
    }

    return 0;
}