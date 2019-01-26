#include <iostream>
using namespace std;



void pos1(int fil, int col, int &f1, int &c1) {
	f1=fil+2;
	c1=col+1;
}

void pos2(int fil, int col, int &f2, int &c2) {
	f2=fil+2;
	c2=col-1;
}

void pos3(int fil, int col, int &f3, int &c3) {
	f3=fil+1;
	c3=col-2;
}

void pos4(int fil, int col, int &f4, int &c4) {
	f4=fil-1;
	c4=col-2;
}

void pos5(int fil, int col, int &f5, int &c5) {
	f5=fil-2;
	c5=col-1;
}

void pos6(int fil, int col, int &f6, int &c6) {
	f6=fil-2;
	c6=col+1;
}

void pos7(int fil, int col, int &f7, int &c7) {
	f7=fil-1;
	c7=col+2;
}

void pos8(int fil, int col, int &f8, int &c8) {
	f8=fil+1;
	c8=col+2;
}

int posiciones(int fil, int col) {
	int f1,f2,f3,f4,f5,f6,f7,f8;
	int c1,c2,c3,c4,c5,c6,c7,c8;
	
	pos1(fil,col,f1,c1);					 //Recuerda incluir todos los datos con los que vas a trabajar en el módulo.
	pos2(fil,col,f2,c2);
	pos3(fil,col,f3,c3);
	pos4(fil,col,f4,c4);
	pos5(fil,col,f5,c5);
	pos6(fil,col,f6,c6);
	pos7(fil,col,f7,c7);
	pos8(fil,col,f8,c8);

	cout << "Las posiciones son: " << endl;
	cout << "(" << f1 << "," << c1 << ")" << endl;
	cout << "(" << f2 << "," << c2 << ")" << endl;
	cout << "(" << f3 << "," << c3 << ")" << endl;
	cout << "(" << f4 << "," << c4 << ")" << endl;
	cout << "(" << f5 << "," << c5 << ")" << endl;
	cout << "(" << f6 << "," << c6 << ")" << endl;
	cout << "(" << f7 << "," << c7 << ")" << endl;
	cout << "(" << f8 << "," << c8 << ")" << endl;
	
	return(0);
	
}


int main() {
	int fila,columna;
	
	cout << "Introduce la posición que ocupa un caballo en un tablero de ajedez(fila,columna):" << endl;
	cin >> fila;
	cin >> columna;
	
	posiciones(fila,columna);
}


