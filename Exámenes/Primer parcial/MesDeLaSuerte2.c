// MES DE LA SUERTE 2
#include <iostream>
using namespace std;

void leerFecha(int &,int &,int &);
int sumarCifras(int ,int ,int );
void imprimirMesSuerte(int );

int main() {
	int dia,mes,ano,resto;
	char res;
	
	cout << "AVERIGUA TU MES DE LA SUERTE" << endl;	
	do {
		leerFecha(dia,mes,ano);
		resto=sumarCifras(dia,mes,ano);
		imprimirMesSuerte(resto);
		
		cout << endl;
		cout << "Deseas calcular otro mes de la suerte (s/n): ";
		cin >> res;
	}while(res!='n' && res!='N');
	cout << "Hasta otra." << endl;
	
	return 0;
}


void leerFecha(int &dia,int &mes,int &ano) {
	do {
		cout << "Introduce tu dia de nacimiento: ";
		cin >> dia;
	}while(dia>30 || dia<1);
	do {
		cout << "Introduce tu mes de nacimiento: ";
		cin >> mes;
	}while(mes>12 || mes<1);
	do {
		cout << "Introduce tu año de nacimiento: ";
		cin >> ano;
	}while(ano<=0);
}

int sumarCifras(int d,int m,int a) {
	int suma,dia2,mes2,ano2=0;
	
	dia2=d/10+d%10;
	mes2=m/10+m%10;
	do{
		ano2=a%10+ano2;
		a=a/10;
	}while(a>0);
	suma=dia2+mes2+ano2;
	suma=suma%12;
	
	return suma;
}

void imprimirMesSuerte(int w){
	
	cout << "Tu mes de la suerte es ";
	switch (w){
		case 0: cout << "ENERO" << endl;
			break;
		case 1: cout << "FEBRERO" << endl;
			break;
		case 2: cout << "MARZO" << endl;
			break;
		case 3: cout << "ABRIL" << endl;
			break;
		case 4: cout << "MAYO" << endl;
			break;
		case 5: cout << "JUNIO" << endl;
			break;
		case 6: cout << "JULIO" << endl;
			break;
		case 7: cout << "AGOSTO" << endl;
			break;
		case 8: cout << "SEPTIEMBRE" << endl;
			break;
		case 9: cout << "OCTUBRE" << endl;
			break;
		case 10: cout << "NOVIEMBRE" << endl;
			break;
		case 11: cout << "DICIEMBRE" << endl;
			break;
	}
}