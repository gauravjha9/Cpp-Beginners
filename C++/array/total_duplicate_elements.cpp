// Write a C++ program to count total number of duplicate elements in an array.

#include <iostream>
using namespace std;

#define max_size 50

int main()
{
    int n, a[max_size], count = 0;

    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }

    cout << "Unique Elements in the array: " << count;
    return 0;
}