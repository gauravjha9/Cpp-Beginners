// Number pattern 7

/*
    11011
    11011
    00000
    11011
    11011

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, r, c;
    int centerRow, centerCol;

    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of cols: ";
    cin >> c;

    centerRow = (r + 1) / 2;
    centerCol = (c + 1) / 2;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (i == centerRow || j == centerCol)
            {
                cout << "0";
            }
            else if ((c % 2 == 0 && centerCol + 1 == j) || (r % 2 == 0 && centerRow + 1 == i))
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }

    return 0;
}