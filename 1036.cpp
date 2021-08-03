#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main () {

    double delta, divisor, posBhask, negBhask, a, b, c;
    cin >> a >> b >> c;


    delta = pow(b,2)-4*a*c;
    divisor = 2*a;
    posBhask = (-b+sqrt(delta)) / divisor;
    negBhask = (-b-sqrt(delta)) / divisor;

    if (delta < 0 || divisor == 0)  {
        cout << "Impossivel calcular" << endl;
    }
    else {

        cout << fixed << setprecision (5);
        cout <<"R1 = " << posBhask << endl;
        cout << "R2 = " << negBhask << endl;
    }

    return 0;
}
