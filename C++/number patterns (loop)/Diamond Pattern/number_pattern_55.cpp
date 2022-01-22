// Number pattern 55

/*

    1
    12
    123
    1234
    12345
    1234
    123
    12
    1

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, k;

    cout << "Enter the value of n: ";
    cin >> n;

    k = 1;

    for (i = 1; i < n * 2; i++)
    {
        for (j = 1; j <= k; j++)
        {
            cout << j;
        }
        if (i < n)
        {
            k++;
        }
        else
        {
            k--;
        }
        cout << endl;
    }

    return 0;
}