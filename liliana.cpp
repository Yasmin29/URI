#include <iostream>

using namespace std;

int main() {
    unsigned int n, divisores = 0;

    cin >> n;

    for (int i = n + 1; i <= n+8; i++){
        for (int j = 1; j <= i; j++){
            if (i%j == 0)
                divisores++;
        }
        cout << i << " possui " << divisores << " divisores" << endl;
        divisores = 0;
    }
    return 0;
}
