// Write a C++ program to enter length and breadth of a rectangle and find its perimeter.

#include <iostream>
using namespace std;

int main()
{

    int l, b, peri;

    cout << "Enter the length and breadth of a rectangle: ";
    cin >> l >> b;

    peri = 2 * (l + b);
    cout << "Perimeter of rectangle = " << peri << endl;

    return 0;
}