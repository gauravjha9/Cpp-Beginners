// Write a C++ program to print all natural numbers from 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int i, n;

    cout << "Enter upper digit: ";
    cin >> n;

    cout << "Natural number from 1 to " << n << ": ";
    for (i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    return 0;
}