// Number pattern 21

/*

    55555
    4444
    333
    22
    1

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}