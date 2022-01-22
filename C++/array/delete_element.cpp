// Write a C++ program to delete an element from an array at specified position.

#include <iostream>
using namespace std;

#define max_size 50

int main()
{

    int n, a[max_size], pos;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter position: ";
    cin >> pos;

    for (int i = pos - 1; i < n-1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}