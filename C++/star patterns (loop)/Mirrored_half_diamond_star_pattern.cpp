// Mirrored Half Diamond Star Pattern

/*

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *

*/

#include <iostream>
using namespace std;

int main()
{

    int n, s, c;

    cout << "Enter the number of rows: ";
    cin >> n;

    s = n;
    c = 1;

    for (int i = 1; i <= n * 2; i++)
    {
        for (int j = 1; j < s; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= c; j++)
        {
            cout << "*";
        }
        if (i < n)
        {
            s--;
            c++;
        }
        else
        {
            s++;
            c--;
        }
        cout << endl;
    }

    return 0;
}