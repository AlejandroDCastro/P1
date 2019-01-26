#include <iostream>
#include <stdlib.h>
using namespace std;
const int kNUM=5;

void introNum(int [][kNUM]);
bool compNum(int [][kNUM]);

int main() {
	int matriz[kNUM][kNUM],i,j;
	
	introNum(matriz);
	if (compNum(matriz))
		cout << "La matriz no es simétrica." << endl;
	else
		cout << "La matriz es simétrica." << endl;
}

void introNum(int v[][kNUM]) {
	int i,j;
	
	for(i=0; i<kNUM; i++) {
		for(j=0; j<kNUM; j++) {
			cout << "Introduce el valor de A" << i+1 << j+1 << ": ";
			cin >> v[i][j];
		}
	}
}

bool compNum(int m[][kNUM]) {
	bool tras;
	int i,j;
	
	tras=false;
	
	for(i=0; i<kNUM; i++) {
		for(j=0; j<kNUM; j++) {
			while (tras==false && m[i][j]!=m[j][i]) {
					tras=true;
			}
		}
	}
	return (tras);
}