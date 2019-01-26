#include <iostream>
#include <string.h>
using namespace std;
const int kTAM=30;

typedef char Tcadena[kTAM];

bool palCad(Tcadena cad);

int main() {
	Tcadena cad;
	
	cout << "Introduce una cadena de carácteres: ";
	cin >> cad;
	if(palCad(cad))
		cout << "La cadena es un palíndromo." << endl;
	else
		cout << "La cadena no es un palíndromo." << endl;
	return 0;
}

bool palCad(char c[]) {
	int i,lon;
	bool pal;
	
	pal=true;
	lon=strlen(c)-1;
	i=0;
	while(pal==true && i<(lon/2)){
		if(c[i]!=c[lon-i])
			pal=false;
		i++;
	}
	return (pal);
}