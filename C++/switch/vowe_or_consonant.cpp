// Write a C++ program to check whether an alphabet is vowel or consonant using switch case.

#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
        cout << "'" << ch << "'"
             << " is vowel" << endl;
        break;
    case 'e':
        cout << "'" << ch << "'"
             << " is vowel" << endl;
        break;
    case 'i':
        cout << "'" << ch << "'"
             << " is vowel" << endl;
        break;
    case 'o':
        cout << "'" << ch << "'"
             << " is vowel" << endl;
        break;
    case 'u':
        cout << "'" << ch << "'"
             << " is vowel" << endl;
        break;
    case 'A':
        cout << "'" << ch << "'"
             << " is vowel" << endl;
        break;
    case 'E':
        cout << "'" << ch << "'"
             << " is vowel" << endl;
        break;
    case 'I':
        cout << "'" << ch << "'"
             << " is vowel" << endl;
        break;
    case 'O':
        cout << "'" << ch << "'"
             << " is vowel" << endl;
        break;
    case 'U':
        cout << "'" << ch << "'"
             << " is vowel" << endl;
        break;
    default:
        cout << "'" << ch << "'"
             << " is constant" << endl;
    }

    return 0;
}