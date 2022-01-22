// Number pattern 41

/*

    1
    131
    13531
    1357531
    135797531 

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, k;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i * 2 - 1; j += 2)
        {
            cout << j;
        }
        for (j = (i - 1) * 2 - 1; j >= 1; j-=2)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}