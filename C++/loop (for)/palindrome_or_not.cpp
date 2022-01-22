// Write a C++ program to check whether a number is palindrome or not.

#include <iostream>
using namespace std;

int main()
{

    int i, n, temp, rev = 0;

    cout << "Enter number: ";
    cin >> n;

    temp = n;
    for (int i = n; n > 0; i--)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (rev == temp)
    {
        cout << temp << " is palindrome" << endl;
    }
    else
    {
        cout << temp << " is not a palindrome" << endl;
    }

    return 0;
}