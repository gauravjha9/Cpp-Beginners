// Number pattern 17

/*

    12345
    21234
    32123
    43212
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
        for (j = i; j > 1; j--)
        {
            cout << j;
        }
        for (j = 1; j <= (c - i + 1); j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}