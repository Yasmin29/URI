#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double n, pUm, pDois, pTres, a,b,c, total;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b >> c;
        pUm = a*2;
        pDois=b*3;
        pTres=c*5;
        total = pUm + pDois + pTres;

        cout << fixed << setprecision(1) << total/10 << endl;

    }
    return 0;
}
