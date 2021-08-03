#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double SALARIO, VENDAS, TOTAL;

    string NOME;

    cout << fixed << setprecision (2);

    cin >> NOME >> SALARIO >> VENDAS;

    TOTAL = SALARIO + VENDAS * 0.15;


    cout << "TOTAL = R$ " << TOTAL << endl;

    return 0;
}
