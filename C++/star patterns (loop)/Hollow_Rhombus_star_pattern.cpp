// Hollow Rhombus Star Pattern

/*

    *****
   *   *
  *   *
 *   *
*****

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, k, n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (k = 1; k <= n; k++)
        {
            if (i == 1 || i == n || k == 1 || k == n)
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