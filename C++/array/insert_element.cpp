// Write a C++ program to insert an element in an array.

#include <iostream>
using namespace std;

#define max_size 50

int main()
{

    int n, a[max_size], newElement, pos;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter new element: ";
    cin >> newElement;

    cout << "Enter position: ";
    cin >> pos;

    if (pos > n + 1 || pos <= 0)
    {
        cout << "Invalid position! Please Enter position between 1 to " << n << endl;
    }
    else
    {

        for (int i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }
        
        a[pos - 1] = newElement;
        n++;
        
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}