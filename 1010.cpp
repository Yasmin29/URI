#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

    int codigo1, numero1, codigo2, numero2;
    double valor1, valor2, TOTAL;



    cin >> codigo1 >> numero1 >> valor1 >> codigo2 >>  numero2 >> valor2;

    TOTAL = (numero1*valor1) + (numero2*valor2);

    cout << fixed << setprecision (2);
    cout << "VALOR A PAGAR: R$ " << TOTAL << endl;


    return 0;
}
