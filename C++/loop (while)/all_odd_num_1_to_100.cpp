// Write a C++ program to print all odd number between 1 to 100.

#include <iostream>
using namespace std;

int main()
{

    int i = 1, n;

    cout << "Enter upper limit number: ";
    cin >> n;

    cout << "Odd numbers between " << i << " to " << n << endl;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}