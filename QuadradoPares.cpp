#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int x;
    for (int i = 1; i<=100;i++) {
        if (i%2==0) {
            x = pow(i,2);
            cout << x << endl;
        }
    }



    return 0;
}
