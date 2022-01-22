// Write a C++ program to put even and odd elements of array in two separate array.

#include <iostream>
using namespace std;

#define max_size 50

void printArr(int arr[], int);

int main()
{

    int size, a[max_size], evenArr[max_size], oddArr[max_size], evenCount, oddCount;

    cout << "Enter the size of an array: ";
    cin >> size;

    cout << "Enter the Elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    evenCount = 0;
    oddCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] & 1)
        {
            oddArr[oddCount] = a[i];
            oddCount++;
        }
        else
        {
            evenArr[evenCount] = a[i];
            evenCount++;
        }
    }

    cout << "\nEven Elements in array: ";
    printArr(evenArr, evenCount);

    cout << "\nOdd Elements in array: ";
    printArr(oddArr, oddCount);

    return 0;
}

void printArr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}