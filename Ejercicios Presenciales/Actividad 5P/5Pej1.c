#include <iostream>
#include <cmath>
using namespace std;

int sumaCuadrados(int );

int main() {
	int n;
	
	cout << "Introduce un número: ";
	cin >> n;
	
	cout << "La suma de los cuadrados desde 1 hasta " << n << " es " << sumaCuadrados(n) << endl;
}

int sumaCuadrados(int num){
	int suma;
	
	if (num==1)
		suma=suma+1;
	else{
		suma=sumaCuadrados(num-1)+pow(num,2);  // Debe de estar en linea, en este caso.
	}
	return (suma);
}