// Write a C++ program to check whether year is leap year or not using conditional operator.

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter year: ";
    cin >> n;

    (n % 4 == 0) ? cout << n << " is Leap Year" : cout << n << " is not a Leap Year" << endl;

    return 0;
}