#include <iostream>
using namespace std;
#define max_size 10

void printArray(int arr[], int start, int len);

int main()
{
    int arr[max_size], n;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the array Element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, 0, n);

    return 0;
}

void printArray(int arr[], int start, int len)
{
    if (start >= len)
    {
        return;
    }

    cout << arr[start] << " ";

    printArray(arr, start + 1, len);
}