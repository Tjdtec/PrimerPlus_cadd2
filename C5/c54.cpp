#include <iostream>
using namespace std;

int main()
{
    double d_origin = 100, c_origin = 100; // Define the original amount
    double d_profit, c_profit;             // Define the Daphane's profit and Cleo's
    double d_now, c_now;                   // Define current amount
    int time = 0;

    d_now = d_origin;
    c_now = c_origin;
    do
    {
        d_now += d_origin * 0.1;
        c_now += c_now * 0.05;
        time++;
    } while (c_now < d_now);

    cout << "Needing " << time << " years" << endl;
    return 0;
}