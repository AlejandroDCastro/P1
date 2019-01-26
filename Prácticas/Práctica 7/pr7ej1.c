#include <iostream>
#include <cstring>
using namespace std;
const int ktam=15;

typedef char Tcad[ktam];

void rellenarCad(Tcad );
void alReves(Tcad );

int main() {
	Tcad cad;
	
	rellenarCad(cad);
	cout << "La cadena al revés es: ";
	alReves(cad);
	return 0;
}

void rellenarCad(Tcad s) {
	
	cout << "Introduce una cadena de carácteres: ";
	cin >> s;
}

void alReves(Tcad c) {
	int lon,i,j;
	
	lon=strlen(c);
	j=lon-1;
	for(i=j; i>=0; i--)
		cout << c[i];
	cout << endl;		
}