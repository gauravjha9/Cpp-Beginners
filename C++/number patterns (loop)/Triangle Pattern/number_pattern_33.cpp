// Number pattern 33

/*

    56789
    4567
    345
    23
    1

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, k;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = n; i >= 1; i--)
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