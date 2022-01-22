// Write a C++ program to copy all elements from an array to another array.

#include <iostream>
using namespace std;

#define max_size 50

int main()
{

    int n, a[max_size], b[max_size];

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    cout << "Real array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nCopied Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
