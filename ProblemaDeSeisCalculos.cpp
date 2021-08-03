#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    cout << fixed << setprecision (1);
    int N;
    double x;
    double positivo=0;
    double negativo=0;
    double somaneg=0;
    double somapos=0;
    double zero = 0;
    double maiorx;
    double menorx;
    double naoNulos=0;
    cin >> N;

    for (int i=1; i<=N; i++){
    cin >> x;
        if (x>0) {
            somapos = somapos + x;

            positivo++;

        }if (x<0) {
            somaneg = somaneg + x;

            negativo++;

        }if (x==0){
            zero = zero+1;

        }if (i==1) {
            maiorx = x;
            menorx = x;

        }if ( x < menorx ) {
            menorx = x;

        }if (x  > maiorx ) {
            maiorx = x;

        }if (x!=0)
            naoNulos++;
    }

    if (positivo == 0) {
        positivo = 1;

    } if (negativo==0){
        negativo = 1;
    }

    cout << somapos/positivo << endl;
    cout << somaneg/negativo << endl;
    cout << zero << endl;
    cout << maiorx << endl;
    cout << menorx << endl;
    cout << naoNulos << endl;
    return 0;
}
