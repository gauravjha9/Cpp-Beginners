// Write a C++ program to check whether a number is even or odd using conditional operator.

#include <iostream>
using namespace std;

int main()
{

    int n, x;

    cout << "Enter a number: ";
    cin >> n;

    (n % 2 == 0) ? cout << n << " is even." : cout << n << " is odd.";

    return 0;
}