#include <iostream>
using namespace std;
int factorial(int);

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Factorial of " << n << ": " << factorial(n);

    return 0;
}

int factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }

    return x * factorial(x - 1);

    //How it works:

    // factorial(4) = 4 * factorial(3)
    // factorial(4) = 4 * 3 * factorial(2)
    // factorial(4) = 4 * 3 * 2 * factorial(2)
    // factorial(4) = 4 * 3 * 2 * 1
    // factorial(4) = 24
}
