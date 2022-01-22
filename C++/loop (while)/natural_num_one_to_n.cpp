// Write a C++ program to print all natural numbers from 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int n, i;

    cout << "Enter upper limit: ";
    cin >> n;

    i = 1;
    while (n >= i)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}