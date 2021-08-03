#include <iostream>

using namespace std;

int main() {
    int h2,m2,h1,m1,inicio,fim,hJogadas,mJogados;

    cin >>h1>>m1>>h2>>m2;

    inicio=(h1*60)+m1;
    fim=(h2*60)+m2;

    if(inicio==fim) {
        cout<< "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" <<endl;
    } else if (inicio<fim) {
            hJogadas=(fim-inicio)/60;
            mJogados=(fim-inicio)%60;
            cout<<"O JOGO DUROU "<<hJogadas<<" HORA(S) E "<<mJogados<<" MINUTO(S)"<<endl;
        } else {
                hJogadas=((1440-inicio)+fim)/60;
                mJogados=((1440-inicio)+fim)%60;
                cout<<"O JOGO DUROU "<<hJogadas<<" HORA(S) E "<<mJogados<<" MINUTO(S)"<<endl;

        }


    return 0;
}
