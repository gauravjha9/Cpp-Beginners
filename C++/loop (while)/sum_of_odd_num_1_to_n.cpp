// Write a C++ program to find sum of all odd numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int i = 1, n, s = 0;

    cout << "Enter upper limit number: ";
    cin >> n;

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            s += i;
        }
        i++;
    }
    cout << "Sum of all Odd number between 1 to " << n << ": " << s << endl;

    return 0;
}