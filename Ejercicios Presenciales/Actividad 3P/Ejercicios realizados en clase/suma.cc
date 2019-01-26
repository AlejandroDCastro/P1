#include <iostream>
using namespace std;

int suma(int, int);  // prototipo función suma

int main(){
  int num1, num2, resultado;

  cout << "Introduce dos números: ";
  cin >> num1 >> num2;

  resultado = suma(num1, num2);
  cout << num1 << " + " << num2 << " = " << resultado << endl;
}

int suma(int n1, int n2) {
    int res;
    
    res = n1 + n2;
    return(res);
}