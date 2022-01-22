// Write a C++ program to check whether a character is uppercase or lowercase alphabet.

#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "'" << ch << "'"
             << " is lowercase alphabet" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "'" << ch << "'"
             << " is uppercase alphabet" << endl;
    }
    else
    {
        cout << "'" << ch << "'"
             << " is not an alphabet" << endl;
    }

    return 0;
}