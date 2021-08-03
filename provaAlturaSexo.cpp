#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {

    string sexo;
    double altura, totalF, totalM;
    cin >> altura >> sexo;
    cout << fixed << setprecision (1);

    if (sexo=="F") {
      totalF = (62.1 * altura) - 44.7;
      cout << totalF << " kg" << endl;

    } else {
        totalM = (72.7 * altura) - 58;
        cout << totalM << " kg" << endl;
    }

    return 0;
}
