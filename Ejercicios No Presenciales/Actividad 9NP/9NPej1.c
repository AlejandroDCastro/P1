#include <iostream>
#include <math.h>
using namespace std;

typedef struct {
	int x;
	int y;
} Tpuntos;

Tpuntos introVal();
float longitud(Tpuntos &,Tpuntos &);
float pendiente(Tpuntos &,Tpuntos &);
bool diferentes(Tpuntos &,Tpuntos &);

int main() {
	Tpuntos p1,p2;
	float lon,pend;
	
	do {
		cout << "Punto 1" << endl;
		p1=introVal();
		cout << "Punto 2" << endl;
		p2=introVal();
		if (diferentes(p1,p2)) {
			lon=longitud(p1,p2);
			pend=pendiente(p1,p2);
			cout << "La longitud del segmento que une los puntos es: " << lon << "." << endl;
			cout << "La pendiente que pasa por los dos puntos es: " << pend << "." << endl;
			cout << endl;
		}
	}while(diferentes(p1,p2));
}

Tpuntos introVal() {
	Tpuntos punto;
	
	cout << "X: ";
	cin >> punto.x;
	cout << "Y: ";
	cin >> punto.y;
	return (punto);
}

float longitud(Tpuntos &p1,Tpuntos &p2) {
	float l;
	
	l=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
	return (l);
}

float pendiente(Tpuntos &p1,Tpuntos &p2) {
	float p;
	
	p=((p2.y-p1.y)/(p2.x-p1.x));
	return (p);
}

bool diferentes(Tpuntos &p1,Tpuntos &p2) {
	bool d;
	
	d=true;
	if(p1.x==p2.x && p1.y==p2.y)
		d=false;
	return (d);
}