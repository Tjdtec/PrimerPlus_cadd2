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

    CandyBar snack[3];
    snack[0].brand = "Mocha, Munch";
    snack[0].m = 2.3;
    snack[0].calories = 350;
    snack[1].brand = "ABC";
    snack[1].m = 4.6;
    snack[1].calories = 400;
    snack[2].brand = "DEF";
    snack[2].m = 6.9;
    snack[2].calories = 450;

    for (int i = 0; i < 3; i++)
    {
        cout << "Brand: " << snack[i].brand << endl;
        cout << "m: " << setw(2) << snack[i].m << "kg" << endl;
        cout << "calories: " << snack[i].calories << endl;
    }

    return 0;
}