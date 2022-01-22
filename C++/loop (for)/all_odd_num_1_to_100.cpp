// Write a C++ program to print all odd number between 1 to 100.

#include <iostream>
using namespace std;

int main()
{

    int i, n;

    cout << "Enter upper limit number: ";
    cin >> n;

    cout << "All Odd number between 1 to " << n << ": ";
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}