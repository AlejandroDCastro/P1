// 3.Ejercicio propuesto 1. Resuelve.
#include <iostream>
using namespace std;

void muestraNumeros(int );

int main() {
	int num;
	
	cout << "Introduce un número: ";
	cin >> num;
	
	muestraNumeros(num);
	cout << endl;
	return 0;
}

void muestraNumeros(int n) {
	if(n==1) {
		cout << n;
	}
	else {
		muestraNumeros(n-1);
		cout << n;
	}
}