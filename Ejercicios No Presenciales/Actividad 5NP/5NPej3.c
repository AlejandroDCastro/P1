#include <iostream>
using namespace std;

int fFibonacci(int );

int main() {
	int num;
	
	cout << "Introduce un número: ";
	cin >> num;
	
	cout << "El valor de la función de Fibonacci es " << fFibonacci(num) << endl;
	
	return (0);
}

int fFibonacci(int n){
	int func;
	
	if (n==1 || n==2)
		func=1;
	else
		func=fFibonacci(n-1)+fFibonacci(n-2);
	
	return (func);
}