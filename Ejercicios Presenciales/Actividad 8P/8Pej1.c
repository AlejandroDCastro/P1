// Ejercicio 1

#include <iostream>
using namespace std;

void sumaOrdena(int[],int[],int[]);

int main() {
	int v1[] = {1,2,5,6,12,14,18,20,41,110}, v2[] = {3,6,13,23,26,30,33,42,100,201}, vector[20];

	sumaOrdena(v1,v2,vector);
	for(int i=0; i<20; i++) {
		cout << "Valor " << i+1 << ": " << vector[i] << endl;
	}
	return 0;
}

void sumaOrdena(int v1[], int v2[], int vec[]) {
	int cont = 0;

	// sumalos todos en un vector
	for(int i=0; i<10; i++)
		vec[cont++] = v1[i];
	for(int i=0; i<10; i++)
		vec[cont++] = v2[i];

	// ordenalos
	for(int i=1; i<20; i++)
		for(int j=20-1; j>=i; j--)
			if(vec[j-1] > vec[j]) {
				int aux = vec[j-1];
				vec[j-1] = vec[j];
				vec[j] = aux;
			}
}