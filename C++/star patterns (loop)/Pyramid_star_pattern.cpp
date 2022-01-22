// Pyramid Star Pattern

/*

    *
   ***
  *****
 *******
*********

*/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= ((i * 2) - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}