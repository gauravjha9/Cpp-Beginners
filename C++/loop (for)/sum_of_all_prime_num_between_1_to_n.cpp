// Write a C++ program to find sum of all prime numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, flag, s = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 2; i <= n; i++)
    {
        flag = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            s += i;
        }
    }
    cout << "Sum of prime numbers between 1-" << n << ": " << s << endl;

    return 0;
}