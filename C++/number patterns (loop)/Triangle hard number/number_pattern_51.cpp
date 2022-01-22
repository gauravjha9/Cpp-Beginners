// Number pattern 51

/* 

    1
    3  2
    4  5  6
    10 9  8  7
    11 12 13 14 15

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, count, value;

    cout << "Enter the number of rows: ";
    cin >> n;

    count = 0;

    for (i = 1; i <= n; i++)
    {
        value = (i & 1) ? (count + 1) : (count + i);

        for (j = 1; j <= i; j++)
        {
            cout << value << " ";

            if (i & 1)
                value++;
            else
                value--;

            count++;
        }
        cout << endl;
    }

    return 0;
}