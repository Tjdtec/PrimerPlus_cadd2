#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    struct CandyBar
    {
        string brand;
        double m;
        int calories;
    };
    CandyBar snack;
    snack.brand = "Mocha, Munch";
    snack.m = 2.3;
    snack.calories = 350;
    cout << "Brand: " << snack.brand << endl;
    cout << "m: " << setw(2) << snack.m << "kg" << endl;
    cout << "calories: " << snack.calories << endl;

    return 0;
}