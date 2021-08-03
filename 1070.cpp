#include <iostream>

using namespace std;

int main () {
    int x;
    cin >> x;

    for (int a=1; a<6; a++) {

        if (x%2 == 0){
            x++;
        }if (x%2 !=0){
         cout << x << endl;
            x = x + 1;

         }
    }
    return 0;
}
