// Write a C++ program to find frequency of each digit in a given integer.

#include <iostream>
using namespace std;

int main()
{

    int i, n, m, n0, n1, n2, n3, n4, n5, n6, n7, n8, n9;

    n0 = n1 = n2 = n3 = n4 = n5 = n6 = n7 = n8 = n9 = 0;
    cout << "Enter number: ";
    cin >> n;

    for (i = n; n > 0; i--)
    {
        m = n % 10;
        if (m == 0)
        {
            n0 += 1;
        }
        else if (m == 1)
        {
            n1 += 1;
        }
        else if (m == 2)
        {
            n2 += 1;
        }
        else if (m == 3)
        {
            n3 += 1;
        }

        else if (m == 4)
        {
            n4 += 1;
        }
        else if (m == 5)
        {
            n5 += 1;
        }
        else if (m == 6)
        {
            n6 += 1;
        }
        else if (m == 7)
        {
            n7 += 1;
        }
        else if (m == 8)
        {
            n8 += 1;
        }
        else if (m == 9)
        {
            n9 += 1;
        }
        n /= 10;
    }

    cout << "Frequency of 0: " << n0 << endl;
    cout << "Frequency of 1: " << n1 << endl;
    cout << "Frequency of 2: " << n2 << endl;
    cout << "Frequency of 3: " << n3 << endl;
    cout << "Frequency of 4: " << n4 << endl;
    cout << "Frequency of 5: " << n5 << endl;
    cout << "Frequency of 6: " << n6 << endl;
    cout << "Frequency of 7: " << n7 << endl;
    cout << "Frequency of 8: " << n8 << endl;
    cout << "Frequency of 9: " << n9 << endl;

    return 0;
}