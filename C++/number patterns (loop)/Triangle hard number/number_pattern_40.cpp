// Number pattern 40

/*

    1
    24
    135
    2468
    13579

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, k;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            k = 1;
        }
        else
        {
            k = 2;
        }

        for (j = 1; j <= i; j++)
        {
            cout << k;
            k += 2;
        }
        cout << endl;
    }

    return 0;
}