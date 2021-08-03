/*#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double p1[30];
    double p2[30];
    double p3[30];
    double p4[30];
    double m[30];

    for (int i=0; i<30; i++){
        cin >> p1[i];
    }
    for (int i=0; i<30; i++){
        cin >> p2[i];
    }
    for (int i=0; i<30; i++){
        cin >> p3[i];
    }
    for (int i=0; i<30; i++){
        cin >> p4[i];
    }


    for (int i=0; i<30; i++) {
       double soma = 0.0;

       soma = (p1[i]*2) + (p2[i]*2) + (p3[i]*3) + (p4[i]*3);

       m[i] = soma/10.0;

       cout << fixed << setprecision(1) << m[i] << endl;

      // cout << fixed << setprecision(1) << "media = " << m[i] << " posicao = " << i << endl;
    }


    cin >> n;
    cout << m[n] << endl;


    return 0;
}*/

///Liliana
#include <iostream>
#include <iomanip>

#define casas 30

using namespace std;

int main() {
    cout << fixed << setprecision(1);

    double a[casas], b[casas], c[casas], d[casas];
    double media[casas];
    int posicao;

    for (int i = 0; i < casas; i++){ // entradas
        cin >> a[i];
    }
    for (int i = 0; i < casas; i++){
        cin >> b[i];
    }
    for (int i = 0; i < casas; i++){
        cin >> c[i];
    }
    for (int i = 0; i < casas; i++){
        cin >> d[i];
    }

    for (int i = 0; i < casas; i++){ // calculo da media
        media[i] = (a[i]*2 + b[i]*2 + c[i]*3 + d[i]*3) / 10;
    }

    for (int i = 0; i < casas; i++){ // saída da media
        cout << media[i] << endl;
    }

    cin >> posicao;

    cout << media[posicao] << endl;

    return 0;
}
