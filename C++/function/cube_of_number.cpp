// Write a C++ program to find cube of any number using function.

#include <iostream>
using namespace std;
int cube(int);

int main()
{

    int n, c;

    cout << "Enter a number: ";
    cin >> n;

    c = cube(n);

    cout << "cube of " << n << ": " << c << endl;

    return 0;
}

int cube(int n)
{
    return n * n * n;
}
