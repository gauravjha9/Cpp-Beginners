// Write a C++ program to count total number of negative elements in an array.

#include <iostream>
using namespace std;

#define max_size 50

int main()
{

    int n, a[max_size], negativeCount = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            negativeCount++;
        }
    }

    cout << "Total number of negative Elements: " << negativeCount << endl;

    return 0;
}