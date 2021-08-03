#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    ///freopen("entrada.in","r",stdin);

    int valorIni, operacoesDia, valorOper;
    char tipoOper;

    while (cin >> valorIni) {
        cin >> operacoesDia;

        if (operacoesDia > 0) {
            for (int i = 1; i <= operacoesDia; i++){
                cin >> tipoOper >> valorOper;

                if (tipoOper == 'C') {
                    valorIni +=  valorOper;

                } else if (tipoOper == 'D') {
                    valorIni = valorIni - valorOper;
                }
            }
        }
        cout << valorIni << endl;
    }
    return 0;
}
