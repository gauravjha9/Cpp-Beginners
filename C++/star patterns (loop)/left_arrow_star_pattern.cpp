// Left Arrow Star Pattern

/*

    *****
   ****
  ***
 **
*
 **
  ***
   ****
    *****

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, c, s;

    cout << "Enter the number of rows: ";
    cin >> n;

    s = n;
    c = 1;

    for (i = 1; i < n * 2; i++)
    {
        for (j = 1; j < s; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= s; j++)
        {
            cout << "*";
        }
        if (i < n)
        {
            s--;
        }
        else
        {
            s++;
        }
        cout << endl;
    }

    return 0;
}