#include <iostream>

using namespace std;

int main () {
    int n,x;

    cin >> n;



    for (int i=0; i<n; i++){
        cin >> x;

         string retorno = "";

            if (x==0) {
               retorno += "NULL";
            }

            if (x%2==0 and x!=0) {
               if(retorno == ""){
                    retorno += "EVEN";
               }else {
                    retorno += " EVEN";
               }

            }
            if (x%2 != 0) {
               if(retorno == ""){
                    retorno += "ODD";
               }else {
                    retorno += " ODD";
               }
            }

            if (x>0) {

               if(retorno == ""){
                    retorno += "POSITIVE";
               }else {
                    retorno += " POSITIVE";
               }

            }

            if (x<0) {
               if(retorno == ""){
                    retorno += "NEGATIVE";
               }else {
                    retorno += " NEGATIVE";
               }

            }

             cout << retorno << endl;
    }

    return 0;
}
