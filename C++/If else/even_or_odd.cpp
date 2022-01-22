// Write a C++ program to check whether a number is even or odd.

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is Even number." << endl;
    }
    else
    {
        cout << n << " is Odd number." << endl;
    }

    return 0;
}