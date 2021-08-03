#include <iostream>

using namespace std;
int main () {
    int n,a, menorValor, x[n], i ;
    cin >> n;
    for (int i=0; i<=n; i++) {
        cin >> a;
       // x[i] = a;
        //menorValor = a;

        /*cout << "vetor vai ate: " << n<< endl;
        cout << "posicao " << i <<"= " << a << endl;*/

       if (menorValor > a) {
            menorValor = a;
               cout << "Menor valor: " << menorValor << endl;
         cout << "Posicao: " << i << endl;

    }

    }
    return 0;
}

