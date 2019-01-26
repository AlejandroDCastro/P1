// Ejercicio 1

#include <iostream>
#include <cstring>
using namespace std;

const int kLAB=50, kMED=500, kNOM=30;
int countmed=0, countlab=0;

typedef char TCadena[kNOM];
typedef int TFabri[10];

typedef struct {
	int codigo;
	TCadena nombre, domicilio;
} TLaboratorio;

typedef struct {
	int codigo;
	TCadena nombre, descripcion, cactivo;
	float precioC, precioV;
	TFabri laboratorios;
} TMedicamento;

typedef TLaboratorio TLaboratorios[kLAB];
typedef TMedicamento TMedicamentos[kMED];


int medicamentoCaro(TMedicamentos );
int menu();
void introducirMedicamento(TMedicamento &);
void buscaMedicamento(TMedicamentos ,int );
void mostrarMedicamento(TMedicamento &);
void mostrarMedicamentos(TMedicamentos );
void introducirLaboratorio(TLaboratorio &);
void buscaLaboratorio(TLaboratorios ,int );
void mostrarLaboratorio(TLaboratorio &);
void mostrarLaboratorios(TLaboratorios,TMedicamentos,TCadena &,int &,TCadena &,int &);
int produce(TLaboratorio &, TMedicamentos );	// devuelve la cantidad de medicamentos que fabrica ese laboratorio


int main() {
	TMedicamentos medicamentos;
	TLaboratorios laboratorios;
	int opcion, cod, med1, med2;
	TCadena lab1, lab2;

	do {
		opcion = menu();
		switch(opcion) {
			case 1:
			introducirMedicamento(medicamentos[countmed]);
			countmed++;
			break;

			case 2:
			cout << "Introduce el codigo del medicamento: ";
			cin >> cod;
			buscaMedicamento(medicamentos,cod);
			break;

			case 3:
			mostrarMedicamentos(medicamentos);
			break;

			case 4:
			introducirLaboratorio(laboratorios[countlab]);
			countlab++;
			break;

			case 5:
			cout << "Introduce el codigo del laboratorio: ";
			cin >> cod;
			buscaLaboratorio(laboratorios,cod);
			break;

			case 6:
			mostrarLaboratorios(laboratorios,medicamentos,lab1,med1,lab2,med2);
			if(countlab == 0)
				cout << "No hay laboratorios registrados." << endl;
			else {
				cout << "Laboratorio que más medicamentos produce: " << lab1 << endl;
				cout << "Nº Medicamentos: " << med1 << endl;
				cout << "Laboratorio que menos medicamentos produce: " << lab2 << endl;
				cout << "Nº Medicamentos: " << med2 << endl;
			}
			break;

			case 7:
			if(countmed == 0) cout << "No hay medicamentos en esta farmacia." << endl;
			else cout << "El medicamento de mayor beneficio para la farmacia es " << medicamentoCaro(medicamentos) << endl;
		}
		cod = 0;
	} while(opcion != 8);
	cout << "¡ADIOS!" << endl;

	return 0;
}


int menu() {
	int op;

	cout << endl;
	cout << "BIENVENIDO A LA BASE DE DATOS DE LA FARMACIA" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "OPCION 1. Introducir un nuevo medicamento" << endl;
	cout << "OPCION 2. Mostrar un medicamento" << endl;
	cout << "OPCION 3. Mostrar todos los medicamentos" << endl;
	cout << "OPCION 4. Introducir un nuevo laboratorio" << endl;
	cout << "OPCION 5. Mostrar un laboratorio" << endl;
	cout << "OPCION 6. Mostrar todos los laboratorios" << endl;
	cout << "OPCION 7. Medicamento de mayor beneficio" << endl;
	cout << "OPCION 8. Salir" << endl;
	cout << "--------------------------------------------" << endl;
	do {
		cout << "Elige una opcion disponible: ";
		cin >> op;
	} while(op > 8  &&  op < 1);

	return op;
}


void introducirMedicamento(TMedicamento &m) {
	int cant = 0, cod;

	cout << "Introduce su codigo: ";
	cin >> m.codigo;
	cout << "Introduce su nombre: ";
	cin >> m.nombre;
	cout << "Introduce una descripcion: ";
	cin >> m.descripcion;
	cout << "Introduce su precio de compra: ";
	cin >> m.precioC;
	cout << "Introduce su precio de venta: ";
	cin >> m.precioV;
	cout << "Introduce su componente activo: ";
	cin >> m.cactivo;
	do {
		cout << "Introduce el codigo de un fabricante (-1 para salir): ";
		cin >> cod;
		if(cod > -1)
			m.laboratorios[cant++] = cod;
	} while(cod > -1  &&  cant < 10);
}


void buscaMedicamento(TMedicamentos m, int cod) {
	bool esta = false;

	for(int i=0; i<countmed; i++) {
		if(m[i].codigo == cod) {
			esta = true;
			mostrarMedicamento(m[i]);
			break;
		}
	}
	if(!esta)
		cout << "Este medicamento no está en la farmacia." << endl;
}


void mostrarMedicamento(TMedicamento &med) {
	cout << "MEDICAMENTO" << endl;
	cout << "Codigo: " << med.codigo << endl;
	cout << "Nombre: " << med.nombre << endl;
	cout << "Descripcion: " << med.descripcion << endl;
	cout << "Precio de compra: " << med.precioC << " euros" << endl;
	cout << "Precio de venta: " << med.precioV << " euros" << endl;
	cout << "Componente activo: " << med.cactivo << endl;
	for(int i=0; i<10; i++)
		if(med.laboratorios[i])
			cout << "Codigo del fabricante " << i+1 << ": " << med.laboratorios[i] << endl;
}


void mostrarMedicamentos(TMedicamentos m) {
	for(int i=0; i<countmed; i++) {
		mostrarMedicamento(m[i]);
	}
}


void introducirLaboratorio(TLaboratorio &lab) {
	cout << "Introduce su codigo: ";
	cin >> lab.codigo;
	cout << "Introduce su nombre: ";
	cin >> lab.nombre;
	cout << "Introduce el domicilio local: ";
	cin >> lab.domicilio;
}


void buscaLaboratorio(TLaboratorios l, int cod) {
	int esta = false;

	for(int i=0; i<countlab; i++) {
		if(l[i].codigo == cod) {
			esta = true;
			mostrarLaboratorio(l[i]);
			break;
		}
	}
	if(!esta)
		cout << "No hay registro de este laboratorio." << endl;
}


void mostrarLaboratorio(TLaboratorio &lab) {
	cout << "LABORATORIO" << endl;
	cout << "Codigo: " << lab.codigo << endl;
	cout << "Nombre: " << lab.nombre << endl;
	cout << "Domicilio local: " << lab.domicilio << endl;
}


void mostrarLaboratorios(TLaboratorios l,TMedicamentos m,TCadena &n1,int &c1,TCadena &n2,int &c2) {

	for(int i=0; i<countlab; i++) {
		mostrarLaboratorio(l[i]);
		int num = produce(l[i],m);
		if(i == 0) {
			strcpy(n1,l[i].nombre);
			strcpy(n2,l[i].nombre);
			c1 = num; c2 = num;
		} else {
			if(num > c1) {
				strcpy(n1,l[i].nombre);
				c1 = num;
			}
			else if(num < c2) {
				strcpy(n2,l[i].nombre);
				c2 = num;
			}
		}
	}
}


int produce(TLaboratorio &lab, TMedicamentos m) {
	int produccion = 0;

	for(int i=0; i<countmed; i++) {
		for(int j=0; j<10; j++) {
			if(m[i].laboratorios[j]  &&  lab.codigo == m[i].laboratorios[j]) {
				produccion++;
				cout << "Medicamento " << i+1 << ": " << m[i].nombre << endl;
				j = 10;
			}
		}
	}

	return produccion;
}


int medicamentoCaro(TMedicamentos med) {
	float beneficio = 0;
	int cod;

	for(int i=0; i<countmed; i++) {
		if((med[i].precioV - med[i].precioC) > beneficio) {
			beneficio = med[i].precioV - med[i].precioC;
			cod = med[i].codigo;
		}
	}

	return cod;
}