#include <iostream>


using namespace std;

int main () {
    int N, horas, minutos, segundos;

    cin >> N;

    horas = N / 3600;
    minutos = ((N-segundos)/60)%60;
    segundos = N % 60;


    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;

}
