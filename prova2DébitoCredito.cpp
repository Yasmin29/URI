#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double saldoConta;
    double valorOperacao;
    char x;
    cout << fixed << setprecision(2);
    cin >> saldoConta >> n;

    for (int i = 0; i <n; i++) {
        cin >> valorOperacao >> x;

        if ( x == 'C') {
            saldoConta += valorOperacao;
        } else if (x == 'D') {
            saldoConta -= valorOperacao;
        }
    }
    cout << saldoConta << endl;

    return 0;
}
