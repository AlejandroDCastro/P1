#include <iostream>
#include <cstring>
using namespace std;
const int kmax=80;
const int kpal=20;

typedef char tcad[kmax][kpal];

void introCad(tcad ,int& );
int mayusculas(tcad ,int );
int minusculas(tcad ,int );

int main() {
	tcad cad;
	int mayus,minus,longitud;
	
	longitud=0;	
	introCad(cad,longitud);
	mayus=mayusculas(cad,longitud);
	minus=minusculas(cad,longitud);
	cout << "Mayúsculas: " << mayus << endl;
	cout << "Minúsculas: " << minus << endl;
}

void introCad(tcad c,int& l) {
	int i,j,lon,car;
	
	lon=0;
	j=0;
	car=0;
	cout << "Introduce una frase: ";
	for(i=0; i<kmax; i++) {
		cin >> c[i];
		lon=strlen(c[i]);
		j=lon-1;
		l++;
		car=car+lon;
		if(c[i][j]==46 || car>=80)
			i=kmax;
	}
}

int mayusculas(tcad c,int l) {
	int i,j,l2,may;
	
	may=0;
	l2=0;
	for(i=0; i<l; i++) {
		l2=strlen(c[i]);
		for(j=0; j<l2; j++)
			if(c[i][j]<91 && c[i][j]>64)
				may++;
	}
	return may;
}

int minusculas(tcad c,int l) {
	int i,j,l2,min;
	
	min=0;
	l2=0;
	for(i=0; i<l; i++) {
		l2=strlen(c[i]);
		for(j=0; j<l2; j++)
			if(c[i][j]<123 && c[i][j]>96)
				min++;
	}
	return min;
}
	