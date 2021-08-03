#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

    int quantidade;
    int numero = 1500;
    while (numero != 0){
        quantidade++;
        numero = numero/2;
    }
    cout << quantidade;

 return 0;
}
