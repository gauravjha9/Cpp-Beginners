// Write a C++ program to print all natural numbers in reverse (from n to 1).

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
        cout << n << " ";
        n--;
    }

    return 0;
}