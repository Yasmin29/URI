#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    int n,x,digitos = 0;
    cin >> n;

    for (int i=0; i<n; i++){

        cin >> x;

        while (x != 0){
            digitos++;
            x = x/2;
        }

        cout << digitos << endl;

        digitos = 0;
    }

    return 0;
}
