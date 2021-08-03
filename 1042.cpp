#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int a, b,c;
    cin>>a>>b>>c;
    /// decrescende e crescente A E B
    if (a>b and a>c and b>c) {
        cout << c << endl;
        cout << b << endl;
        cout << a << endl;

   ///Decrescente e crescente a e c
   }

   if (a>b and a>c and c>b) {
        cout << b << endl;
        cout << c << endl;
        cout << a << endl;

    /// b e a
    }

    if (b > a and b>c and a>c) {
        cout << c << endl;
        cout << a << endl;
        cout << b << endl;

    ///b e c
    }

    if (b>a and b>c and c>a) {
        cout << a << endl;
        cout << c << endl;
        cout << b << endl;

    /// c e a
    }

    if (c>a and c>b and a>b) {
        cout << b << endl;
        cout << a << endl;
        cout << c << endl;

    /// c e b
    }

    if (c > a and c>b and b>a) {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }

    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;




    return 0;
}
