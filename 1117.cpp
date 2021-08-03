#include <iostream>

using namespace std;
int main () {
    int t,aux=0;
    int N[1000];

    cin >> t;

    for (int i=0; i<10; i++) {

        if (aux==t) {
                aux=0;
        }
        cout << "N[" << i << "] = " << aux << endl;
        aux++;
    }

    return 0;
}
