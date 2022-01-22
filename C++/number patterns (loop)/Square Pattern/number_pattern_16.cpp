// Number pattern 16

/*

    12345
    23451
    34521
    45321
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
        for (j = i; j <= c; j++)
        {
            cout << j;
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}