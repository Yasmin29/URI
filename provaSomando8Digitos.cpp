#include <iostream>

using namespace std;

int main() {
    int n, d1, d2, d3, d4, d5, d6, d7, d8, soma=0;
    cin >> n;

    d1= n/10000000;
 cout << "d1 " << d1 << endl;

    d2 = n/1000000;
    d2 = d2%10;
cout << "d2 " << d2 << endl;

    d3 = n/100000;
    d3 = d3%10;
 cout << "d3 " << d3 << endl;

    d4 = n/10000;
    d4 = d4%10;
  cout << "d4 " << d4 << endl;

    d5 = n/1000;
    d5 = d5%10;
  cout << "d5 " << d5 << endl;

    d6 = n/100;
    d6 = d6%10;
 cout << "d6 " << d6 << endl;

    d7 = n/10;
    d7 = d7 %10;
  cout << "d7 " << d7 << endl;

    d8 = n%10;
   cout << "d8 " << d8 << endl;

    soma = d1 + d2+ d3 + d4 + d5 + d6 + d7 + d8;

    cout << soma << endl;

    return 0;

}
