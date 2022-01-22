// Write a C++ program to print all Perfect numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, s = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        s = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                s += j;
            }
        }
        if (s == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}