#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main () {
    cout << fixed << setprecision(2);
  //  freopen("entrada.in","r",stdin);
    int N, Quantia, total;
    int coelhos, ratos, sapos;
    coelhos=ratos=sapos=0;
    char Tipo;
    cin >> N;
    for (int i = 0; i<N; i++) {
        cin >> Quantia;
        cin >> Tipo;
        if (Tipo == 'C') {
            coelhos = coelhos + Quantia;
        }
        if (Tipo == 'R') {
            ratos = ratos + Quantia;
        }
        if (Tipo == 'S') {
            sapos = sapos + Quantia;
        }
    }
    total = coelhos+ratos+sapos;
    cout << "Total: "<< total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << "Percentual de coelhos: "
         << (coelhos*100.0) / total << " %" << endl;
    cout << "Percentual de ratos: "
         << (ratos*100.0) / total << " %" << endl;
    cout << "Percentual de sapos: "
         << (sapos*100.0) / total << " %" << endl;

    return 0;
}
