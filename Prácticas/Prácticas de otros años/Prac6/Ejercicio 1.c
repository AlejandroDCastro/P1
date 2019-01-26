// 2.Ejercicio resuelto 1. Repasa.
#include <iostream>
using namespace std;

void muestraNumeros(int );

int main() {
	int num;
	
	cout << "Introduce un número: ";
	cin >> num;
	
	muestraNumeros(num);
	return 0;
}

void muestraNumeros(int n) {
	
	if(n==1){
		cout << n << endl;
	}
	else {
		cout << n;
		muestraNumeros(n-1);
	}
}