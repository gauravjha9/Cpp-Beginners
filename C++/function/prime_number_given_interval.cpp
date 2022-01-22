// Write a C++ program to find all prime numbers between given interval using functions.

#include <iostream>
using namespace std;

int isPrime(int);
void printPrimes(int, int);

int main()
{
    int a, b;

    cout << "Enter lower value: ";
    cin >> a;
    cout << "Enter upper value: ";
    cin >> b;

    printPrimes(a, b);

    return 0;
}

void printPrimes(int x, int y)
{
    while (x <= y)
    {
        if (isPrime(x))
        {
            cout << x << " ";
        }
        x++;
    }
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