#include <iostream>
using namespace std;

int algoritmo(int ,int );

int main() {
	int a,b;
	
	cout << "Introduce dos números naturales a multiplicar: " << endl;
	cin >> a;
	cin >> b;
	
	cout << "El resultado es " << algoritmo(a,b) << endl;
}


int algoritmo(int a,int b) {
	int mult;
	
	if(b==1)
		mult=a;
	else
		mult=algoritmo(a,b-1)+a;		// Lo que se hace es ir sumando el valor de `a´ tantas veces como `b´ diga.
	
	return (mult);
}