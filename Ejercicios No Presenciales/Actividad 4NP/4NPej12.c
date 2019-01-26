#include <iostream>
using namespace std;


void serPerfecto(int x, int suma, int &cuenta){
	if (suma==x){
		cout << "El número " << x << " es perfecto." << endl;
		cuenta++;
	}
}

int sumaDivisores(int num1, int num2) {
	int x,y,cuenta,suma;
	
	cuenta=0;
	suma=0;
	
	for (x=num1; x<=num2; x++){
		suma=0;
		
		if(x>1){
		
		for (y=1; y<=(x/2); y++){
			if ((x%y)==0){
				suma=suma+y;
			}
		}
		}
		else
			suma=1;
		
		serPerfecto(x,suma,cuenta);
	}
	cout << "En total hay " << cuenta << " número/s perfecto/s." << endl;
}


int cambiarValores(int num1, int num2){
	int aux;
	
	if (num1>num2) {
		aux=num1;
		num1=num2;
		num2=aux;
	}
	sumaDivisores(num1,num2);
}

int sonNegativos(int num1, int num2) {
	
	while (num1<=0 || num2<=0) {
		cout << "Vuelve a introducir los datos pero que sean mayores que cero:" << endl;
		cin >> num1;
		cin >> num2;
	}
	cambiarValores(num1,num2);
}

int main() {
	int n1,n2;
	
	cout << "Introduce dos números mayores que cero:" << endl;
	cin >> n1;
	cin >> n2;
	
	sonNegativos(n1,n2);
	
}