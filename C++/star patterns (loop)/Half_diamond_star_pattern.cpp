// Half Diamond Star Pattern

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

    int n, c;

    cout << "Enter the number of rows: ";
    cin >> n;

    c = 1;

    for (int i = 1; i <= n * 2; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "*";
        }
        if (i < n)
        {
            c++;
        }
        else
        {
            c--;
        }
        cout << endl;
    }

    return 0;
}