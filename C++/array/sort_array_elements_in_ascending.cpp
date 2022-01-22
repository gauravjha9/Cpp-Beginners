// Write a C++ program to sort array elements in ascending or descending order.

#include <iostream>
using namespace std;

#define max_size 50

int main()
{

    int size, a[max_size], min, temp;

    cout << "Enter the size of an array: ";
    cin >> size;

    cout << "Enter the array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            min = i;
            if (a[j] < a[min])
            {
                min = j;
            }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}