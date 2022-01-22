// Number pattern 5

/*

    11111
    11111
    11011
    11111
    11111

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, r, c;
    int centerRow, centerCol;

    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    centerRow = (r + 1) / 2;
    centerCol = (c + 1) / 2;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (centerRow == i && centerCol == j)
            {
                cout << "0";
            }
            else if (i == 1 || i == r || j == 1 || j == c)
            {
                cout << "1";
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