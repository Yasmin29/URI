#include <iostream>

using namespace std;

int main () {
    int a, b,c;
    cin >> a >> b;

    if (a>b) {
        a = (24 - a);
    cout << "O JOGO DUROU " << a+b << " HORA(S)" << endl;

    }else if (a<b) {
    cout << "O JOGO DUROU " << b-a << " HORA(S)" << endl;

    }else if (a==b){
         c=24;
    cout <<"O JOGO DUROU " << c << " HORA(S)" << endl;

    }else {

    cout << "O JOGO DUROU " << a+b << " HORA(S)" << endl;
    }

    return 0;
}
