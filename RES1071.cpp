///exercicio 1071:

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{

    int x, y, i, aux, soma=0;

    cin >> x >> y;

    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }

    for (i=x+1; i<y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    cout << soma << endl;

    return 0;
}
