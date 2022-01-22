// Write a C++ program to enter a number and print it in words.

#include <iostream>
using namespace std;

int main()
{

    int i, n, rev = 0;

    cout << "Enter number: ";
    cin >> n;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    n = rev;

    for (i = n; n > 0; i--)
    {
        switch (n % 10)
        {
        case 0:
            cout << "zero ";
            break;
        case 1:
            cout << "one ";
            break;
        case 2:
            cout << "two ";
            break;
        case 3:
            cout << "three ";
            break;
        case 4:
            cout << "four ";
            break;
        case 5:
            cout << "five ";
            break;
        case 6:
            cout << "six ";
            break;
        case 7:
            cout << "seven ";
            break;
        case 8:
            cout << "eight ";
            break;
        case 9:
            cout << "nine ";
            break;
        }
        n /= 10;
    }

    return 0;
}