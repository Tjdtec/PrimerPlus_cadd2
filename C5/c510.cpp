#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = row - i; j > 0; j--)
            cout << ".";
        for (int k = 1; k <= i; k++)
            cout<<"*";
        cout<<endl;
    }

    return 0;
}