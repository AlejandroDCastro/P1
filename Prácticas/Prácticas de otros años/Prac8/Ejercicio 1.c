// 3. Ejercicio resuelto 2. Repasa
#include <iostream>
using namespace std;

const int kALUMS=30;
const int kCARAC=45;

typedef struct {
	int dia;
	int mes;
	int anyo;	
} TFecha;

typedef struct {
	int exp;
	char nombre[kCARAC];
	TFecha fechaNacimiento;
	TFecha fechaIngreso;
	float notaMedia;
} TFichaAlumno;

typedef TFichaAlumno TAlumnos[kALUMS];

void ingresar(TFichaAlumno &);
void ingresaFecha(TFecha &);
void mostrarAlumno(TFichaAlumno &);
void mostrarFecha(TFecha &);

int main() {
	TAlumnos alumnos;
	int opcion, numAlumnos=0;
	bool salir=false;
	
	do {
		cout << endl;
		cout << "***********Gestión de Alumnos***********" << endl;
		cout << "1. Dar de alta a un alumno." << endl;
		cout << "2. Mostrar todos los alumnos." << endl;
		cout << "3. Salir." << endl;
		cout << "Elige una opción: ";
		cin >> opcion;
		cout << endl;
		
		switch (opcion) {
			case 1: if(numAlumnos<30) {
						ingresar(alumnos[numAlumnos]);
						numAlumnos++;					
					}
					else cout << "No es posible introducir más alumnos." << endl;
			break;
			
			case 2: for(int i=0; i<numAlumnos; i++) {
						mostrarAlumno(alumnos[i]);
					}
			break;
			
			case 3: salir=true;
			break;
		}
	}while(!salir);
	return 0;
}

// INGRESO ////////////////////////////////////////////////////////////////
void ingresar(TFichaAlumno &alumno) {
	cout << "Introduce expediente: ";
	cin >> alumno.exp;
	cin.get();
	cout << "Introduce el nombre: ";
	cin.getline(alumno.nombre,kCARAC);
	cout << "Fecha de nacimiento:" << endl;
	ingresaFecha(alumno.fechaNacimiento);
	cout << "Fecha de ingreso:" << endl;
	ingresaFecha(alumno.fechaIngreso);
	cout << "Introduce la nota media: ";
	cin >> alumno.notaMedia;
}

void ingresaFecha(TFecha &fecha) {
	cout << "Dia: ";
	cin >> fecha.dia;
	cout << "Mes: ";
	cin >> fecha.mes;
	cout << "Años: ";
	cin >> fecha.anyo;
}
// INGRESO ////////////////////////////////////////////////////////////////


// MOSTRAR ////////////////////////////////////////////////////////////////
void mostrarAlumno(TFichaAlumno &alumno) {
	cout << "Expediente: " << alumno.exp << endl;
	cout << "Nombre: " << alumno.nombre << endl;
	cout << "Fecha de nacimiento: ";
	mostrarFecha(alumno.fechaNacimiento);
	cout << "Fecha de ingreso: ";
	mostrarFecha(alumno.fechaIngreso);
	cout << "Nota media: " << alumno.notaMedia << endl;
	cout << endl;
}

void mostrarFecha(TFecha &fecha) {
	cout << fecha.dia << "/" << fecha.mes << "/" << fecha.anyo << endl;
}
// MOSTRAR ////////////////////////////////////////////////////////////////
