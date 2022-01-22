// Write a C++ program to find sum of all natural numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int i = 1, n, s = 0, j;

    cout << "Enter upper limit: ";
    cin >> n;

    j = i;
    while (i <= n)
    {
        s += i;
        i++;
    }
    cout << "Sum of natural number " << j << "-" << n << ": " << s;

    return 0;
}