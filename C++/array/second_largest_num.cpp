// Write a C++ program to find second largest element in an array.

#include <iostream>
#include <limits.h>
#define max_size 50
using namespace std;

int main()
{
    int n, a[max_size], max1, max2;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    max1 = max2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] < max1)
        {
            max2 = a[i];
        }
    }

    cout << "Second largest number: " << max2;

    return 0;
}