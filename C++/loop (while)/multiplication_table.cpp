// Write a C++ program to print multiplication table of any number.

#include <iostream>
using namespace std;

int main()
{

    int n, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (i <= 10)
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }

    return 0;
}