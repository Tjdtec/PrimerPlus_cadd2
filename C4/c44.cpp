#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fr_name;
    string ls_name;

    cout << "Enter your first name: ";
    getline(cin, fr_name);
    cout << "\nEnter your last name: ";
    getline(cin, ls_name);

    cout << "Hers's the information in a single string: " << fr_name + ", " + ls_name;

    return 0;
}