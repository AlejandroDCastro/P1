// 7. Ejercicio propuesto 1. Resuelve
#include <iostream>
#include <string.h>
using namespace std;

const int kMAX=80;
typedef char TCadena[kMAX];

int retMayus(TCadena ,int );
int retMinus(TCadena ,int );

int main() {
	TCadena frase;
	int lon, mayus, minus;
		
	do {
		cout << "Introduce una frase que termine en punto: ";
		cin.getline(frase,kMAX);
		lon=strlen(frase);
	}while(frase[lon-1]!=46);
	cout << "Hay " << retMayus(frase,lon) << " mayúsculas y " << retMinus(frase,lon) << " minúsculas." << endl;
	return 0;
}

int retMayus(TCadena a,int lon) {
	int devuelve=0;
	
	for(int i=0; i<lon; i++)
		if(a[i]<91 && a[i]>64)
			devuelve++;
	return devuelve;
}

int retMinus(TCadena a,int lon) {
	int devuelve=0;
	
	for(int i=0; i<lon; i++)
		if(a[i]<123 && a[i]>96)
			devuelve++;
	return devuelve;
}