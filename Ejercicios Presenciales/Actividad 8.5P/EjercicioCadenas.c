#include <iostream>
#include <string.h>
using namespace std;
const int kpal=7;
const int kcar=20;

typedef char tcad[kpal][kcar];

void introPal(tcad );
void mostrar1(tcad );
void cambPal(tcad );

int main() {
	tcad cad;
	int i;
	
	introPal(cad);
	cout << "Antes: ";
	mostrar1(cad);
	cambPal(cad);
	cout << "Después: ";
	mostrar1(cad);
	return 0;
}

void introPal(tcad c) {
	int i;
	
	for(i=0; i<kpal; i++) {
		cout << "Introduce una palabra: ";
		cin >> c[i];
	}
	cout << endl;
}

void mostrar1(tcad c) {
	int i;
	
	for(i=0; i<kpal; i++)
		cout << c[i] << " ";
	cout << endl;
}

void cambPal(tcad c) {
	int i,j;
	char aux[kcar];
	
	for(i=1; i<kpal; i++)
		for(j=kpal-1; j>=0; j--) {
			if(strcmp(c[j],c[j-1])<0) {
				strcpy(aux,c[j]);
				strcpy(c[j],c[j-1]);
				strcpy(c[j-1],aux);
			}
		}
}