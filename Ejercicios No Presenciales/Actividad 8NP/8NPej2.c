#include <iostream>
using namespace std;
const int kFIL=10;
const int kCOL=8;

typedef int Tnum[kFIL][kCOL];

void introCad(int [][kCOL]);
void mostrarMat(int [][kCOL]);

int main() {
	Tnum matriz;
	int i,j;
	
	introCad(matriz);
	mostrarMat(matriz);
	return 0;
}

void introCad(Tnum c) {
	int i,j,cont;
	
	cont=1;
	i=0;
	for(j=0; j<kCOL; j++) {
		if (i<kFIL) {
			while (i<kFIL) {
				c[i][j]=cont;
				i++;
				cont++;
			}
		}
			else if (i>=0) {
				i--;
				while (i>=0) {
					c[i][j]=cont;
					i--;
					cont++;
				}
				i++;
			}
	}
}

void mostrarMat(Tnum c) {
	int i,j;
	
	for (i=0; i<kFIL; i++) {
			cout << endl;
			for (j=0; j<kCOL; j++) {
				cout << c[i][j] << " ";
			}
		}
		cout << endl;
}