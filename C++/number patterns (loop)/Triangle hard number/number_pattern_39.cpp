// Number pattern 39

/*

    1
    123
    12345
    1234567
    123456789

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
        for (j = 1; j <= i * 2 - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
