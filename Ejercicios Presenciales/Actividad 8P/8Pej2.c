// Ejercicio 2

#include <iostream>
using namespace std;

const int m = 3, n = 4;

void modulo(int [][n]);
void principio(int [][n],int );
void final(int [][n], int );
void muestraMatriz(int [][n]);
void rellenar(int [][n]);

int main() {
	int matriz[m][n];

	rellenar(matriz);
	modulo(matriz);
	muestraMatriz(matriz);

	return 0;
}

void modulo(int v[][n]) {
	int n1, n2;

	for(int i=0; i<m; i++){
		principio(v,i);
		final(v,i);
	}
}

void principio(int v[][n], int i) {
	int n1 = v[i][0];

	if((i-1) >= 0) {
		if(n1 > v[i-1][0]) n1 = v[i-1][0];
		if(n1 > v[i-1][1]) n1 = v[i-1][1];
	}
	if(n1 > v[i][1]) n1 = v[i][1];
	if((i+1) < m) {
		if(n1 > v[i+1][0]) n1 = v[i+1][0];
		if(n1 > v[i+1][1]) n1 = v[i+1][1];
	}
	v[i][0] = n1;
}

void final(int v[][n], int i) {
	int n2 = v[i][n-1];

	if((i-1) >= 0) {
		if(n2 < v[i-1][n-1]) n2 = v[i-1][n-1];
		if(n2 < v[i-1][n-2]) n2 = v[i-1][n-2];
	}
	if(n2 < v[i][n-2]) n2 = v[i][n-2];
	if((i+1) < m) {
		if(n2 < v[i+1][n-1]) n2 = v[i+1][n-1];
		if(n2 < v[i+1][n-2]) n2 = v[i+1][n-2];
	}
	v[i][n-1] = n2;
}

void muestraMatriz(int v[][n]) {
	cout << endl;
	cout << "MATRIZ" << endl;
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++)
			cout << v[i][j] << " ";
		cout << endl;
	}
}

void rellenar(int v[][n]) {
	cout << "RELLENA:" << endl;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++) {
			cout << "Elemento " << i+1 << j+1 << ": ";
			cin >> v[i][j];
		}
}