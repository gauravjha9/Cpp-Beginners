// Write a C++ program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
/*
    Percentage >= 90% : Grade A
    Percentage >= 80% : Grade B
    Percentage >= 70% : Grade C
    Percentage >= 60% : Grade D
    Percentage >= 40% : Grade E
    Percentage < 40% : Grade F
*/

#include <iostream>
using namespace std;

int main()
{

    float phy, che, bio, math, cs, total, percentage, grade;

    cout << "Enter subjects marks: " << endl;
    cout << "Physics: ";
    cin >> phy;
    cout << "Chemistry: ";
    cin >> che;
    cout << "Biology: ";
    cin >> bio;
    cout << "math: ";
    cin >> math;
    cout << "Computer science: ";
    cin >> cs;

    total = phy + che + bio + math + cs;

    percentage = total / 5;

    cout << "Percentage: " << percentage << endl;

    if (percentage > 90)
    {
        cout << "Grade A" << endl;
    }
    else if (percentage > 80)
    {
        cout << "Grade B" << endl;
    }
    else if (percentage >= 70)
    {
        cout << "Grade C" << endl;
    }
    else if (percentage >= 60)
    {
        cout << "Grade D" << endl;
    }
    else if (percentage >= 40)
    {
        cout << "Grade E" << endl;
    }
    else if (percentage < 40)
    {
        cout << "Grade F" << endl;
    }

    return 0;
}