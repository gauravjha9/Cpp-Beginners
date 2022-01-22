// Number pattern 49

/*

    1  
    2  6
    3  7  10
    4  8  11 13
    5  9  12 14 15

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, diff, value;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        diff = n - 1;
        value = i;
        for (j = 1; j <= i; j++)
        {
            cout << value << " ";
            value += diff;
            diff--;
        }
        cout << endl;
    }

    return 0;
}