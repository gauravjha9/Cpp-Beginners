// Write a C++ program to print all strong numbers between given interval using functions.

#include <iostream>
using namespace std;

void printStrong(int, int);
int isStrong(int);

int main()
{

    int a, b;

    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    printStrong(a, b);

    return 0;
}

void printStrong(int x, int y)
{

    while (x <= y)
    {
        if (isStrong(x))
        {
            cout << x << " ";
        }
        x++;
    }
}

int isStrong(int n)
{
    int lastDigit, fact, s = 0, temp;
    temp = n;
    while (n > 0)
    {
        fact = 1;
        lastDigit = n % 10;
        for (int i = 1; i <= lastDigit; i++)
        {
            fact *= i;
        }

        s += fact;
        n /= 10;
    }
    if (temp == s)
    {
        return 1;
    }
    return 0;
}