// Write a C++ program to check Most Significant Bit (MSB) of a number is set or not.

#include <iostream>
using namespace std;

int main()
{
    int n, bits;
    cout << "Enter number: ";
    cin >> n;

    bits = sizeof(int) * 8;
    cout << bits << endl;

    return 0;
}