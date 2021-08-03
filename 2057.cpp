#include <iostream>

using namespace std;

int main () {
  int S, T, F, C;
  cin >> S >> T >> F;

    C = S + T + F;

  if (C > 24) {
        C = C - 24;
        cout << C << endl;

    } else if (C < 0) {
        C = 24 + C;
        cout << C << endl;

    } else if (C == 24) {
        C = 00;

    } else {
        cout << C << endl;
    }

    return 0;
}

