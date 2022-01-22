// Write a C++ program to find sum of all array elements.

#include <iostream>
#define max_size 50
using namespace std;

int main()
{

    int n, s = 0;
    int a[max_size];

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }

    cout << "Sum of all array Elements: " << s << endl;

    return 0;
}