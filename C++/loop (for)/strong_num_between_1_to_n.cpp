// Write a C++ program to print all Strong numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, temp, l, s, fact;

    cout << "Enter upper limit number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        temp = i;
        s = 0;

        while (temp > 0)
        {
            l = temp % 10;
            fact = 1;
            for (j = 1; j <= l; j++)
            {
                fact *= j;
            }
            s += fact;
            temp /= 10;
        }
        if (i == s)
        {
            cout << i << " ";
        }
    }

    return 0;
}