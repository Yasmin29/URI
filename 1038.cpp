#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int codigo, quantidade;
    double cachorroQuente, xSalada, xBacon, torradaSimples, refrigerante;

    cin >> codigo >> quantidade;

    cachorroQuente = 4.00;
    xSalada = 4.50;
    xBacon=5.00;
    torradaSimples=2.00;
    refrigerante=1.50;

    cout << fixed << setprecision (2);

    if (codigo == 1) {
        cout << "Total: R$ " << cachorroQuente*quantidade << endl;
    }

    if (codigo == 2) {
        cout << "Total: R$ " << xSalada*quantidade << endl;
    }

    if (codigo == 3) {
        cout << "Total: R$ " << xBacon*quantidade << endl;
    }
    if (codigo == 4) {
        cout << "Total: R$ " << torradaSimples*quantidade << endl;
    }
    if (codigo == 5) {
        cout << "Total: R$ " << refrigerante*quantidade << endl;
    }

    return 0;
}
