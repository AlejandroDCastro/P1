// 8. Ejercicio propuesto 2. Resuelve
#include <iostream>
using namespace std;

typedef int matriz[5][7];

void rellenaMatriz(matriz ,int ,int );
void muestraMatriz(matriz );

int main() {
	int dia, mes;
	matriz algo;
	
	cout << "¿En qué día de la semana empieza el mes? ";
	cin >> dia;
	cout << "¿Cuántos días tiene el mes? ";
	cin >> mes;
	
	rellenaMatriz(algo,dia,mes);
	muestraMatriz(algo);
	return 0;
}

void rellenaMatriz(matriz m,int a,int b) {
	int relleno=0;
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<7; j++) {
			if(j<(a-1)) m[i][j]=-4;
			else {
				if(relleno<b) {
					relleno++;
					m[i][j]=relleno;
				}
				else {m[i][j]=-4;}
			}
		}
	}
}

void muestraMatriz(matriz m) {
	int j=0;
	
	for(int i=0; i<5; i++) {
		if(j>0) {cout << endl;}
		else {j=0;}
		for(j=0; j<7; j++) {
			if(m[i][j]<0) {cout << "  ";}
			else cout << m[i][j] << " ";
		}
	}
	cout << endl;
}


// NO SÉ EL FALLO.