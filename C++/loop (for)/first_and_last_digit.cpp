// Write a C++ program to find first and last digit of a number.

#include <iostream>
using namespace std;

int main()
{

    int n, fd, ld;

    cout << "Enter number: ";
    cin >> n;

    ld = n % 10;

    for (int i = n; n >= 10; i--)
    {
        n = n / 10;
    }

    fd = n;
    cout << "First Digit: " << n << endl;

    cout << "Last Digit: " << ld << endl;

    return 0;
}