#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x, aux, media, total;
    double n[10];
    cout << fixed << setprecision (1);
     for (int i=0; i<10; i++) {
        cin >> x;
        n[i] = x;
     }

   for (int i=0; i<10; i++) {
    cout << n[i] * 3 << endl;

   }
     aux = n[0];

    for (int i=1; i<10; i++) {

        total = total +n[i];
        media++;

      if (aux > n[i]){
          aux = n[i];
      }

    }

    cout << total/media << endl;
    cout << aux << endl;

    return 0;
}
