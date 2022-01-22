// Number pattern 44

/*

    1
    32
    4543
    567654
    67898765

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
        k = i + 1;
        for (j = 3; j <= i; j++)
        {
            cout << k;
            k++;
        }
        for(j = i*2-1; j>=i; j--){
            cout<<j;
        }
        cout << endl;
    }

    return 0;
}