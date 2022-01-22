// Write a C++ program to input week number and print week day.

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter month number: ";
    cin >> n;

    if (n == 1)
    {
        cout << "It contains 31 days.";
    }
    else if (n == 2)
    {
        cout << "It contains 28/29 days";
    }
    else if (n == 3)
    {
        cout << "It contains 31 days";
    }
    else if (n == 4)
    {
        cout << "It contains 30 days";
    }
    else if (n == 5)
    {
        cout << "It contains 31 days";
    }
    else if (n == 6)
    {
        cout << "It contains 30 days";
    }
    else if (n == 7)
    {
        cout << "It contains 31 days";
    }
    else if (n == 8)
    {
        cout << "It contains 31 days";
    }
    else if (n == 9)
    {
        cout << "It contains 30 days";
    }
    else if (n == 10)
    {
        cout << "It contains 31 days";
    }
    else if (n == 11)
    {
        cout << "It contains 30 days";
    }
    else if (n == 12)
    {
        cout << "It contains 31 days";
    }
    return 0;
}