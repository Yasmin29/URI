#include <iostream>

using namespace std;

int main() {
    int n, x, y,aux, soma=0;
    cin >> n;
    for (int i = 0; i<n; i++) {
        cin >> x >> y;
        if (x > y) {
            aux = y;
            y = x;
            x = aux;
        }for (int i2=x+1; i2<y; i2++){
            if (i2%2 !=0) {
                soma = soma + i2;
            }
         }
        cout << soma << endl;
        soma=0;
    }
    return 0;
}
