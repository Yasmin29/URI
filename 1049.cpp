#include <iostream>

using namespace std;

int main () {

    string tipo1, tipo2, tipo3;
    cin >> tipo1;
    cin >> tipo2;
    cin >> tipo3;
    if (tipo1 == "vertebrado" and tipo2 == "ave" and tipo3 == "carnivoro") {
        cout << "aguia" << endl;
    }
     if (tipo1 == "vertebrado" and tipo2 == "ave" and tipo3 == "onivoro") {
        cout << "pomba" << endl;
    }
    if (tipo1 == "vertebrado" and tipo2 == "mamifero" and tipo3 == "onivoro") {
        cout << "homem" << endl;
    }
     if (tipo1 == "vertebrado" and tipo2 == "mamifero" and tipo3 == "herbivoro") {
        cout << "vaca" << endl;
    }
     if (tipo1 == "invertebrado" and tipo2 == "inseto" and tipo3 == "hematofago") {
        cout << "pulga" << endl;
    }
     if (tipo1 == "invertebrado" and tipo2 == "inseto" and tipo3 == "herbivoro") {
        cout << "lagarta" << endl;
    }
     if (tipo1 == "invertebrado" and tipo2 == "anelideo" and tipo3 == "hematofago") {
        cout << "sanguessuga" << endl;
    }
    if (tipo1 == "invertebrado" and tipo2 == "anelideo" and tipo3 == "onivoro") {
        cout << "minhoca" << endl;
    }

    return 0;
 }
