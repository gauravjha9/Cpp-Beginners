#include <iostream>
using namespace std;

int sum(int x)
{
    if (x == 1)
    {
        return (x);
    }
    return x + sum(x - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of all Digit till " << n << " : " << sum(n);

    return 0;
}