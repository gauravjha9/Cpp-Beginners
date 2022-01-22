// Write a C++ program to find reverse of an array.

#include <iostream>
using namespace std;

#define max_size 50

int main()
{

    int size, a[max_size];

    cout << "Enter the size of an array: ";
    cin >> size;

    cout << "Enter the array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}