#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double x;
    double media;
    double total;
    int aux;

    cout << fixed << setprecision(1);

    for (int i = 0; i < 10; i++) {

        cin >> x;

        total += x;
        media++;

        if (i == 0) {
            aux = x;
        }
        if (x < aux) {
            aux = x;
        }

        cout << x*3 << endl;
    }
    cout << aux << endl;
    cout << total/media << endl;

    return 0;
}
