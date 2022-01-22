// Number pattern 42

/*

    2
    242
    24642
    2468642
    2468108642

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
        for (j = 2; j <= i * 2; j += 2)
        {
            cout << j;
        }
        for (j = (i * 2 - 2); j >= 1; j -= 2)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}