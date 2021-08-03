#include <iostream>

using namespace std;

int main()
{
    int n, i, maiorAtual=0, posicao=0;

    for (i = 1; i <= 10; i++) {
        cin >> n;

        if (n > maiorAtual) {
            maiorAtual = n;
            posicao = i;
        }

    }

    cout << maiorAtual << endl;
    cout << posicao << endl;

    return 0;
}
