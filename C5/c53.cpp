#include <iostream>
using namespace std;

int main()
{

    int i;
    int sum = 0;

    cin >> i;
    while (i != 0)
    {
        sum += i;
        cin >> i;
    }

    cout << "sum: " << sum << endl;

    return 0;
}