#include <iostream>
using namespace std;

main() {
    int anyo,cifra,suma;
	
	cout << "Introduce el año de nacimiento: ";
	cin >> anyo;
	
	suma=0;
	
	while (anyo!=0) {
	   cifra=anyo%10;
	   anyo=anyo/10;
	   suma=suma+cifra;
	}
	if (suma%2==0)
	   cout << "El signo correspondiente es fuego" << endl;
	else
	   cout << "El signo correspondiente es agua" << endl;
}