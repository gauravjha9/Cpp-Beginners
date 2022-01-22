// Write a C++ program to print Fibonacci series up to n terms.

// a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers. The simplest is the series 1, 1, 2, 3, 5, 8, etc.

#include <iostream>
using namespace std;

int main()
{
    int i, n, a = 0, b = 1, c = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci series: ";
    for (i = 1; i <= n; i++)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
}