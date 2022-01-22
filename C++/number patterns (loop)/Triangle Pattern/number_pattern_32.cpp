// Number pattern 32

/*

    1
    23
    345
    4567
    56789

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
        k = i;
        for (j = 1; j <= i; j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }

    return 0;
}