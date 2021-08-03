#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n;
    double x[100];
    double y[100];

    for (int i=0; i<10; i++) {

        cin >> x[i];

    if (x[i] < 0) {

        x[i] = x[i] * (-1);
    }

    }

    for (int i=0; i<10; i++) {

        y[i] = x[i] * 3;

    cout << fixed << setprecision(1) << "Y[" << i << "]=" << y[i] << endl;

    }

    cin >> n;
    cout << fixed << setprecision(1) << "Y[" << n << "]=" << y[n] << endl;

}
