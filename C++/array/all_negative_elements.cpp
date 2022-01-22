// Write a C++ program to print all negative elements in an array.

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
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}