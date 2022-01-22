// Number pattern 45

/*

    1
    2  3
    4  5  6
    7  8  9  10
    11 12 13 14 15

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, k;

    cout << "Enter the number of rows: ";
    cin >> n;

    k = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << k << "  ";
            // printf("%3d", k);
            k++;
        }
        cout << endl;
    }

    return 0;
}