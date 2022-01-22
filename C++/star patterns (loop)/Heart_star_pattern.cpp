// Heart Star Pattern

/*

  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
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

    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = n / 2; i <= n; i += 2)
    {
        for (j = 1; j < n - i; j += 2)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= (n * 2) - (i * 2 - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cin>>n;

    return 0;
}