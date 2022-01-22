// Write a C++ program to check whether a number is Armstrong number or not.

// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, d, mod = 0, m = 0, s = 0, temp;

    cout << "Enter a number: ";
    cin >> n;

    int a = (int)log10(n) + 1;

    temp = n;

    //USING WHILE LOOP
    // while (n > 0)
    // {
    //     mod = n % 10;
    //     s += pow(mod, a);
    //     n /= 10;
    // }

    //USING FOR LOOP

    for (int i = n; i > 0; i--)
    {
        mod = n % 10;
        s += pow(mod, a);
        n /= 10;
    }

    if (temp == s)
    {
        cout << temp << " is an armstrong number." << endl;
    }
    else
    {
        cout << temp << " is not an armstrong number." << endl;
    }

    return 0;
}