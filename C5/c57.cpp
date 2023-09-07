#include <iostream>
using namespace std;

struct car
{
    string car_make;
    int year;
};

int main()
{
    int car_num;
    cout << "How many cars do you wish to catalog? ";
    cin >> car_num;
    cin.get();
    car *car_arr = new car[car_num];

    for (int i = 0; i < car_num; i++)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make:";
        getline(cin,  car_arr[i].car_make);
        cout << endl;
        cout << "Please enter the year made:";
        cin >> car_arr[i].year;
        cout << endl;
        cin.get();
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < car_num; i++)
    {
        cout << car_arr[i].year << " " << car_arr[i].car_make << endl;
    }

    return 0;
}
