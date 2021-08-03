#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double valor, total;
    int x;

    cin >> valor >> x;
    cout << fixed << setprecision (2);

    if (x==1) {
        total = (valor*0.90);
        cout << total << endl;
    }else if (x==2) {
        cout << valor << endl;

    }else{
        total = valor*0.08;
        total += valor;
        cout << total << endl;
    }

    return 0;
}
