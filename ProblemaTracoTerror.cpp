#include <iostream>

using namespace std;

int main() {
    int teste, c, v, fv;

    cin >> teste;

    for (int i = 1; i <= teste; i++) {
        cin >> c;

        for (int j = 1; j <= c; j++) {
            cin >> v;

            if (j == 1) {
               fv = v;
            }
            if (v > fv) {
                fv = v;
            }
        }
        cout << "Case " << i << ": " << fv << endl;
    }
    return 0;
}
