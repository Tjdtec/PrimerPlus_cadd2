#include <iostream>
#include<array>
using namespace std;

const int ArSize = 101;
int main()
{
    array<long double , ArSize> fac;
    fac[1] = fac[0] = (long double)1;
    for (int i = 2; i < ArSize; i++)
        fac[i] = i * fac[i - 1];

    cout << ArSize - 1 << "! = " << fac[ArSize - 1] << endl;

    return 0;
}