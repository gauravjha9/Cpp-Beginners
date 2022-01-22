// Write a C++ program to print all Armstrong numbers between given interval using functions.

#include <iostream>
#include <math.h>
using namespace std;

void printArmstrong(int, int);
int isArmstrong(int);

int main()
{

    int a, b;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    printArmstrong(a, b);

    return 0;
}

void printArmstrong(int x, int y)
{
    while (x <= y)
    {
        if (isArmstrong(x))
        {
            cout << x << " ";
        }
        x++;
    }
}

int isArmstrong(int n)
{
    int lastDigit, cube, s = 0, temp;
    temp = n;

    while (n > 0)
    {
        lastDigit = n % 10;
        cube = pow(lastDigit, 3);
        s += cube;
        n /= 10;
    }
    if (temp == s)
    {
        return 1;
    }
    return 0;
}
