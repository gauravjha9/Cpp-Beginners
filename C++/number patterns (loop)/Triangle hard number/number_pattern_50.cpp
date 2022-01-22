// Number pattern 50

/*

    1
    2  4
    7  11 16
    22 29 37 46
    56 67 79 92 106

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, diff, value;

    cout << "Enter the number of rows: ";
    cin >> n;

    diff = 1;
    value = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << value << " ";
            value += diff;
            diff++;
        }
        cout << endl;
    }

    return 0;
}