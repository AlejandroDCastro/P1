// 3. Ejercicio resuelto 2. Repasa
#include <iostream>
using namespace std;

const int TMAX=10;

typedef int TVector[TMAX];

void leerVector(TVector );
void mostrarVector(TVector );
int sacarMayor(TVector );

int main() {
	TVector numeros;
	
	leerVector(numeros);
	mostrarVector(numeros);
	cout << "El elemento mayor es " << sacarMayor(numeros) << endl;
	return 0;
}

void leerVector(TVector n) {
	for(int i=0; i<TMAX; i++) {
		cout << "Introducir un numero entero: ";
		cin >> n[i];
		if(n[i]<0) n[i]=n[i]*(-1);
	}
}

void mostrarVector(TVector num) {
	cout << "Vector: ";
	for(int i=0; i<TMAX; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}

int sacarMayor(TVector v) {
	int aux;
	
	for(int i=1; i<TMAX; i++) {
		for(int j=TMAX-1; j>=i; j--) {
			if(v[j-1]>v[j]) {
				aux=v[j-1];
				v[j-1]=v[j];
				v[j]=aux;
			}
		}
	}
	return (v[TMAX-1]);
}