// Write a C++ program to calculate sum of digits of a number.

#include <iostream>
using namespace std;

int main()
{

    int i, n, l, s = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (i = n; n > 0; i--)
    {
        l = n % 10;
        s += l;
        n /= 10;
    }
    cout << "Sum of digits: " << s << endl;

    return 0;
}