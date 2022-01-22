// Eight Star Pattern

/*

 ***
*   *
*   *
*   *
 ***
*   *
*   *
*   *
 ***

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i < n * 2; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 && (j == 1 || j == n) || i == n && (j == 1 || j == n) || i == n * 2 - 1 && (j == 1 || j == n))
            {
                cout << " ";
            }
            else if (i == 1 || i == n || i == (n * 2) - 1 || j == 1 || j == n)
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