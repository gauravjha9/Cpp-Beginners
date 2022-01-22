// Number pattern 22

/*

    11111
    2222
    333
    44
    5

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
        for (j = i; j <= n; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}