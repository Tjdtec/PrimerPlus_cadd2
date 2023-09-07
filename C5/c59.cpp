#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i = 0;
    string word;
    cout << "Enter words(to stop, type the word done): " << endl;
    cin >> word;
    while (word != "done")
    {
        i++;
        cin >> word;
    }
    cout<<"You entered a total of "<< i << " words."<<endl;

    return 0;
}