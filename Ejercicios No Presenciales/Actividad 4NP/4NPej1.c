#include <iostream>
using namespace std;

void numcorrectos(int &, int &);
void numperfectos(int, int, int &, int &);

int main() {
	int num1,num2,numerosP,sumanumP;
	
	sumanumP=0;
	
	numcorrectos(num1,num2);
	
	numperfectos(num1,num2,numerosP,sumanumP);
	
	cout << "El cantidad total de números perfectos es " << numerosP << endl;
}

void numcorrectos(int &num1, int &num2) {
	int aux;
	
	do {
	
	cout << "Introduce dos números enteros mayores que cero:" << endl;
	cin >> num1;
	cin >> num2;
	
	
	if (num1>num2) {
		
		aux=num1;
		num1=num2;
		num2=aux;
	}	
	} while (num1<=0 || num2<=0);
	

} 

void numperfectos(int num1, int num2, int &nperf, int &sumanper) {				// 'a' es la variable que guardará los números divisores.
	int a,N;																	// 'N' es la variable que guardará los números comprendidos, y perfectos.
																				// 'nperf' es la cantidad de los números divisores, y 'sumanper' la suma de ellos.		
	for(N=num1; N<=num2; N++){
		sumanper=0;
		
		if (N>1){
		for(a=1; a<=(N/2); a++){
			if (N%a==0){
				sumanper=sumanper+a;
			}
		}
		}
		else
			sumanper=1;
		
		if (sumanper==N) {
			nperf++;
			cout << N << " es un número perfecto." << endl;
		}
	}
}

