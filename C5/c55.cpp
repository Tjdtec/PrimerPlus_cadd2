#include <iostream>
#include <string>
using namespace std;

int main()
{
    string month[12] = {"January", "February", "March", "April", "May",
                        "June", "July", "August", "September", "October",
                        "November", "December"};
    int scale[12]{0};
    for (int i = 0; i < 12; i++)
    {
        cout << "Please enter the sales for " << month[i] << ": ";
        cin >> scale[i];
        cout << endl;
    }

    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += scale[i];
    }
    cout << "The total of this year is: " << sum << endl;

    return 0;
}