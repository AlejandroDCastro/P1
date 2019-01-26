/*	Diseñar un módulo que reciba un número en sistema decimal y muestre en pantalla su
equivalente en binario. Por ejemplo, para el número 12, debe mostrar en pantalla 1100. */

#include <iostream>
using namespace std;

void decimalBinario(int);

int main() {
  int num; 

  cout << "Introduzca un número entero: ";
  cin >> num;
  
  decimalBinario(num);
  cout << endl;

  return 0;
} 

void decimalBinario(int n) {
	
	if (n != 0) {
		decimalBinario(n/2);
    cout << n%2;
  } 
} 
