// Write a C++ program to read and print elements of array.

#include <iostream>
#define max_size 50
using namespace std;

int main()
{
    int n, a[max_size];

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}