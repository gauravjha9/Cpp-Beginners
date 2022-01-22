// Write a C+ program to enter temperature in Celsius and convert it into Fahrenheit.

#include <iostream>
using namespace std;

int main()
{

    float celsius, fahrenheit;

    cout << "Enter temperature in Celcius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;

    return 0;
}