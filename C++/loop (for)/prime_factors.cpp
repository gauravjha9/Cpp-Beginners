// Write a C program to find all prime factors of a number.

#include <iostream>
using namespace std;

int main()
{

    int i, n, flag = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime factors of " << n << ": ";
    for (i = 2; i <= n; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0 && n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}