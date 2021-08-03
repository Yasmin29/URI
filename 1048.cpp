#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double salario,x;
    cin >> salario;
    cout << fixed << setprecision(2);
    if ( salario <= 400.00) {
        x = salario * 0.15;
        salario = x + salario;
        cout << "Novo salario: " << salario << endl << "Reajuste ganho: " << x << endl << "Em percentual: 15%"  << endl;

    }else if ( salario > 400.00 and salario <= 800.00 ) {
        x = salario * 0.12;
        salario = x + salario;
        cout << "Novo salario: " << salario << endl << "Reajuste ganho: " << x << endl << "Em percentual: 12%"  << endl;

    }else if ( salario > 800.00 and salario <= 1200.00 ) {
        x = salario * 0.10;
        salario = x + salario;
        cout << "Novo salario: " << salario << endl << "Reajuste ganho: " << x << endl << "Em percentual: 10%"  << endl;

    }else if ( salario > 1200.00 and salario <= 2000.00 ) {
        x = salario * 0.07;
        salario = x + salario;
        cout << "Novo salario: " << salario << endl << "Reajuste ganho: " << x << endl << "Em percentual: 7%"  << endl;

     }else {
        x = salario * 0.04;
        salario = x + salario;
        cout << "Novo salario: " << salario << endl << "Reajuste ganho: " << x << endl << "Em percentual: 4%"  << endl;
     }

    return 0;
}
