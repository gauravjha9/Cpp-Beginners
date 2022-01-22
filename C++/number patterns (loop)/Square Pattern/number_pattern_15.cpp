// Number pattern 15

/*

    12345
    23455
    34555
    45555
    55555

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
        for (j = i; j <= c; j++)
        {
            cout << j;
        }
        for (j = 1; j < i; j++)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}