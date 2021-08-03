#include <iostream>

using namespace std;

int main () {
    int N;
    int x;
    int out=0;
    int in=0;

    cin >> N ;

    for (int i = 1; i<=N; i++) {
        cin >> x;
        if (x < 10 or x > 20) {
            out = out + 1;

        }if (x >= 10 and x <= 20 ){
            in = in + 1;

         }
    }
        cout << in << " in" << endl;
        cout << out << " out" << endl;

    return 0;
}
