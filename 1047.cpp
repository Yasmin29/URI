#include <iostream>

using namespace std;

int main (){
    int hI, hF, mI, mF, minutos=0,horas=0, inicio, fim;
    cin >> hI >> mI >> hF >> mF;
        ///Se ambos iguais
        if (hI==hF and mI==mF) {
            cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;

        ///Se horas igais e minutos diferentes
        }else if (hI==hF and mI<mF) {
            minutos = mF - mI;
            cout <<"O JOGO DUROU 24 HORA(S) E " << minutos << " MINUTO(S)" << endl;

        ///Se horas  diferentes e minutos igais
        }else if (hI < hF and mI == mF) {
            horas = hF - hI;
            minutos = 0;
            cout << "O JOGO DUROU " << horas <<  " HORA(S) E " << minutos << " MINUTO(S)" << endl;

       ///Se hora e minutos diferentes
        }else if (hI < hF and mI < mF) {
            horas = hF - hI;
            minutos = mF - mI;
            cout << "O JOGO DUROU " << horas <<  " HORA(S) E " << minutos << " MINUTO(S)" << endl;

       ///Se hora e minutos Iniciais maiores que finais
        }else if ( hI > hF and mI > mF) {
            horas = (24-hI) + hF;
            minutos = (60 - mI) + mF;
            cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos <<" MINUTO(S)" << endl;

        /// Se horas diferente e minutos inicial maior que final
        }else {
        // (hI < hF and mI > mF) {
            inicio=(hI*60)+mI;
            fim=(hF*60)+mF;
            horas=((1440-inicio)+fim)/60;
            minutos=((1440-inicio)+fim)%60;
            cout <<"O JOGO DUROU " << horas << " HORA(S) E " << minutos <<" MINUTO(S)" << endl;
            }
    return 0;
}
