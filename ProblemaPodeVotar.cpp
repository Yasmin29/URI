#include <iostream>
using namespace std;

int main () {
    string nome;
    int idade;
    cin >> nome;
    cin >> idade;

    if (idade < 16) {
        cout << nome << " nao pode votar" << endl;

    } if (idade >= 16) {
        cout << nome << " pode votar" << endl;
    }

    return 0;
}
