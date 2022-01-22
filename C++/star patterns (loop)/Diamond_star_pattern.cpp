// Diamond Star Pattern

/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, s, c;

    cout << "Enter the number of rows: ";
    cin >> n;

    s = n;
    c = 1;

    for (int i = 1; i < n * 2; i++)
    {
        for (j = 1; j < s; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= (c * 2) - 1; j++)
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