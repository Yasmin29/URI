#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double A[100];
    cout << fixed << setprecision (1);
    for (int i = 0; i <100; i++){
       cin >> A[i];
       if(A[i]<=10)
       cout << "A[" << i << "] = " << A[i] << endl;

    }
    return 0;
}
/*-242
-3
-2342
-342
-12
-23
-12
 0
 -242
 0
 -3
 -2342
-342.3
 -12
 -23*/
