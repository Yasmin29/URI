#include <iostream>
#include <iomanip>
#define linhas 20
#define colunas 20

using namespace std;

int main () {
   cout << fixed << setprecision (1);

   double matriz [linhas][colunas];

   for (int i =0; i<linhas; i++){
        for (int j = 0; j < colunas; j++) {
            cin >> matriz [i][j];
        }
   }

    double soma =0;

    for (int i = 0; i<20; i++) {
        for (int j = 0; j<20; j++){
            if ( j%2==0 ) {
            soma += matriz[i][j];

            }
        }
    }
        cout << soma << endl;

    return 0;
}
