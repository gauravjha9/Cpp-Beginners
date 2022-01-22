// X Star Pattern

/*

*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, c;

    cout << "Enter the number of rows: ";
    cin >> n;

    c = n * 2 - 1;

    for (i = 1; i <= c; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (j == i || (j == c - i + 1))
            {
                cout << "*";
            }
            else
            {
                cout << "_";
            }
        }
        cout << endl;
    }

    return 0;
}