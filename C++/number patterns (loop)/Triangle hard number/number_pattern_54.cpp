// Number pattern 54

/*

    N = 12345

    12345
    2345
    345
    45
    5

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int digits, placeValue, firstDigit, n;

    cout << "Enter the value of n: ";
    cin >> n;

    while (n > 0)
    {
        cout << n << endl;

        digits = log10(n);
        placeValue = pow(10, digits);
        firstDigit = (n / placeValue);

        n = n - (placeValue * firstDigit);
    }
    return 0;
}