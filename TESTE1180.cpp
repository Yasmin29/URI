#include <iostream>

using namespace std;

int main() {
    int n, menor, position;

    cin >> n;
    int x[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i];
       // if (i == 0) {
            //menor = x[i];
      //  }

        if (x[i] < menor) {
            menor = x[i];
            position = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << position << endl;
    return 0;
}
