#include <iostream>
using namespace std;

void cuentaYSuma (int n1, int n2, int &suma, int &cuenta);

int main(){
  int n1, n2, suma, cont;
  
  cout << "Introduce un número: ";
  cin >> n1;
  cout << "Introduce otro número: ";
  cin >> n2;
	if (n1 < n2)
    cuentaYSuma(n1, n2, suma, cont);
	else
	  cuentaYSuma(n2, n1, suma, cont);
  cout << "Entre " << n1 << " y " << n2 << " hay " << cont << " números y suman " << suma << endl;
  return 0;
}

void cuentaYSuma (int n1, int n2, int &suma, int &cuenta){
  int i;
  
  suma=0;
  cuenta=0;
  for (i=n1+1; i<n2; i++){
    cuenta++;
    suma=suma+i;
  }
}