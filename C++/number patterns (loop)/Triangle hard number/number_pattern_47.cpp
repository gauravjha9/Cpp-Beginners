// Number pattern 47

/*

    1
    23
    4567
    89123456
    7891234567891234

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, c, value;

    cout << "Enter the number of rows: ";
    cin >> n;

    c = 1;
    value = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (value > 9)
            {
                value = 1;
            }
            cout << value << "  ";
            value++;
        }
        cout << endl;
        c *= 2;
    }

    return 0;
}