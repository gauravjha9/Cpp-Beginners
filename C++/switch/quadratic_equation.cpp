// Write a C++ program to find roots of a quadratic equation using switch case.

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    int a, b, c, discriminant, root1, root2, imaginary;

    cout << "Enter the a value: ";
    cin >> a;
    cout << "Enter the b value: ";
    cin >> b;
    cout << "Enter the c value: ";
    cin >> c;

    discriminant = (b * b) - (4 * a * c);

    switch (discriminant > 0)
    {
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
        break;
    case 0:
        switch (discriminant < 0)
        {
        case 1:
            root1 = (-b / (2 * a));
            root2 = root1;
            imaginary = sqrt(-discriminant) / (2 * a);
            cout << "Root1 = " << fixed << setprecision(3) << root1 << " + " << fixed << setprecision(3) << imaginary << "i" << endl;
            cout << "Root2 = " << fixed << setprecision(3) << root2 << " - " << fixed << setprecision(3) << imaginary << "i" << endl;
            break;
        case 0:
            root1 = -b / (2 * a);
            root2 = root1;
            cout << "Root1 = " << fixed << setprecision(3) << root1 << endl;
            cout << "Root2 = " << fixed << setprecision(3) << root2 << endl;
            break;
        }
    }

    return 0;
}