// Number pattern 48

/*

    1        1
    12      21
    123    321
    1234  4321
    1234554321

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
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (j = 1; j <= (n * 2) - (i * 2); j++)
        {
            cout << " ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}