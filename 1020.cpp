#include <iostream>

using namespace std;

int main () {
    int ano, mes, dia, x;

    cin >> x;

    ano = x/365;
    mes = (x%365) /30;
    dia = (x%365)%30;

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;

    return 0;
}
