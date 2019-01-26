#include <iostream>
using namespace std;

int trianRectan(int );


int main() {
	int fila;
	
	cout << "Introduce el número de filas: ";
	cin >> fila;
	
	trianRectan(fila);
	
}


int trianRectan(int f) {
	int x;
	
	if(f==1)
		cout << "*" << endl;
	else {
		trianRectan(f-1);
		for (x=1; x<=f; x++) {
			cout << "*";}
		cout << endl;
	}
}