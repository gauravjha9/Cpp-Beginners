// Write a C++ program to check whether a number is prime, Armstrong or perfect number using functions.

#include <iostream>
#include <math.h>
using namespace std;
int isPrime(int);
int isArmstrong(int);
int isPerfect(int);

int main()
{

    int n, prime, armstrong, perfect;

    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << "It's Prime number" << endl;
    }
    else
    {
        cout << "It's not prime number" << endl;
    }

    if (isArmstrong(n))
    {
        cout << "It's Armstrong number" << endl;
    }
    else
    {
        cout << "It's not Armstrong number" << endl;
    }

    if (isPerfect(n))
    {
        cout << "It's Perfect number" << endl;
    }
    else
    {
        cout << "It's not Perfect number" << endl;
    }

    return 0;
}

int isPrime(int n)
{
    int i;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int n)
{
    int i, lg, cube, s = 0, digits, temp;

    temp = n;
    while (n > 0)
    {
        lg = n % 10;
        cube = lg * lg * lg;
        s += cube;
        n /= 10;
    }

    return (temp == s);
}

int isPerfect(int n)
{
    int i, s = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }

    return (s == n);
}