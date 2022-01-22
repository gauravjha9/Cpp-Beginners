// Write a C++ program to print all alphabets from a to z.

#include <iostream>
using namespace std;

int main()
{

    char ch = 'a';

    cout << "Alphabets are: ";
    while (ch <= 'z')
    {
        cout << ch << " ";
        ch++;
    }

    return 0;
}