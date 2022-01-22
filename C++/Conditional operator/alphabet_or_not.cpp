// Write a C++ program to check whether character is an alphabet or not using conditional operator.

#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') ? cout << "It is an ALPHABET" : cout << "It is not an ALPHABET";

    return 0;
}