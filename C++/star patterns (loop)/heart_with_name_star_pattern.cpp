// Heart Star Pattern with Name

/*

  *****     *****
 *******   *******
********* *********
****Hello world****
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
#include <string.h>
using namespace std;

int main()
{

    int i, j, n, len;
    char name[50];

    cout << "Enter the name: ";
    gets(name);

    cout << "Enter the number of rows: ";
    cin >> n;

    len = strlen(name);

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
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        if (i == n)
        {
            for (j = 1; j <= (n * 2 - len) / 2; j++)
            {
                cout << "*";
            }

            cout << name;

            for (j = 1; j < (n * 2 - len) / 2; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (j = 1; j <= (i * 2) - 1; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}