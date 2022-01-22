// Write a C++ program to input basic salary of an employee and calculate its Gross salary according to following:
/*
    Basic Salary <= 10000 : HRA = 20%, DA = 80%
    Basic Salary <= 20000 : HRA = 25%, DA = 90%
    Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include <iostream>
using namespace std;

int main()
{

    float bs, gs, hra, da;

    cout << "Enter Basic salary: ";
    cin >> bs;

    if (bs <= 10000)
    {
        da = bs * 0.8;
        hra = bs * 0.2;
    }
    else if (bs <= 20000)
    {
        da = bs * 0.9;
        hra = bs * 0.25;
    }
    else
    {
        da = bs * 0.95;
        hra = bs * 0.3;
    }

    gs = bs + da + hra;

    cout << "Gross salary = " << gs << endl;

    return 0;
}