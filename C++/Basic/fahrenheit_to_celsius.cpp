// Write a C++ program to enter temperature in Fahrenheit and convert to Celsius

#include <iostream>
using namespace std;

int main()
{

    float fahrenheit, celsius;

    cout << "Enter Temperature in fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in celsius: " << celsius << " C" << endl;
    return 0;
}
