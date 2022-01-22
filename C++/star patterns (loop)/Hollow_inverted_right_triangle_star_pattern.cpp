// Hollow Inverted Right Triangle Star Pattern

/*

    *****
    *  *
    * *
    **
    *

*/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            if (i == 1 || i == n || j == n || i == j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}