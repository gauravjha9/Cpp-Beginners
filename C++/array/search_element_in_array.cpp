// Write a C++ program to search an element in an array.

#include <iostream>
using namespace std;

#define max_size 50

int main()
{

    int size, a[max_size], toSearch, found, position;

    cout << "Enter the size of an array: ";
    cin >> size;

    cout << "Enter Elements in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Enter Element to search: ";
    cin >> toSearch;

    found = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == toSearch)
        {
            found = 1;
            position = i + 1;
            break;
        }
    }

    if (found == 1)
    {
        cout << toSearch << " is found at position " << position << endl;
    }
    else
    {
        cout << toSearch << " is not found in the array." << endl;
    }

    return 0;
}