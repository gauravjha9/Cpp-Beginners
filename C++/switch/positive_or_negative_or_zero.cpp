// Write a C++ program to check whether a number is positive, negative or zero using switch case.

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter a number: ";
    cin >> n;

    switch (n > 0)
    {
    case 1:
        cout << n << " is Positive" << endl;
        break;
    case 0:
        switch (n < 0)
        {
        case 1:
            cout << n << " is Negative" << endl;
            break;
        case 0:
            cout << n << " is Zero" << endl;
            break;
        }
        break;
    }

    return 0;
}