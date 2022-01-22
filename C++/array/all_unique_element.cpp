// Write a C++ program to print all unique elements in the array.

#include <iostream>
using namespace std;

#define max_size 50

int main()
{

    int n, a[max_size], freq[max_size], count;

    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Unique Elements in an array are: ";
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = 0;
            }
        }
        if (count == 1 && a[i] != 0)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}