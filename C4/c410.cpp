#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<double, 3> grade;

    cout << "Please input the grade of 40m of 1 times: ";
    cin >> grade.at(0);
    cout << "the 1 grade of 40m is: " << grade.at(0) << endl;

    cout << "Please input the grade of 40m of 2 times: ";
    cin >> grade.at(1);
    cout << "the 2 grade of 40m is: " << grade.at(1) << endl;

    cout << "Please input the grade of 40m of 3 times: ";

    cin >> grade.at(2);
    cout << "the 3 grade of 40m is: " << grade.at(2) << endl;

    double ave = (grade[0] + grade[1] + grade[2]) / 3;
    cout << "Average grade: " << ave << endl;

    return 0;
}