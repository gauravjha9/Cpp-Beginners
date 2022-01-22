// Write a C++ program to count frequency of each element in an array.

#include <iostream>
using namespace std;

#define max_size 10

int main()
{

    int n, a[max_size], count, freq[max_size];

    cout << "Enter size of an array: ";
    cin >> n;

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;

                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            cout << "Frequency of " << a[i] << " : " << freq[i] << endl;
        }
    }

    return 0;
}