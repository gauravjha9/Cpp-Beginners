// Write a C++ program to check whether a number is Strong number or not.

// Strong number is a special number whose sum of the factorial of digits is equal to the original number.

#include <iostream>
using namespace std;

int main()
{

    int i, n, temp, l, s = 0, fact;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;
    // while (n > 0)
    for (i = 1; n > 0; i++)
    {
        l = n % 10;
        fact = 1;
        while (l > 0)
        {
            fact *= l;
            l--;
        }
        s += fact;
        n /= 10;
    }
    if (s == temp)
    {
        cout << temp << " is Strong number" << endl;
    }
    else
    {
        cout << temp << " is not Strong number" << endl;
    }

    return 0;
}