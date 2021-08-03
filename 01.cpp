#include <iostream>

using namespace std;

int main() {

    int numeroLido;
     cin >> numeroLido;

        for (int i = 0; i < 8; i++) {
           numeroLido++;

           int quantidadeDivisores = 0;
           for(int j = 1; j <= numeroLido; j++) {
               if(numeroLido%j == 0) {
                   quantidadeDivisores++;
               }
           }

            cout << numeroLido << " possui " << quantidadeDivisores << " divisores" << endl;

         }
         return 0;
}
