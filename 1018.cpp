#include <iostream>

using namespace std;

int main () {
    int cem, cinquenta, dez, vinte, cinco, dois, um, valor,n;

    cin >> n;

    cem = n/100;
    valor = n - (100*cem);

    cinquenta = valor/50;
    valor = valor - (50*cinquenta);

    vinte = valor/20;
    valor = valor - (20*vinte);

    dez = valor/10;
    valor = valor - (10*dez);

    cinco = valor/5;
    valor = valor - (5*cinco);

    dois = valor/2;
    valor = valor - (2*dois);

    um = valor/1;
    valor = valor - um;

    cout << n << endl;
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cinquenta << " nota(s) de R$ 50,00" << endl;
    cout << vinte << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinco << " nota(s) de R$ 5,00"<< endl;
    cout << dois << " nota(s) de R$ 2,00"<< endl;
    cout << um << " nota(s) de R$ 1,00"<< endl;

    return 0;
}
