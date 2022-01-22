// Number pattern 13

/*

    1  2  3  4  5
    6  7  8  9  10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, r, c, k;

    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    k = 1;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            // cout << k << "  ";
            printf("%-4d", k); // used to print an integer with 4 characters width

            k++;
        }
        cout << endl;
    }

    return 0;
}