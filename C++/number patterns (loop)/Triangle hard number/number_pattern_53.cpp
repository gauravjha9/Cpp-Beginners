// Number pattern 53

/*

    N = 12345

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
    int i, j, n, a;

    cout << "Enter the number of rows: ";
    cin >> n;

    while (n != 0)
    {
        cout << n << endl;
        n /= 10;
    }

    return 0;
}