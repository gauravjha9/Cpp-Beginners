// Write a C++ program to find sum of first and last digit of a number.

#include <iostream>
using namespace std;

int main()
{

    int n, fd, ld, s;

    cout << "Enter number: ";
    cin >> n;

    ld = n % 10;

    for (int i = n; n >= 10; i--)
    {
        n /= 10;
    }

    fd = n;

    s = fd + ld;

    cout << "Sum of First and Last Digit: " << s;

    return 0;
}