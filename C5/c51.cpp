#include <iostream>
using namespace std;

int main()
{
    int z1, z2;
    int sum = 0;

    cin >> z1;
    cin >> z2;

    for (int i = z1; i <= z2; i++)
    {
        sum += i;
    }

    cout << sum << endl;
    return 0;
}