#include <iostream>
using namespace std;

int cifras(int );
int posicion(int ,int );
int menu(int );

int main() {
	int num,i,op;
	
	cout << "Introduce un número: ";
	cin >> num;
	cout << endl;
	
	op=menu(num);
	
	switch (op) {
		case 1:
			cout << endl;
			cout << "Las cifras de " << num << " son " << cifras(num) << endl;
			break;
			
		case 2:
			cout << endl;
			cout << "Introduce una posición: ";
			cin >> i;
			cout << "La posición " << i << " en " << num << " la ocupa el " << posicion(num,i) << endl;
			break;
			
		case 3:
			return (0);
	}
}

int menu(int n) {
	int op;

	cout << "MENÚ" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "Opción 1: Calcular de cuántas cifras se compone " << n << "." << endl;
	cout << "Opción 2: Mostrar una cifra de una posición a especificar de " << n << "." << endl;
	cout << "Opción 3: Salir." << endl;
	cout << endl;

	cout << "Opción: ";
	cin >> op; 
	
	while (op>3 || op<=0){
		cout << "Introduce una opción disponible :";
		cin >> op;
	}
	return (op);
}

int cifras(int n) {
	int res;
	
	res=0;
	
	do{
	n=n/10;
	res++;
	} while(n!=0);
	
	return (res);
}


int posicion(int n,int i) {
	int x,pos;
	
	for (x=2; x<=i; x++){
		n=n/10;
	}
	pos=n%10;
	
	return (pos);
}