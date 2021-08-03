#include <iostream>

using namespace std;

int main() {
    int n, x, segundoNumero, primeiroNumero, soma, aux;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> x;

        aux = x;

        for (int j = 1; j >= 1; j++) {
            segundoNumero = aux/10;
            primeiroNumero = aux%10;
            soma = segundoNumero+primeiroNumero;
            aux = primeiroNumero*10 + soma%10;

            if (aux == x) {
                cout << j << endl;
                break;
            }
        }
    }
    return 0;
}
