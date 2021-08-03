#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double litros;
    int tempo, velocide;
    cin >> tempo >> velocide;
    litros = velocide * tempo / 12.000;
    cout << fixed << setprecision (3);
    cout << litros << endl;
    return 0;
}
