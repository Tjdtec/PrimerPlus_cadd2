#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct PizzaInfo
    {
        string cam_name;
        float delimeter;
        float weight;
    };

    PizzaInfo *pi1 = new PizzaInfo;
    cout << "The delimeter of Pizza: ";
    (cin >> pi1->delimeter).get();
    
    cout << "The Company name of Pizza: ";
    getline(cin, pi1->cam_name);

    cout << "The weight of Pizza: ";
    cin >> pi1->weight;

    cout << "delimeter: " << pi1->delimeter << endl;
    cout << "Company name: " << pi1->cam_name << endl;
    cout << "weight: " << pi1->weight << endl;

    return 0;
}