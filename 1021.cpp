#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

 double valor, nota100, nota50, nota20, nota10, nota5, nota2, mod1, mod50, mod25, mod10, mod5, mod01;

    cin >> valor;

    nota100 = valor/100;
    valor = valor - (100*nota100);

    nota50 =  valor/50;
    valor = valor - (50*nota50);


    nota20=  valor/20;
    valor = valor - (20*nota20);

    nota10=  valor/10;
    valor = valor - (10*nota10);

    nota5=  valor/5;
    valor = valor - (5*nota5);

    nota2=  valor/2;
    valor = valor - (2*nota2);

    mod1 = (valor-nota100)*100;
    mod50 =(valor-nota100)*50;
    mod25=(valor-nota100)*25;
    mod10=(valor-nota100)*10;
    mod5=(valor-nota100)*5;
    mod01=(valor-nota100)*1;


    //reais = valor
    //centavos = (valor -reais)*100




    cout << fixed << setprecision(2);
    cout << "NOTAS:" << endl;
    cout << nota100 << " nota(s) de R$ 100.00" << endl;
    cout << nota50 << " nota(s) de R$ 50.00" << endl;
    cout << nota20 << " nota(s) de R$ 20.00" << endl;
    cout << nota10 << " notas(s) de R$ 10.00" << endl;
    cout << nota5 << " nota(s) de R$ 5.00" << endl;
    cout << nota2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << mod1 << " moeda(s) de R$ 1.00" << endl;
    cout << mod50 << " moeda(s) de R$ 0.50" << endl;
    cout << mod25 << " moeda(s) de R$ 0.25" << endl;
    cout << mod10 << " moeda(s) de R$ 0.10" << endl;
    cout << mod5 << " moeda(s) de R$ 0.05" << endl;
    cout << mod01 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}
