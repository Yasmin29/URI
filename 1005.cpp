#include <iostream>
#include <iomanip>
using namespace std;

int main(){



    double A, B, MEDIA;
    cout << fixed << setprecision(5);
    cin >> A >> B;

    MEDIA = ((A*3.5)+(B*7.5))/11.0;

    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}
