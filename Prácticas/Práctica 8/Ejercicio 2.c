#include <iostream>
#include <string.h>
using namespace std;

const int kSEL=50;
const int kMAXNOM=25;
const int kMAXPOS=12;
const int kMAXJUG=200;

typedef struct {
	char nombre[kMAXNOM];
	int convocados;
	char selec[kMAXNOM];
	char champ;
} TDatosSeleccion;

typedef struct {
	char nombre[kMAXNOM];
	char seleccion[kMAXNOM];
	int goles;
	char posicion;
} TDatosJugador;

typedef TDatosSeleccion TSeleccion[kSEL];
typedef TDatosJugador TJugador[kMAXJUG];

int menu();
void introducirSeleccion(TDatosSeleccion &);
void introducirJugador(TDatosJugador &);
void mostrarSelecciones(TDatosSeleccion &);
void mostrarJugadores(TDatosJugador &);
void averiguarPichichi(TDatosJugador [],int);

int main() {
	TSeleccion selecciones;
	TJugador jugadores;
	int numSelec=0, numJugad=0, op;
	char introSel[kMAXNOM];
	
	do {
		op=menu();
		
		switch(op) {
			case 1: if(numSelec<kSEL) {
						introducirSeleccion(selecciones[numSelec]);
						numSelec++;
					}
					else cout << "No se pueden introducir más selecciones." << endl;
					cout << endl;
			break;
			
			case 2: if(numJugad<kMAXJUG) {
						introducirJugador(jugadores[numJugad]);
						numJugad++;
					}
					else cout << "No se pueden introducir más jugadores." << endl;
					cout << endl;
			break;
			
			case 3: for(int i=0; i<numSelec; i++) {
						mostrarSelecciones(selecciones[i]);
					}
					cout << endl;
			break;
			
			case 4: cin.get();
					cout << "Introducir selección: ";
					cin.getline(introSel,kMAXNOM);
					for(int i=0; i<numJugad; i++) {
						if(strcmp(introSel,jugadores[i].seleccion)==0)
							mostrarJugadores(jugadores[i]);
					}
					cout << endl;
			break;
			
			case 5: if(numJugad>0) {
						TDatosJugador aux[numJugad];
						for(int i=0; i<numJugad; i++) 
							aux[i]=jugadores[i];
						averiguarPichichi(aux,numJugad);
						cout << endl;
					}
					else cout << "No hay jugadores." << endl;
			break;
		}
	}while(op!=6);
}

int menu() {
	int ret;
	
	cout << "*******MUNDIAL DE FÚTBOL 2018********" << endl;
	cout << "1. Introducir nueva selección." << endl;
	cout << "2. Introducir nuevo jugador." << endl;
	cout << "3. Mostrar datos de todas las selecciones." << endl;
	cout << "4. Mostrar datos de los jugadores de una seleción." << endl;
	cout << "5. Mostrar pichichi del mundial." << endl;
	cout << "6. Salir." << endl;
	cout << "Elige una opción: ";
	cin >> ret;
	cout << endl;
	return ret;
}

void introducirSeleccion(TDatosSeleccion &sel) {
	cin.get();
	cout << "Introduce el nombre del país: ";
	cin.getline(sel.nombre,kMAXNOM);
	cout << "Número de convocados: ";
	cin >> sel.convocados;
	cin.get();
	cout << "Introduce el seleccionador: ";
	cin.getline(sel.selec,kMAXNOM);
	do {
		cout << "¿Ha sido campeona del mundo?(s/n): ";
		cin >> sel.champ;
	}while(sel.champ!='s' && sel.champ!='n');
}

void introducirJugador(TDatosJugador &jug) {
	cin.get();
	cout << "Introduce el nombre del jugador: ";
	cin.getline(jug.nombre,kMAXNOM);
	cin.get();
	cout << "Introduce la selección a la que pertenece: ";
	cin.getline(jug.seleccion,kMAXNOM);
	cout << "Introduce los goles que ha marcado: ";
	cin >> jug.goles;
	do {
		cout << "Introduce su posición en el campo(p/d/m/a): ";
		cin >> jug.posicion;
	}while(jug.posicion!='p' && jug.posicion!='d' && jug.posicion!='m' && jug.posicion!='a');
}

void mostrarSelecciones(TDatosSeleccion &sel) {
	cout << "--------------------------------------" << endl;
	cout << "Nombre: " << sel.nombre << endl;
	cout << "Convocados: " << sel.convocados << endl;
	cout << "Seleccionador: " << sel.selec << endl;
	cout << "Campeón/a mundial: ";
	if(sel.champ=='s') cout << "Si" << endl;
	else cout << "No" << endl;
}

void mostrarJugadores(TDatosJugador &jug) {
	cout << "--------------------------------------" << endl;
	cout << "Nombre: " << jug.nombre << endl;
	cout << "Selección: " << jug.seleccion << endl;
	cout << "Goles marcados: " << jug.goles << endl;
	cout << "Posición: ";
	if(jug.posicion=='p') cout << "Portero" << endl;
	if(jug.posicion=='d') cout << "Defensa" << endl;
	if(jug.posicion=='m') cout << "Mediocampo" << endl;
	if(jug.posicion=='a') cout << "Delantero" << endl;
}

void averiguarPichichi(TDatosJugador aux[],int jugs) {
	TDatosJugador cambio;
	int k=jugs-1;
	
	for(int i=1; i<jugs; i++)
		for(int j=jugs-1; j>=i; j--)
			if(aux[j].goles<aux[j-1].goles) {
				cambio=aux[j];
				aux[j]=aux[j-1];
				aux[j-1]=cambio;
			}	
	do {
		cout << "-----PICHICHI------" << endl;
		cout << "Nombre: " << aux[k].nombre << endl;
		cout << "Selección: " << aux[k].seleccion << endl;
		cout << "Goles marcados: " << aux[k].goles << endl;
		k--;
	}while(aux[k].goles==aux[k+1].goles);
}