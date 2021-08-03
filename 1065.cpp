#include <iostream>
using namespace std;
int main () {

    int a=0;
    double total=0;

    for(int x=0; x<5; x=x+1){
        cin >> a;
        if (a%2 == 0) {
            total = total+1;
        }

    }
    cout << total << " valores pares" << endl;
    return 0;
}
