#include <math.h>
#include <iostream>
#include<iomanip>

using namespace std;

int main () {

    double  raio;
    double n = 3.14159;
    cin >> raio;

    double area = n * (pow(raio,2));

    cout << "A=";
    cout << fixed << setprecision(4) << area << endl;

    return 0;
}
