#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int X;
    double Y, TOTAL;

    cin >> X >> Y;
    TOTAL = X/Y;
    cout << fixed << setprecision (3);
    cout << TOTAL << " km/l" << endl;


    return 0;
}
