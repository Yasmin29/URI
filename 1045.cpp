#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    double a,b,c,a2,bc,x;

    cin >> a >> b >> c;
    if (a < b ) {
     x = a;
     a = b;
     b = x;
    }
    if (a < c ) {
     x = a;
     a = c;
     c = x;
    }

    if (b < c ) {
     x = b;
     b = c;
     c = x;
    }

    a2 = (pow(a,2));
    bc = (pow(b,2)) + (pow(c,2));

    if (a >= b +c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }else{
        if (a2 == bc) {
        cout << "TRIANGULO RETANGULO" << endl;
        }

        if (a2 > bc) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (a2 < bc ) {
        cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b and b == c) {
        cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((a == b and a != c) or (a == c and a != b) or (b == c and b != a)) {
        cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    cout << fixed << setprecision (2);

    return 0;
}
