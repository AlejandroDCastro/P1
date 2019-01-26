// Ejercicio 2

#include <iostream>
#include <cstring>
using namespace std;

const int kTAM=30;
int empleados=0;

typedef struct {
	int dia, mes, anyo;
} TFecha;

typedef struct {
	char dni[9];
	char nombre[50];
	char direccion[50];
	int telefono;
	TFecha nacimiento;
	int ventas;
} TEmpleado;

typedef TEmpleado TEmpresa[kTAM];

void empleadoAnyo(TEmpresa );

int main() {
	TEmpresa empresa;
	empleadoAnyo(empresa);
	return 0;
}

void empleadoAnyo(TEmpresa e) {
	char dni[50];
	int vendidos = 0;

	for(int i=0; i<empleados; i++)
		if(e[i].ventas > vendidos) {
			strcpy(dni,e[i].dni);
			vendidos = e[i].ventas;
		}
	if(vendidos > 0)
		cout << "El empleado del anyo es " << dni << endl;
}