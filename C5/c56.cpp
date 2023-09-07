#include <iostream>
#include <string>
using namespace std;

int main()
{
    string month[12] = {"January", "February", "March", "April", "May",
                        "June", "July", "August", "September", "October",
                        "November", "December"};
    int scale[3][12]{0};
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the scale of the " << i + 1 << " year..."<<endl;
        for (int j = 0; j < 12; j++)
        {
            cout << "Please enter the sales for " << month[j] << ": ";
            cin >> scale[i][j];
            cout << endl;
        }
    }
    int sum[3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
            sum[i] += scale[i][j];
    }
    for (int i = 0; i < 3; i++)
        cout << "The total of the " << i + 1 << " year is: " << sum[i] << endl;

    cout << "The total is " << sum[0] + sum[1] + sum[2] << " during the whole three year" << endl;
    return 0;
}