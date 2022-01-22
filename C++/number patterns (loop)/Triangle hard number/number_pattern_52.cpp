// Number pattern 52

/*

    1
    22
    333
    2222
    11111

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i <= n / 2)
            {
                cout << i;
            }
            else
            {
                cout << n - i + 1;
            }
        }
        cout << endl;
    }

    return 0;
}