// Write a C++ program to check whether a number is even or odd using switch case.

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter a number: ";
    cin >> n;

    switch (n % 2)
    {
    case 0:
        cout << "Even number" << endl;
        break;
    case 1:
        cout << "Odd number" << endl;
        break;
    }

    return 0;
}