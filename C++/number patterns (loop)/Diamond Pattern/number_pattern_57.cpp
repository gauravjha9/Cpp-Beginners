// Number pattern 57

/*

    1
    121
    12321
    1234321
    123454321
    1234321
    12321
    121
    1

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        for (j = (n - i - 1); j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}