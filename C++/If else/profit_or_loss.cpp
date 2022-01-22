// Write a C++ program to calculate profit or loss.

#include <iostream>
using namespace std;

int main()
{

    int cp, sp, profit, loss;

    cout << "Enter cost price: ";
    cin >> cp;
    cout << "Enter selling price: ";
    cin >> sp;

    profit = sp - cp;
    loss = cp - sp;

    if (profit > 0)
    {
        cout << "Profit: " << profit << endl;
    }
    else if (profit < 0)
    {
        cout << "Loss: " << loss << endl;
    }
    else
    {
        cout << "No profit and No Loss";
    }

    return 0;
}