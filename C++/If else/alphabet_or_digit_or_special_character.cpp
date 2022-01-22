// Write a C++ program to input any character and check whether it is alphabet, digit or special character.

#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "'" << ch << "'"
             << " is an alphabet";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is digit";
    }
    else
    {
        cout << ch << " is special character";
    }

    return 0;
}