#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x=1020, i=0;
    double total;

    while (i<=60){
        i = i+2;
        x = x - 20;
        total = x/i ;
        cout <<x << " % " << i << "=" << total << endl;
       // cout << fixed << setprecision (1) << total << endl;

    }

    return 0;
}
