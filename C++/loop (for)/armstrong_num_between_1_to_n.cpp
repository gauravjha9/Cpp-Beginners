// Write a C++ program to print all Armstrong numbers between 1 to n.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int l, n, temp, mod, s;

    cout << "Enter lower limit: ";
    cin >> l;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = l; i <= n; i++)
    {
        temp = i;
        s = 0;
        int a = (int)log10(temp) + 1;
        while (temp > 0)
        {
            mod = temp % 10;
            s += pow(mod, a);
            temp /= 10;
        }
        if (s == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}