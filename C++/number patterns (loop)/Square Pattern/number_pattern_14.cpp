// Number pattern 14

/*

    55555
    54444
    54333
    54322
    54321

*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, r, c;

    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    for (i = 1; i <= r; i++)
    {
        for (j = c; j > c - i; j--)
        {
            cout << j;
        }
        for (j = 1; j <= c - i; j++)
        {
            cout << r - i + 1;
        }
        cout << endl;
    }

    return 0;
}