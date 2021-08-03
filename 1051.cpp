#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valor,aux,aux1,aux2,aux3,aux4,aux5;
    cin >> valor;
    cout << fixed << setprecision (2) << endl;
    if (valor <= 2000.00) {
        cout << "Isento" << endl;
    }else if (valor > 2000.00 and valor <= 3000.00) {
        aux= valor - 2000.00;
        aux = aux * 0.08;
        cout << "R$ " << aux << endl;

    }else if ( valor <= 4500.00) {
        aux = (valor - 3000.00) * 0.18; /// 2 mil insento e Mil 8%
        aux2 = 1000.00 * 0.08; /// até 3 mil = 8%
        aux3 = aux + aux2;/// 18% + 8%
        cout << "R$ " << aux3 << endl;

    }else {

        aux = (valor - 4500.0) * 0.28; /// 2 mil insento
        aux2 = 1000.00 * 0.08; /// até 3 mil = 8%
        aux3 = 1500.00 * 0.18; /// até 4.500 = 18%
        aux5 = aux2 + aux3 + aux; /// 18% + 8% +28

       cout << "R$ " << aux5 << endl;


    }
    return 0;
}
