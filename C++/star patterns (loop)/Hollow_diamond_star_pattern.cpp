// Hollow Diamond Star Pattern

/*

    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, s, c;

    cout << "Enter the number of rows: ";
    cin >> n;

    // c = n;

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= (i * 2) - 2; j++)
        {
            cout << " ";
        }
        for (j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= (n * 2) - (i * 2); j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}