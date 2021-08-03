#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

   double a, b, c, r, s, d,t;

    cin >> a  >> b >> c;


    r = pow((a-b * c),3) ;
    s = pow(b + 2 * sqrt(c-3)-3,2);
    t = pow(r-1,4) / (s+ sqrt(a-1));
    d = pow(r+a,3) - s*t;

    cout << fixed << setprecision (1) << d << endl;
    return 0;
}


