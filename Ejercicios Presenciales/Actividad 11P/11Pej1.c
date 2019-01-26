// Ejercicio 1

#include <iostream>
#include <cstring>
using namespace std;

const int kMAX=100;
int countper=0;

typedef char TCadena[30];

typedef struct {
	TCadena nombre, piel, ojos, nacion;
	int edad;
	char sexo;
	float altura;
} TPersona;

typedef TPersona TPersonas[kMAX];


void introducirPersona(TPersona &p) {
	cout << "Introduce su nombre: ";
	cin >> p.nombre;
	cout << "Introduce su edad: ";
	cin >> p.edad;
	if(p.edad < 0) p.edad = 0;
	do {
		cout << "Introduce su sexo (M/H): ";
		cin >> p.sexo;
	} while(p.sexo != 'M'  &&  p.sexo != 'H');
	do {
		cout << "Introduce su altura (valida): ";
		cin >> p.altura;
	} while(p.altura <= 0.0);
	cout << "Introduce su color de piel: ";
	cin >> p.piel;
	cout << "Introduce su color de ojos: ";
	cin >> p.ojos;
	cout << "Introduce su nacionalidad: ";
	cin >> p.nacion;
}


void ordenaPersonas(TPersonas personas) {
	TPersona aux;

	for(int i=1; i<countper; i++)
		for(int j=countper-1; j>=i; j--)
			if (strcmp(personas[j].nombre,personas[j-1].nombre) < 0) {
				aux = personas[j];
				personas[j] = personas[j-1];
				personas[j-1] = aux;
			}
}


void poblacion(TPersona &p) {
	cout << "Nombre: " << p.nombre << endl;
	cout << "Edad: " << p.edad << endl;
	cout << "Sexo: " << p.sexo << endl;
	cout << "Altura: " << p.altura << endl;
	cout << "Color de piel: " << p.piel << endl;
	cout << "Color de ojos: " << p.ojos << endl;
	cout << "Nacionalidad: " << p.nacion << endl;
}


int main() {
	TPersonas personas;

	cout << "¿Cuantas personas deseas introducir? ";
	cin >> countper;
	for(int i=0; i<countper; i++) {
		cout << "PERSONA " << i+1 << endl;
		introducirPersona(personas[i]);
	}
	ordenaPersonas(personas);
	cout << endl;
	for(int i=0; i<countper; i++) {
		cout << "PERSONA " << i+1 << endl;
		poblacion(personas[i]);
	}
	return 0;
}