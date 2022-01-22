// Write a C++ program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "Enter first side: ";
    cin >> a;
    cout << "Enter second side: ";
    cin >> b;
    cout << "Enter third side: ";
    cin >> c;

    if (a == b && b == c)
    {
        cout << "Triangle is equilateral triangle" << endl;
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Triangle is isosceles triangle" << endl;
    }
    else
    {
        cout << "Triangle is scalene triangle" << endl;
    }

    return 0;
}