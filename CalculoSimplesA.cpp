#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

   double a, b, c, r, s, d,t;

    cin >> a  >> b >> c;


    r = pow((a*b + a),4) ;
    s = pow(b + sqrt(c+2)+1,2);
    t = pow(b-1,4) / (r+ sqrt(s+1));
    d = pow(r+a,2) - s*t;

    cout << fixed << setprecision (1) << d << endl;
    return 0;
}

