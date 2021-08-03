#include <iostream>

using namespace std;

int main () {
        int x, y,aux,i,soma=0;
        cin >> x >> y;

         for (i=x+1; i<y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    cout << soma << endl;

    return 0;
}

