// Write a C++ program to enter a number and print its reverse.

#include <iostream>
using namespace std;

int main()
{

    int n, rev = 0;

    cout << "Enter number: ";
    cin >> n;

    for (int i = n; n > 0; i--)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    cout << "Reverse number: " << rev << endl;

    return 0;
}