// Write a C++ program to find sum of all natural numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int i, n, s = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        s += i;
    }
    cout << "Sum of all natural number: " << s;

    return 0;
}