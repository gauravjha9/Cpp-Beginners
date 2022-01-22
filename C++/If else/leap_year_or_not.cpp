// Write a C++ program to check whether a year is leap year or not.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter year: ";
    cin >> n;

    if (n % 4 == 0)
    {
        cout << n << " is a leap year" << endl;
    }
    else
    {
        cout << n << " is not leap year" << endl;
    }

    return 0;
}