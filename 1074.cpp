#include <iostream>

using namespace std;

int main () {
    int n,x;

    cin >> n;

    for (int i=1; i<=n; i++){
        cin >> x;

        ///nulo
        if (x==0) {
            cout << "NULL" << endl;
        ///par
        }else if (x%2==0) {
        cout <<"EVEN" << endl;
        ///impar
        }if (x%2 != 0) {
            cout <<"ODD" << endl;
        ///positivo
        }if (x>0) {
            cout <<"POSITIVE" << endl;
        ///negativo
        }if (x<0) {
            cout << "NEGATIVE" << endl;
        }
    }
    return 0;
}
