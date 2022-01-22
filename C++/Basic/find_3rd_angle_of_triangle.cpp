// Write a C++ program to enter two angles of a triangle and find the third angle.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter 1st angle: ";
    cin >> a;

    cout << "Enter 2nd angle: ";
    cin >> b;

    c = 180 - (a + b);

    cout << "Third angle: " << c;

    return 0;
}