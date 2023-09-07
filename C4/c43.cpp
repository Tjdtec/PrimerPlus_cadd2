#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int Name_Size = 20;
    char fr_name[Name_Size];
    char ls_name[Name_Size];

    cout << "Enter your first name: ";
    cin.get(fr_name, Name_Size).get();
    cout << "\nEnter your last name: ";
    cin.get(ls_name, Name_Size).get();
    strcat(fr_name, ", ");
    strcat(fr_name, ls_name);
    cout << "Hers's the information in a single string: " << fr_name;

    return 0;
}