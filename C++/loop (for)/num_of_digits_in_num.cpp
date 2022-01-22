// Write a C++ program to count number of digits in a number.

#include <iostream>
using namespace std;

int main()
{

    int i, n, flag = 0;

    cout << "Enter number: ";
    cin >> n;

    for (i = n; i >= 0; i--)
    {
        i /= 10;
        flag++;
    }
    cout << "Number of digits: " << flag << endl;

    return 0;
}