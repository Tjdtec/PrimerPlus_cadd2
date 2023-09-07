#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int Arr_SIZE = 20;
    int i = 0;
    char word_arr[Arr_SIZE]{'\0'};
    cout << "Enter words(to stop, type the word done): ";
    cin >> word_arr;
    while (strcmp(word_arr, "done") != 0)
    {
        i++;
        cin >> word_arr;
    }
    cout<<"You entered a total of "<< i << " words."<<endl;

    return 0;
}