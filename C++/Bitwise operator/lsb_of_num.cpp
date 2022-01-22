// Write a C++ program to check Least Significant Bit (LSB) of a number is set or not.

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n & 1)
    {
        cout << "Least Significant Bit of " << n << " is set (1)" << endl;
    }
    else
    {
        cout << "Least Significant Bit of " << n << " is set (0)" << endl;
    }

    return 0;
}