// Write a C++ program to count total number of notes in given amount.

#include <iostream>
using namespace std;

int main()
{

    int n, a2000, a500, a200, a100, a50, a20, a10, a5, a2, a1;

    cout << "Enter amount: ";
    cin >> n;

    a2000 = n / 2000;
    n %= 2000;
    a500 = n / 500;
    n %= 500;
    a200 = n / 200;
    n %= 200;
    a100 = n / 100;
    n %= 100;
    a50 = n / 50;
    n %= 50;
    a20 = n / 20;
    n %= 20;
    a10 = n / 10;
    n %= 10;
    a5 = n / 5;
    n %= 5;
    a2 = n / 2;
    n %= 2;
    a1 = n / 1;
    n %= 1;

        cout << "Total number of notes:" << endl;
    cout << "2000: " << a2000 << endl;
    cout << "500: " << a500 << endl;
    cout << "200: " << a200 << endl;
    cout << "100: " << a100 << endl;
    cout << "50: " << a50 << endl;
    cout << "20: " << a20 << endl;
    cout << "10: " << a10 << endl;
    cout << "5: " << a5 << endl;
    cout << "2: " << a2 << endl;
    cout << "1: " << a1 << endl;

    return 0;
}