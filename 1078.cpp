#include <iostream>

using namespace std;

int main () {
    int n,x;
    cin >> n;
    for (int i=1; i<=10; i++) {
         x = i*n;
        cout << i << " x " << n << " = " << x << endl;
    }

    return 0;
}
