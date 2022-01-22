// Hollow Square Star Pattern with Diagonal
/*
    *****
    ** **
    * * *
    ** **
    *****
*/

#include <iostream>
// #include <unistd.h>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n || i == j || j == (n - i + 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        // sleep(1);
        cout << endl;
    }

    return 0;
}