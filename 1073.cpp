#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    int n, i;

    cin >> n;
    for(i=2; i<=n; i=i+2) {
        cout << i << "^2 = " << i * i << endl;
    }

    return 0;
}



