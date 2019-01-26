// 4. Ejercicio resuelto 3. Repasa
#include <iostream>
#include <string.h>
using namespace std;

const int kmax=15;

typedef char TCadena[kmax];

void escribirReves(TCadena );

int main() {
	TCadena cadena;
	
	cout << "Introduce una cadena de carácteres: ";
	cin.getline(cadena,kmax);
	
	escribirReves(cadena);
	return 0;
}

void escribirReves(TCadena a) {
	int longitud=strlen(a);
	
	cout << "Cadena al revés: ";
	for(int i=longitud-1; i>=0; i--)
		cout << a[i];
	cout << endl;
}