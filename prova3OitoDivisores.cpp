#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int aux,x;

    cin >> x;

    for(int i=0; i<8; i++) {
       x = x + 1;
       aux = x % 10;
       cout << aux << endl;
    }

    return 0;
}
