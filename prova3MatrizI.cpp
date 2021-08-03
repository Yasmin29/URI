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

    for (int i = 1; i<20; i++) {
        for (int j = 0; j<20; j++){
         cout << "linha: " << i << " coluna: " << j  << " o que tem nela: " << matriz[i][j] << endl;

        }

    }



    return 0;
}
