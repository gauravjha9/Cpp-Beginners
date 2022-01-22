// Write a C program to print all Prime numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{

    int i, n, j, flag;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 2; i <= n; i++)
    {

        flag = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}