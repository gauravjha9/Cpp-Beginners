// Right Arrow Star Pattern

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

    int i, j, n, s, c;

    cout << "Enter the number of rows: ";
    cin >> n;

    s = 1;
    c = n;

    for (int i = 1; i < n * 2; i++)
    {
        for (int j = 1; j <= (s * 2) - 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= c; j++)
        {
            cout << "*";
        }
        if (i < n)
        {
            s++;
            c--;
        }
        else
        {
            s--;
            c++;
        }
        cout << endl;
    }

    return 0;
}
