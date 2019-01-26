#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
const int ktam=20;

typedef int Tvector[ktam];

void inicializarVec(Tvector ,Tvector );
void introVal(Tvector ,Tvector );
int compV1(Tvector ,Tvector );
int compV2(Tvector ,Tvector );
void mostrarVec(Tvector ,Tvector );

int main() {
	Tvector vec1,vec2;
	int i,c1,c2;
	
	inicializarVec(vec1,vec2);
	srand(time(NULL));
	introVal(vec1,vec2);
	mostrarVec(vec1,vec2);
	c1=compV1(vec1,vec2);
	c2=compV2(vec1,vec2);
	cout << "Coincidencias Versión 1: " << c1 << "." << endl;
	cout << "Coincidencias Versión 2: " << c2 << "." << endl;
}

void inicializarVec(Tvector a,Tvector b) {
	int i;
	
	for(i=0; i<ktam; i++) {
		a[i]=0;
		b[i]=0;
	}
}

void introVal(Tvector a,Tvector b) {
	int i;
	
	for(i=0; i<ktam; i++) {
		a[i]=1+rand()%(10+1-1);
		b[i]=1+rand()%(10+1-1);
	}
}

int compV1(Tvector a,Tvector b) {
	int i,j;
	
	i=0;
	j=0;	
	while(i<ktam) {
		if(a[i]==b[i])
			j++;
		i++;
	}
	return (j);
}

int compV2(Tvector a,Tvector b) {
	int i,j,k,w;
	
	w=0;
	j=0;
	k=0;
	for(i=1; i<=10; i++) {
		while(j<ktam) {
			if(i==a[j]) {
				k++;
				j=ktam-1;
			}
			j++;
		}
		j=0;
		while(j<ktam) {
			if(i==b[j]) {
				k++;
				j=ktam-1;
			}
			j++;
		}
		j=0;
		if(k==2)
			w++;
	}
	return (w);
}

void mostrarVec(Tvector a,Tvector b) {
	int i;
	
	for(i=0; i<ktam; i++)
		cout << a[i] << " ";
	cout << endl;
	for(i=0; i<ktam; i++)
		cout << b[i] << " ";
	cout << endl;
}