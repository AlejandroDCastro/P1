// 10. Ejercicio propuesto 5. Resuelve
#include <iostream>
using namespace std;

int sumaMult5(int ,int );

int main() {
	int num, suma, i=1;
	
	cout << "Introduce un puto número: ";
	cin >> num;
	
	suma=sumaMult5(num,i);
	cout << "La suma es " << suma << endl;
}

int sumaMult5(int n,int i) {
	int suma;
	
	if(n<5)
		suma=0;
	else{
		suma=sumaMult5(n-5,i+1)+5*i;
	}
	return (suma);
}