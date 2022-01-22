// Write a C++ program to convert days into years, weeks and days.

#include <iostream>
using namespace std;

int main()
{

    int days, years, weeks;

    cout << "Enter days: ";
    cin >> days;

    years = (days / 365);
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    cout << years << " Year/s, " << weeks << " week/s, " << days << " day/s";

    return 0;
}