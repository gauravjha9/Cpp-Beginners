// Write a C++ program to find all roots of a quadratic equation.

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    float a, b, c, discriminant, root1, root2, imaginary;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root1: " << fixed << setprecision(3) << root1 << endl;
        cout << "Root2: " << fixed << setprecision(3) << root2 << endl;
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        root2 = root1;
        cout << "Root1: " << fixed << setprecision(3) << root1 << endl;
        cout << "Root2: " << fixed << setprecision(3) << root2 << endl;
    }
    else if (discriminant < 0)
    {
        root1 = (-b / (2 * a));
        root2 = root1;
        imaginary = sqrt(-discriminant) / (2 * a);
        cout << "Root1: " << fixed << setprecision(3) << root1 << " + " << fixed << setprecision(3) << imaginary << endl;
        cout << "Root2: " << fixed << setprecision(3) << root2 << " - " << fixed << setprecision(3) << imaginary << endl;
    }

    return 0;
}