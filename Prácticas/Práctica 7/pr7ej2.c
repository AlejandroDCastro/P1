#include <iostream>
#include <cstring>
using namespace std;
const int kMAX=25;

typedef char tcad[kMAX];

void introPal(tcad ,tcad );
void longitud(tcad ,tcad ,int& ,int& );
void mayus(tcad ,tcad ,int ,int );
void impAlf(tcad ,tcad ,int ,int );

int main() {
	tcad p1,p2;
	int l1,l2;
	
	introPal(p1,p2);
	longitud(p1,p2,l1,l2);
	mayus(p1,p2,l1,l2);
	impAlf(p1,p2,l1,l2);
	return 0;
}

void introPal(tcad p1,tcad p2) {
	
	cout << "Introduce una palabra: ";
	cin >> p1;
	cout << "Introduce otra palabra: ";
	cin >> p2;
	cout << endl;
}

void longitud(tcad p1,tcad p2,int& l1,int& l2) {
	
	l1=0;
	l2=0;
	l1=strlen(p1);
	l2=strlen(p2);
}

void mayus(tcad p1,tcad p2,int l1,int l2) {
	int i;
	char let;
	
	for(i=0; i<l1; i++) {
		let=p1[i];
		if(let>=97 && let<=122) {
			let=let-32;
			p1[i]=let;
		}
	}
	for(i=0; i<l2; i++) {
		let=p2[i];
		if(let>=97 && let<=122) {
			let=let-32;
			p2[i]=let;
		}
	}
}

void impAlf(tcad p1,tcad p2,int l1,int l2) {
	tcad aux;
	
	if(strcmp(p1,p2)>0) {
		strcpy(aux,p1);
		strcpy(p1,p2);
		strcpy(p2,aux);
	}
	cout << p1 << endl;
	cout << "Longitud: " << l1 << endl;
	cout << p2 << endl;
	cout << "Longitud: " << l2 << endl;
}