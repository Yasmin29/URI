#include <iostream>

using namespace std;

int main () {
    int x = 1;
    while (x > 0) {
        cin >> x;
        int j = 1;
        while (j <=x) {
            cout << j << endl;
            j++;
        }
    }
    return 0;
}
