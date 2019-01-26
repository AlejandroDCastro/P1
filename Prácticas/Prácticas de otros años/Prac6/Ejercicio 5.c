// 6. Ejercicio resuelto 4. Repasa
#include <iostream>
#include <math.h>
using namespace std;

int sacarNumero(int ,int );

int main() {
	int num, pos, res;
	
	cout << "Introduce un número: ";
	cin >> num;
	
	do {
		cout << "Introduce la posición que quieres obtener: ";
		cin >> pos;
		
		res=sacarNumero(num,pos);
		if(res==0)
			cout << "La posición es inválida" << endl;
		else
			cout << "La cifra es: " << res << endl;
	}while(res==0);
	return 0;
}

int sacarNumero(int n,int p) {
	if(p==1) {
		return n%10;
	}
	else {
		sacarNumero(n/10,p-1);
	}
}