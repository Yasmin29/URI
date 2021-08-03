#include <iostream>

using namespace std;

int main() {
    int n,digito1, digito2,digito3,digito4;
    cin >> n;

    digito1= n/1000;
//    cout << "digito1 "<< digito1 << endl;

    digito2 = n/100;
    digito2 =digito2%10;
//    cout << "digito2 " << digito2 << endl;

    digito3 = n/10;
    digito3 = digito3%10;
//    cout << "digito3 " << digito3 << endl;

    digito4 = n%10;
//    cout << "digito4 " << digito4 << endl;

    if(digito1 > digito2  and digito1 > digito3 and digito1 > digito4){
        cout <<digito1 << endl;
    }
     if (digito2 > digito1 and digito2 > digito3 and digito2 > digito4){
        cout << digito2 << endl;
    }
     if(digito3 > digito1 and digito3 > digito2 and digito3 > digito4) {
        cout << digito3 << endl;

    }
     if(digito4 > digito1 and digito4 > digito2 and digito4 > digito3) {
        cout << digito4 << endl;
    }

    return 0;
}
