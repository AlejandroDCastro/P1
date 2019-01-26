#include <iostream>
using namespace std;

int trianguloUno(int );
int trianguloDos(int );
int trianguloTres(int );
void menu(int& ,int& );


int main() {
	int num,filas;
	
	menu(num,filas);
	
	switch (num) {
		case 1:
			trianguloUno(filas);
			break;
		
		case 2:
			trianguloDos(filas);
			break;
			
		case 3:
			trianguloTres(filas);
			break;
	}
			
}

void menu(int &num,int &filas) {

	cout << "MENÚ" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "TRIÁNGULO 1: Rectángulo invertido izquierdo." << endl;
	cout << "TRIÁNGULO 2: Rectángulo invertido derecho." << endl;
	cout << "TRIÁNGULO 3: Equilátero derecho." << endl;
	
	cout << endl;
	cout << "Triángulo:";
	cin >> num;
	
	cout << "Introduce las filas de la figura:";
	cin >> filas;
	cout << endl;
}


int trianguloUno(int filas) {
	int x,y;
	
	for (x=1; x<=filas; x++){
		for (y=0; y<=filas-x; y++){
			cout << "*";
		}
		cout << endl;
	}
}


int trianguloDos(int filas) {
	int x,y,z;
	
	for (x=1; x<=filas; x++){
		for (y=1; y<x; y++){
			cout << " ";}
		for (z=x; z<=filas; z++){
			cout << "*";}
			cout << endl;
	}
}


int trianguloTres(int filas) {
	int x,y,z,w;
	
	for (x=1; x<=filas; x++){
		for (y=0; y<filas-x; y++){
			cout << " "; }
		for (z=1; z<=x; z++){
			cout << "*"; }
		for (w=2; w<=x; w++) {
			cout << "*"; }
	cout << endl;
	}	
}