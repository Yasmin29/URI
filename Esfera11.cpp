#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    double VOLUME, R, pi;
    pi = 3.14159;
    cin >> R;
    VOLUME = (4/3.0) * pi * (pow(R,3));
    cout << fixed << setprecision (3);
    cout << "VOLUME = " << VOLUME << endl;

    return 0;
}
