// Number pattern 8

/*

    10001
    01010
    00100
    01010
    10001

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, r, c;

    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of cols: ";
    cin >> c;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (i == j || j == (c + 1) - i)
            {
                cout << "1";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}