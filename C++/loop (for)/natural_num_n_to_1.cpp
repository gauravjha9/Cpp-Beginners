// Write a C++ program to print all natural numbers in reverse (from n to 1).

#include <iostream>
using namespace std;

int main()
{

    int i, n;

    cout << "Enter upper digit: ";
    cin >> n;

    cout << "Natural number from " << n << " to 1: ";
    for (i = n; i >= 1; i--)
    {
        cout << i << " ";
    }

    return 0;
}