// Write a C++ program to find maximum and minimum between two numbers using functions.

#include <iostream>
using namespace std;

int max(int);
int min(int);

int main()
{

    int num1, num2, mx, mn;

    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;

    mx = max(num1, num2);
    cout<<"Maximum: "<<mx<<endl;
    mn = min(num1, num2);
    cout<<"Minimum: "<<mn<<endl;
    return 0;
}

int max(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}

int min(int num1, int num2)
{
    return num1 > num2 ? num2 : num1;
}