#include <iostream>

using namespace std;

int main () {
    int x,y,aux;
    cin >> x >> y;

    if (x<y){

        aux = x;

        x = y;

        y = aux;

    }if (x%y==0) {
        cout << "Sao Multiplos" << endl;
    }if (x%y != 0)
        cout << "Nao sao Multiplos" << endl;

    return 0;
}
