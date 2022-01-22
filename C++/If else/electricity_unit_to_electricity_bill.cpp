// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
/* 
    For first 50 units Rs. 0.50/unit
    For next 100 units Rs. 0.75/unit
    For next 100 units Rs. 1.20/unit
    For unit above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    float unit, charges, amt, sur_charge, total_amt;

    cout << "Enter total units consumed: ";
    cin >> unit;

    if (unit <= 50)
    {
        amt = unit * 0.5;
    }
    else if (unit <= 150)
    {
        amt = 25 + ((unit - 50) * 0.75);
    }
    else if (unit <= 250)
    {
        amt = 100 + ((unit - 150) * 1.20);
    }
    else if (unit <= 350)
    {
        amt = 220 + ((unit - 250) * 1.50);
    }

    sur_charge = amt * 0.20;
    total_amt = sur_charge + amt;

    cout << "Electricity Bill = Rs. " << fixed << setprecision(2) << total_amt << endl;

    return 0;
}