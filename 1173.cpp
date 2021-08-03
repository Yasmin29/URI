//#include <iomanip>

//#include <iostream>

//using namespace std;

//int main() {
  //  int N[10],x,aux;
//    cin >> x;
//    for (int i=0; i<=10; i++) {
  //      x = x*2;
    //    cout << "N[" <<i << "] = " << aux << endl;
    //}

//    return 0;
//}

#include <iostream>

using namespace std;

int main ()
{
    int x, vet[10], i;

    cin >> x;
    vet[0] = x;
    cout << "N[" << 0 << "] = " << vet[0] << endl;

    for (i=1; i<10; i++) {
        vet[i] = vet[i-1] * 2;
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
    return 0;
}
