// Ejercicio 1

#include <iostream>
#include <cstring>
using namespace std;

const int kTAM=50;
int equipos=0;

typedef struct {
	int codigo;
	char tipo;
	char descripcion[60];
	float precio;
	int unidades;
}TEquipo;

typedef TEquipo TAlmacen[kTAM];

int muestraMenu();
void opcionElegida(int ,TAlmacen );
void introduceEquipo(TEquipo &);
void actualizarUnidades(TAlmacen);
void obtenerInforme(TAlmacen);
void disponibilidad(TEquipo &);

int main() {
	TAlmacen almacen;
	int menu;

	do {
		menu = muestraMenu();
		opcionElegida(menu,almacen);
	} while(menu > 0  &&  menu < 4);

	return 0;
}

int muestraMenu() {
	int dev = 0;

	cout << "Empresa DISMED S.A." << endl;
	cout << "---------------------------------" << endl;
	cout << "OPCION 1. Introduce un nuevo equipo" << endl;
	cout << "OPCION 2. Vender un equipo disponible" << endl;
	cout << "OPCION 3. Obtener informe global de los equipos" << endl;
	cout << "OPCION 4. Salir" << endl;
	cout << "Elige la opción deseada: ";
	do {
		cin >> dev;
		if(dev > 4  &&  dev < 1)
			cout << "Escoge una disponible: ";
	} while(dev > 4  &&  dev < 1);

	return dev;
}

void opcionElegida(int m, TAlmacen alma) {
	switch(m) {
		case 1:
		introduceEquipo(alma[equipos]);
		equipos++;
		break;
		case 2:
		actualizarUnidades(alma);
		break;
		case 3:
		obtenerInforme(alma);
		break;
	}
}

void introduceEquipo(TEquipo &e) {
	cout << "Introduce el codigo del equipo: ";
	cin >> e.codigo;
	cout << "Introduce el tipo del equipo (O/I): ";
	cin >> e.tipo;
	cout << "Introduce una descripcion: ";
	cin >> e.descripcion;
	cout << "Introduce su precio por unidad: ";
	cin >> e.precio;
	cout << "Introduce la cantidad disponible: ";
	cin >> e.unidades;
	cout << endl;
}

void actualizarUnidades(TAlmacen alma) {
	int codigo;
	bool esta = false;

	cout << "Introduce el código del equipo: ";
	cin >> codigo;
	for(int i=0; i<equipos; i++)
		if(alma[i].codigo == codigo) {
			esta = true;
			disponibilidad(alma[i]);
			break;
		}
	if(!esta) {
		cout << "El equipo no está en el almacen." << endl;
	}
	cout << endl;
}

void disponibilidad(TEquipo &e) {
	int cantidad, vender;

	do {
		cout << "¿Cuantas unidades quieres vender? ";
		cin >> cantidad;
	} while(cantidad < 0);
	if(cantidad > e.unidades) {
		vender = e.unidades;
		e.unidades = 0;
	} else {
		vender = cantidad;
		e.unidades -= cantidad;
	}
	cout << "Se han vendido " << vender << " unidades del equipo " << e.codigo << endl;
}

void obtenerInforme(TAlmacen alma) {
	int ord = 0, imp = 0;
	float pord = 0.0, pimp = 0.0;

	for(int i=0; i<equipos; i++) {
		if(alma[i].tipo == 'O') {
			ord += alma[i].unidades;
			pord += (alma[i].precio*alma[i].unidades);
		} else if(alma[i].tipo == 'I') {
			imp += alma[i].unidades;
			pimp += (alma[i].precio*alma[i].unidades);
		}
	}
	cout << "INFORME" << endl;
	cout << "Nº Ordenadores: " << ord << endl;
	cout << "Precio Total Ordenadores: " << pord << " euros" << endl;
	cout << "Nº Impresoras: " << imp << endl;
	cout << "Precio Total Impresoras: " << pimp << " euros" << endl;
	cout << "Nº Total de equipos: " << (imp+ord) << endl;
	cout << "Precio Total Equipos: " << (pimp+pord) << endl;
	cout << endl;
}