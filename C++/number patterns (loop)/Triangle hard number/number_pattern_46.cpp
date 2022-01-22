// Number pattern 46

/*

    1
    21
    123
    4321
    12345

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            for (j = 1; j <= i; j++)
            {
                cout << j;
            }
        }
        else
        {
            for (j = i; j >= 1; j--)
            {
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}