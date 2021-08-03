#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double n, taxaA, taxaB, popA, popB, cresA, cresB,anos;

    cin >> n;
    while (n>0) {
        cin >> popA >> popB >> taxaA >> taxaB;
        taxaA = taxaA/100;
        taxaB = taxaB/100;

        anos = 0;
        while (popA < popB) {
            cresA = popA * taxaA;
            cresB = popB * taxaB;
            popA += cresA;
            popB += cresB;
            anos++;
        }

        if(anos > 100){
            cout << "Mais de 1 seculo." << endl;
        } else {
            cout << anos << " anos." << endl;
        }

        n--;
    }
    return 0;
}
