// Plus Star Pattern

/*

    +
    +
    +
    +
+++++++++
    +
    +
    +
    +

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i < n * 2; i++)
    {
        if (i == n)
        {
            for (j = 1; j < n * 2; j++)
            {
                cout << "+";
            }
        }
        else
        {
            for (j = 1; j < n; j++)
            {
                cout << " ";
            }
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}