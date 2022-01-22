// Write a C++ program to merge two array to third array.

#include <iostream>
using namespace std;

#define max_size 50

int main()
{
    int size1, size2, a1[max_size], a2[max_size], a3[max_size], size3, temp;

    cout << "Enter the size of array One: ";
    cin >> size1;

    cout << "Enter the Elements of array One: ";
    for (int i = 0; i < size1; i++)
    {
        cin >> a1[i];
        a3[i] = a1[i];
    }

    cout << "Enter the size of array Two: ";
    cin >> size2;

    cout << "Enter the Elements of array Two: ";
    for (int i = 0; i < size2; i++)
    {
        cin >> a2[i];
    }

    size3 = size1 + size2;

    //Merge both array Elements
    for (int i = 0; i < size2; i++)
    {
        a1[size1 + i] = a2[i];
    }

    cout << "\nMerged Array Elements: ";
    for (int i = 0; i < size3; i++)
    {
        a3[i] = a1[i];
        cout << a3[i] << " ";
    }

    for (int i = 0; i < size3; i++)
    {
        // int min = i;
        for (int j = i + 1; j < size3; j++)
        {
            int min = i;
            if (a3[j] < a3[min])
            {
                min = j;
            }
            temp = a3[i];
            a3[i] = a3[min];
            a3[min] = temp;
        }
    }

    cout << "\nSorted Array Elements: ";
    for (int i = 0; i < size3; i++)
    {
        cout << a3[i] << " ";
    }
    return 0;
}