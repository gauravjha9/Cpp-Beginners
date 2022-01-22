// Number pattern 1

/*

    11111
    11111
    11111
    11111
    11111

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
        for (j = 1; j <= c; j++)
        {
            cout << "1";
        }
        cout << endl;
    }

    return 0;
}