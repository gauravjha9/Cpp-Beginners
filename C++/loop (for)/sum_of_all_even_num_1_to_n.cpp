// Write a C++ program to find sum of all even numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int i, n, s = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of all even number between 1 to " << n << ": ";
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s += i;
        }
    }
    cout << s;

    return 0;
}