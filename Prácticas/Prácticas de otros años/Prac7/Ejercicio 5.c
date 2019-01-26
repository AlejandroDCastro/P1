// 6. Ejercicio resuelto 5. Repasa
#include <iostream>
using namespace std;

typedef int TCadena[5][4];

int main() {
	TCadena matriz;
	int j=0;
	
	for(int i=0; i<5; i++)
		for(int w=0; w<4; w++) {
			cout << "Introduzca el elemento (" << i << "," << w << "): ";
			cin >> matriz[i][w];
		}
	// Muéstralos
	for(int i=0; i<5; i++) {
		if(j>0)
			cout << endl;
		else j=0;
		for(j=0; j<4; j++) {
			cout << "  " << matriz[i][j] << "  ";
		}
	}
	cout << endl;
	return 0;
}