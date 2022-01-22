// Write a C++ program to check whether a number is negative, positive or zero.

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << n << " is negative" << endl;
        }
    else
    {
        if (n == 0)
        {
            cout << n << " is zero" << endl;
        }
        else
        {
            cout << n << " is positive" << endl;
        }
    }

    return 0;
}