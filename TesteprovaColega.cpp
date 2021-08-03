#include <iostream>

using namespace std;

int main() {
    unsigned long long int serieFib[61], n, i, testes;

    serieFib[0] = 0;
    serieFib[1] = 1;

    for (i = 2; i < 61; i++) {
        serieFib[i] = serieFib[i-1] + serieFib[i-2];
    }

    cin >> testes;

    for (int j = 0; j < testes; j++) {
        cin >> n;
        cout << "Fib(" << n << ") = " << serieFib[n] << endl;;
    }
    return 0;
}
