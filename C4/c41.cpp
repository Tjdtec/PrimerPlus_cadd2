#include <iostream>
#include <string>
using namespace std;

int main()
{
    string f_name, l_name;
    char de_garde, ac_grade;
    int age;

    cout << "What is your first name? ";
    getline(cin, f_name);
    cout << endl;
    cout << "What is your last name? ";
    getline(cin, l_name);
    cout << "What letter grade do you deserve? ";
    cin.get(de_garde).get();
    cout << endl;
    cout << "What is your age? ";
    cin >> age;
    cin.get();
    cout << endl;

    ac_grade = de_garde + 1;
    cout << "Name: " << l_name << ", " << f_name << endl;
    cout << "Grade: " << ac_grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}