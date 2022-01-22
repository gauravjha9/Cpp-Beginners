// Number pattern 34

/*

    13579
    3579
    579
    79
    9

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i < n * 2; i += 2)
    {
        for (j = i; j < n * 2; j += 2)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}