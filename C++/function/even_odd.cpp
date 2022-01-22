// Write a C++ program to check whether a number is even or odd using functions.

#include <iostream>
using namespace std;

int isEven(int);

int main()
{

    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isEven(n))
    {
        cout << n << " is Even";
    }
    else
    {
        cout << n << " is Odd";
    }

    return 0;
}

int isEven(int n)
{
    return !(n & 1);
}