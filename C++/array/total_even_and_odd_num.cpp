// Write a C++ program to count total number of even and odd elements in an array.

#include <iostream>
#define max_size 50
using namespace std;

int main()
{
    int n, a[max_size], oddCount = 0, evenCount = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            oddCount++;
        }
        else
        {
            evenCount++;
        }
    }

    cout << "Total Even Elements: " << evenCount << endl;
    cout << "Total Odd Elements: " << oddCount << endl;

    return 0;
}