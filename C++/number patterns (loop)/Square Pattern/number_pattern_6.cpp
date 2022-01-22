// Number Pattern 6

/*

    10101
    01010
    10101
    01010
    10101

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
            if (j % 2 == 1 && i % 2 == 1 || j % 2 == 0 && i % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}