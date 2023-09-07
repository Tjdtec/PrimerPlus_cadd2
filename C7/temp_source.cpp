//
// Created by JiangdeTu on 2023/7/21.
//

# include <iostream>

using namespace std;

const double *f1(const double arr[], int n);

int main() {

    double av[3] = {1112.3, 1542.6, 2227.9};
    const double *(*p1)(const double *, int) = f1;
    cout << "Address        Value\n";
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;

}

const double *f1(const double *ar, int n) {
    return ar;
}