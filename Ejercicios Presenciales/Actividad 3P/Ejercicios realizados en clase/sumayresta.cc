#include <iostream>
using namespace std;

void sumayresta(int, int, int &, int &);  // prototipo función suma

int main(){
  int num1, num2, resultadosuma, resultadoresta;

  cout << "Introduce dos números: ";
  cin >> num1 >> num2;

  sumayresta(num1, num2, resultadosuma, resultadoresta);
  cout << num1 << " + " << num2 << " = " << resultadosuma << endl;
  cout << num1 << " - " << num2 << " = " << resultadoresta << endl;
    
}

void sumayresta(int n1, int n2, int &sum, int &res) {
  
    sum = n1 + n2;
    res = n1 - n2;
}