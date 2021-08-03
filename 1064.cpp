#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int total = 0;
    double x = 0;
    double media = 0;
    double soma = 0;

    for (int a=0; a < 6; a++) {
        cin >> x;
        if (x > 0) {
            total++;
            soma = soma + x;
        }
    }
        media = soma / total;
        cout << fixed << setprecision (1);
        cout << total << " valores positivos\n";
        cout << media << endl;

    return 0;
}
