// Write a C++ program to find sum of all odd numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int i, n, s = 0;

    cout << "Enter upper limit: ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            s += i;
        }
    }
    cout << "Sum of all odd number between 1 to " << n << ": " << s;

    return 0;
}