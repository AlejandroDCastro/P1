// Ejercicio 3

#include <iostream>
using namespace std;

const int kSEMANA=7;
int empleados=0;

void formaEmpresa(int [][kSEMANA]);
void diasSemana(int);
void mediaEmpleado(int [][kSEMANA]);
void mediaSemana(int [][kSEMANA]);
float mediaTotal(int [][kSEMANA]);

int main() {
	do {
		cout << "¿Cuantos empleados tiene tu empresa? ";
		cin >> empleados;
	} while(empleados <= 0);

	int empresa[empleados][kSEMANA];

	formaEmpresa(empresa);
	cout << endl;
	mediaEmpleado(empresa);
	cout << "---------------------------------------------" << endl;
	mediaSemana(empresa);
	cout << "---------------------------------------------" << endl;

	cout << "La media de horas trabajadas en total es " << mediaTotal(empresa) << " horas." << endl;

	return 0;
}

void formaEmpresa(int v[][kSEMANA]) {
	for(int i=0; i<empleados; i++) {
		cout << "Horas del empleado " << i+1 << ":" << endl;
		for(int j=0; j<kSEMANA; j++) {
			do {
				diasSemana(j);
				cin >> v[i][j];
				if(v[i][j] < 0)
					cout << "(No negativo)" << endl;
			} while(v[i][j] < 0);
		}
	}
}

void mediaEmpleado(int v[][kSEMANA]) {
	float media = 0.0;

	cout << "MEDIA DE HORAS POR EMPLEADO A LA SEMANA" << endl;
	for(int i=0; i<empleados; i++) {
		media = 0.0;
		for(int j=0; j<kSEMANA; j++)
			media += v[i][j];
		media /= kSEMANA;
		cout << "Media empleado " << i+1 << ": " << media << " horas" << endl;
	}
}

void mediaSemana(int v[][kSEMANA]) {
	float media = 0.0;

	cout << "MEDIA DE HORAS POR DIA DE LA SEMANA" << endl;
	for(int j=0; j<kSEMANA; j++) {
		media = 0.0;
		for(int i=0; i<empleados; i++)
			media += v[i][j];
		media /= empleados;
		diasSemana(j);
		cout << media << " horas" << endl;
	}
}

float mediaTotal(int v[][kSEMANA]) {
	float media = 0.0;

	for(int i=0; i<empleados; i++)
		for(int j=0; j<kSEMANA; j++)
			media += v[i][j];
	media /= (kSEMANA*empleados);

	return media;
}


void diasSemana(int dia) {
	switch(dia) {
		case 0:
		cout << "Lunes: ";
		break;
		case 1:
		cout << "Martes: ";
		break;
		case 2:
		cout << "Miercoles: ";
		break;
		case 3:
		cout << "Jueves: ";
		break;
		case 4:
		cout << "Viernes: ";
		break;
		case 5:
		cout << "Sabado: ";
		break;
		case 6:
		cout << "Domingo: ";
		break;
	}
}
