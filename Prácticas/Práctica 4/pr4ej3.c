#include <iostream>
using namespace std;

int main() {
	float num,med,var,suma,cuad,cif;
	int n;
	
	cout << "Introduce un número real(pon 0 para terminar): " << endl;
	cin >> num;
	
	suma=0;
	med=0;
	var=0;
	n=0;
	cuad=0;
	cif=0;
	
	while(num!=0) {
		n=n+1;
	    suma=suma+num;
		cif=num*num;
		cuad=cuad+cif;
		
		med=suma/n;
		var=(cuad/n)-med*med;
		
		cout << "Introduce una serie de números reales(pon 0 para terminar): " << endl;
	    cin >> num;
    }
	cout << "La media es " << med << " y la varianza es " << var << endl;
}