#include <iostream>
#include <iomanip>
#define linhas 12
#define colunas 12

using namespace std;

int main () {
   cout << fixed << setprecision (1);

   double matriz [linhas][colunas];

   char operacao;

   cin >> operacao;

   for (int i =0; i<linhas; i++){
        for (int j = 0; j < colunas; j++) {
            cin >> matriz [i][j];
        }
   }

    int cont = 0;
    double soma =0;

    for (int i = 1; i<=10; i++) {
        if (i<=5) {
        for (int j = 11; j>11-i; j--){

            soma += matriz[i][j];
            cont++;

        }

        } else {

        for(int j=11; j>i;j--){
            soma += matriz[i][j];
            cont++;

        }
        }

    }
    if (operacao == 'S')
        cout << soma << endl;
    if (operacao == 'M')
        cout << soma / cont << endl;

    return 0;
}

