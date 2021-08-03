#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int A, B, C, MaiorAB, MaiorC;

    cin >> A >> B >> C;

    MaiorAB = (A + B + abs(A - B))/2;
    MaiorC = (MaiorAB + C + abs(MaiorAB - C))/2;

    cout << MaiorC << " eh o maior" << endl;

    return 0;
}
