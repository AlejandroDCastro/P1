#include <iostream>
using namespace std;

void divisores(int ,int );

int main() {
	int num,div;
	
	cout << "Introduce un número: ";
	cin >> num;
	div=num-1;
	cout << "Divisores de " << num << ": ";
	divisores(num,div);
}

void divisores(int n,int d) {						// Si tienes problemas declara varables antes del modulo recursivo.
	
	if(d==1) {
		cout << d;
		cout << endl;
	}
	else{
		if(n%d==0)
			cout << d << ", ";
		divisores(n,d-1);
	}
}