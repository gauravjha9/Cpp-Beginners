// Number pattern 12

/*

    12345
    23456
    34567
    45678
    56789

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

    for (i = 0; i < r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << i + j;
        }
        cout << endl;
    }

    return 0;
}