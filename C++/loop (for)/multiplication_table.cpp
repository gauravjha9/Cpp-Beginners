// Write a C++ program to print multiplication table of any number.

#include <iostream>
using namespace std;

int main()
{

    int i, n;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
