#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int HORAST,  NUMBER;
    double PORHORA, SALARY;

    cin >> NUMBER >> HORAST >> PORHORA;

    SALARY = PORHORA*HORAST;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << NUMBER << endl;
    cout << "SALARY = U$ " << SALARY << endl;

}
