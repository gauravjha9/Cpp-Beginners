// Write a C++ program to calculate product of digits of a number.

#include <iostream>
using namespace std;

int main()
{

    int i, n, l, p = 1;

    cout << "Enter number: ";
    cin >> n;

    for (i = n; n > 0; i--)
    {
        l = n % 10;
        p *= l;
        n /= 10;
    }

    cout << "Product of digits: " << p << endl;
    return 0;
}
