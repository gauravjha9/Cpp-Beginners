// Number pattern 56

/*

    1
    123
    12345
    1234567
    123456789
    1234567
    12345
    123
    1

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, k;

    cout << "Enter the value of n: ";
    cin >> n;

    k = 1;

    for (i = 1; i < n * 2; i++)
    {
        for (j = 1; j <= k; j++)
        {
            cout << j;
        }

        if (i < n)
        {
            k += 2;
        }
        else
        {
            k -= 2;
        }
        cout << endl;
    }

    return 0;
}