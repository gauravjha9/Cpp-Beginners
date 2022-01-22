// Write a C++ program to print all perfect numbers between given interval using functions.

#include <iostream>
using namespace std;

void printPerfect(int, int);
int isPerfect(int);

int main()
{
    int a, b;

    cout << "Enter the 1st number: ";
    cin >> a;
    cout << "Enter the 2nd number: ";
    cin >> b;

    printPerfect(a, b);

    return 0;
}

void printPerfect(int x, int y)
{
    while (x <= y)
    {
        if (isPerfect(x))
        {
            cout << x << " ";
        }
        x++;
    }
}

int isPerfect(int n)
{
    int s = 0, temp;

    temp = n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    if (temp == s)
    {
        return 1;
    }
    return 0;
}