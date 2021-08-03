#include <iostream>

using namespace std;

int main() {
  int ddd;
  cin >> ddd;

  if (ddd == 69 or ddd== 92 or ddd==91) {
    cout << "Norte" << endl;

  }else if (ddd == 51 or ddd == 48 or ddd == 41) {
    cout << "Sul" << endl;

  }else if (ddd == 79 or ddd == 71 or ddd == 81) {
    cout << "Nordeste" << endl;

  }else if (ddd == 84 or ddd == 62 or ddd == 65) {
    cout <<"Centro-Oeste" << endl;

  }else if (ddd == 21 or ddd == 11 or ddd == 31) {
    cout << "Sudeste" << endl;

  }else{
    cout << "prefixo inexistente no sistema" << endl;
  }
    return 0;
}
