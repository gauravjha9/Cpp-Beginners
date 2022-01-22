// Write a C++ program to print all ASCII character with their values.

#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 255; i++)
    {
        cout << "ASCII value of character: " << i << ": " << (char)i << endl;
    }

    return 0;
}