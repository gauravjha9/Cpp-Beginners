// Number pattern 59

/* 

1       1
 2     2
  3   3
   4 4
    5
   4 4
  3   3
 2     2
1       1

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, c;

    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << " ";
        }
        cout << i;
        for (j = 1; j <= (n - i) * 2 - 1; j++)
        {
            cout << " ";
        }
        if (i != n)
        {
            cout << i;
        }
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = i; j > 1; j--)
        {
            cout << " ";
        }
        cout << i;
        for (j = 1; j <= ((n - i) * 2 - 1); j++)
        {
            cout << " ";
        }
        cout << i;
        cout << endl;
    }

    return 0;
}