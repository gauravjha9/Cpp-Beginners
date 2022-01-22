// Number pattern 37

/*

    1
    01
    010
    1010
    10101

*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, n, k;

    cout << "Enter the number of rows: ";
    cin >> n;

    k = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (k % 2 == 0)
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
            k++;
        }
        cout << endl;
    }

    return 0;
}