// 2.1 Ejercicio resuelto 1. Repasa.
#include <iostream>
using namespace std;

const int tmax=5;

typedef float TVector[tmax];

int main() {
	TVector numeros;
	int suma=0, media;
	
	for(int i=0; i<tmax; i++) {
		cout << "Introduce un número: ";
		cin >> numeros[i];
		suma=suma+numeros[i];
	}
	media=suma/tmax;
	cout << "La media es " << media << endl;
	
	for(int i=0; i<tmax; i++) {
		cout << "Desviacion tipica del numero " << numeros[i] << ": " << numeros[i]-media << endl;
	}
}