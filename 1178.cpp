#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    double aux, x, N[100];
    cin >> x;
    cout<< fixed << setprecision(4);

    for (int i = 0; i<10; i++) {
    cout << "N[" << i <<"] = " << x << endl;

        aux = x/2;
        x = aux;


    }



}
