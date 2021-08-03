#include <iostream>

using namespace std;

int main () {
    int a;
    int par=0;
    int impar=0;
    int positivo=0;
    int negativo=0;
    for (int x = 1; x <= 5; x++){
        cin >> a;
        if (a>0) {
            positivo++;
        }if (a < 0) {
            negativo++;
        }if (a%2==0) {
            par++;
        }if (a%2 != 0) {
            impar++;
        }
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;
    return 0;
}
