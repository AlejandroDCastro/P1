// 5. Ejercicio resuelto 4. Repasa
#include <iostream>
#include <string.h>
using namespace std;

const int kmax=25;

typedef char TCadena[kmax];

void leerMayus(TCadena ,TCadena );
void compararCad(TCadena ,TCadena );

int main() {
	TCadena palabra1, palabra2;
	
	cout << "Introduce la primera palabra: ";
	cin.getline(palabra1,kmax);
	cout << "Introduce la segunda palabra: ";
	cin.getline(palabra2,kmax);
	
	leerMayus(palabra1,palabra2);
	compararCad(palabra1,palabra2);
	return 0;
}

void leerMayus(TCadena a,TCadena b) {
	int lon1=strlen(a), lon2=strlen(b);
	
	for(int i=0; i<lon1; i++)
		if(a[i]<123 && a[i]>96 && a[i]!=32)
			a[i]=a[i]-32;
	for(int i=0; i<lon2; i++)
		if(b[i]<123 && b[i]>96 && b[i]!=32)
			b[i]=b[i]-32;
}

void compararCad(TCadena a,TCadena b) {
	int comparar=strcmp(a,b);
	int lon1=strlen(a), lon2=strlen(b);
	
	if(comparar>0) {
		cout << b << " - " << lon2 << " de longitud" << endl;
		cout << a << " - " << lon1 << " de longitud" << endl;
	}
	else {
		cout << a << " - " << lon1 << " de longitud" << endl;
		cout << b << " - " << lon2 << " de longitud" << endl;
	}
}