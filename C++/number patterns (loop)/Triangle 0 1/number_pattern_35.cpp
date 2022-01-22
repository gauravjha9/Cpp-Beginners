// Number pattern 35

/*

    1
    10
    101
    1010
    10101

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}