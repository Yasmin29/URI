#include <iostream>

using namespace std;

int main () {
    int n[20];

    for (int i=0; i<20; i++) {
            cin >> n[i];
        if (i>9 and i<20) {
            swap(n[i], n[19-i]);
        }
    }
      for (int i2=0; i2<20; i2++) {
            cout << "N[" << i2 << "] = " << n[i2] <<endl;
      }

    return 0;
}
