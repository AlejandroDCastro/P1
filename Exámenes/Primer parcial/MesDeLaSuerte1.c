#include <iostream>
using namespace std;

void leerFecha(int &,int &,int &);
int sumarCifras(int ,int ,int );
int imprimirMesSuerte(int );

int main() {
	int mes,anyoAc,anyoNa,suma;
	char let;
	
	cout << "AVERIGUA TU MES DE LA SUERTE" << endl;
	
	do {
	leerFecha(mes,anyoNa,anyoAc);
	suma=sumarCifras(mes,anyoNa,anyoAc);
	imprimirMesSuerte(suma);
	
	cout << "¿Deseas calcular otro mes de la suerte?(s/n): ";
	cin >> let;
	} while(let=='s');
	
	return 0;
}


void leerFecha(int &mes,int &anyoNa,int &anyoAc) {
	
	do {
	cout << "Introduce tu mes de nacimiento: ";
	cin >> mes;
	} while(mes<1 || mes>12);
	do {
	cout << "Introduce tu año de nacimiento: ";
	cin >> anyoNa;
	} while(anyoNa<=0);
	do {
	cout << "Introduce el año actual: ";
	cin >> anyoAc;
	} while(anyoAc<=0 || anyoNa>anyoAc);
}


int sumarCifras(int mes,int anyoNa,int anyoAc) {
	int suma;
	
	suma=0;
	
	suma=mes/10+mes%10;				// Aquí se calcula la cifras del mes.
	
	do {
		suma=suma+anyoNa%10;
		anyoNa=anyoNa/10;
	} while(anyoNa>0);
	
	do {
		suma=suma+anyoAc%10;
		anyoAc=anyoAc/10;
	} while(anyoAc>0);

	if (suma>12) {
	suma=suma/10+suma%10;
	}
	
	return (suma);
}


int imprimirMesSuerte(int suma) {

	cout << "Tu mes de la suerte es ";
	
	switch (suma) {
		case 1: cout << "ENERO." << endl;
		break;
		case 2: cout << "FEBRERO." << endl;
		break;
		case 3: cout << "MARZO." << endl;
		break;
		case 4: cout << "ABRIL." << endl;
		break;
		case 5: cout << "MAYO." << endl;
		break;
		case 6: cout << "JUNIO." << endl;
		break;
		case 7: cout << "JULIO." << endl;
		break;
		case 8: cout << "AGOSTO." << endl;
		break;
		case 9: cout << "SEPTIEMBRE." << endl;
		break;
		case 10: cout << "OCTUBRE." << endl;
		break;
		case 11: cout << "NOVIEMBRE." << endl;
		break;
		case 12: cout << "DICIEMBRE." << endl;
		break;
	}
	cout << endl;
}