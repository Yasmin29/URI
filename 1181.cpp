#include <iostream>
#include <cstdio>
#include <iomanip>

#define linhas 12
#define colunas 12

using namespace std;

int main () {
  // freopen ("entrada.in", "r", stdin);

   cout << fixed << setprecision (1);

    int n;
    int cont = 0;
    double soma =0;
    double matriz [linhas][colunas];
    char operacao;

    cin >> n;
    cin >> operacao;


   for (int i =0; i<linhas; i++){
        for (int j = 0; j < colunas; j++) {
            cin >> matriz [i][j];
        }
   }

    for (int j = 0; j<colunas; j++) {

            soma += matriz[n][j];
            cont = cont+1;
    }
   if (operacao == 'S')
        cout << soma << endl;
    else
        cout << soma / cont << endl;

    return 0;

}

