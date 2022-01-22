// Write a C++ program to count number of digits in a number.

#include <iostream>
using namespace std;

int main()
{

    int n, flag = 0;

    cout << "Enter number: ";
    cin >> n;

    while (n != 0)
    {
        n /= 10;
        flag++;
    }
    cout << "Number of digits: " << flag << endl;

    return 0;
}
