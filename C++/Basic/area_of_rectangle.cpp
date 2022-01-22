// Write a C++ program to enter length and breadth of a rectangle and find its area.

#include <iostream>
using namespace std;

int main()
{

    int l, w, area;

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    area = l * w;

    cout << "Area of rectangle: " << area << endl;

    return 0;
}