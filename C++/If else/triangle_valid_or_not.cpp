// Write a C++ program to input all sides of a triangle and check whether triangle is valid or not.

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

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        cout << "Triangle is valid";
    }
    else
    {
        cout << "Triangle is not valid";
    }

    return 0;
}