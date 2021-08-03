#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    double n1, n2, n3, n4,n5, media, media2;
    cin >> n1 >> n2 >> n3 >> n4;
    media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10;
    cout << fixed << setprecision (1) << endl;
    cout << "Media: " << media << endl;

    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;

    } if (media < 5.0) {
        cout << "Aluno reprovado." << endl;

    ///recuperação.
    } if (media >= 5.0 and media <= 6.9) {
        cout << "Aluno em exame." << endl;
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        media2=(media+n5)/2;
        if (media2 >= 5.0) {
        cout << "Aluno aprovado." << endl;
        cout << "Media final: " << media2 << endl;

       } if (media2 < 5.0) {
        cout << "Aluno reprovado." << endl;
        cout << "Media final: " << media2 << endl;
        }
    }
    return 0;
}
