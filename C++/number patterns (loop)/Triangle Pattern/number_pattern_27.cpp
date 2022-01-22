// Number pattern 27

/*

    54321
    4321
    321
    21
    1

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}