// Write a C++ program to swap first and last digits of a number.

#include <iostream>
using namespace std;

int main()
{

    int temp, n, swap, rev = 0, f, l;

    cout << "Enter number: ";
    cin >> n;

    temp = n;

    l = n % 10;

    for (int i = n; n >= 10; i--)
    {
        n /= 10;
    }
    f = n;
    n = temp / 10;

    for (int i = n; n >= 10; i--)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    swap = l;

    for (int i = n; rev > 0; i--)
    {
        swap = swap * 10 + rev % 10;
        rev /= 10;
    }
    swap = swap * 10 + f;
    cout << "Number after swapping first and last digit: " << swap << endl;

    return 0;
}