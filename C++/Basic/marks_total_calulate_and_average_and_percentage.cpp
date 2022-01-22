// Write a C++ program to enter marks of five subjects and calculate total, average and percentage.

#include <iostream>
using namespace std;

int main()
{

    int a, b, c, d, e, total, average;
    float percentage;

    cout << "Enter marks of five subjects: ";
    cin >> a >> b >> c >> d >> e;

    total = a + b + c + d + e;
    average = total / 5;
    percentage = total / 5;

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "Percentage = " << percentage << endl;

    return 0;
}