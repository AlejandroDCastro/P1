#include <iostream>
#include <cmath>
using namespace std;


//  MI PROGRAMA DE NOVATO
/*
int primerosTerminos (float i,float n,float suma){
	
	if (n>=1 && n<=i){
		cout << " + " << 1/pow(2,n);
		suma=suma+1/pow(2,n);
		if (n==i){
			cout << " = " << suma << endl;
		}
		primerosTerminos(i,n+1,suma);
	}
	if (n==0){
		cout << "1";
		if (i==1)
			cout << endl;
		primerosTerminos(i,n+1,suma);
	}
}

int main () {
	float i,n,suma;
	n=0;
	suma=1;
	
	cout << "Introduce la cantidad de términos de la serie a calcular: ";
	cin >> i;
	
	primerosTerminos(i,n,suma);
}
*/



float primerosTerminos(int num) {
	float suma;
	
	if (num==0)
		suma=1;
	else
		suma = 1/pow(2,num) + primerosTerminos(num-1);
	
	return (suma);
}

int main () {
	int i;
	
	cout << "Introduce la cantidad de términos de la serie a calcular: ";
	cin >> i;
	
	cout << "El resultado de calcular los " << i << " primeros números es " << primerosTerminos(i) << endl;

}