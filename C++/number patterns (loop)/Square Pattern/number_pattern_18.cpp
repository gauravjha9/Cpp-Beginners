// Number pattern 18

/*

    5 5 5 5 5 5 5 5 5
    5 4 4 4 4 4 4 4 5
    5 4 3 3 3 3 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 2 1 2 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 3 3 3 3 4 5
    5 4 4 4 4 4 4 4 5
    5 5 5 5 5 5 5 5 5

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter the N value: ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = n; j > i; j--)
        {
            cout << j;
        }
        for (j = 1; j <= (i * 2 - 1); j++)
        {
            cout << i;
        }
        for (j = i + 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    for (i = 1; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            cout << j;
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            cout << i + 1;
        }
        for (j = i + 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}