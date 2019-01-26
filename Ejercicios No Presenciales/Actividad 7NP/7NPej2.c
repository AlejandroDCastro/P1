#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int kdatos=100;

void numRand(int []);
void recuentoNum(int [],int []);
int impHist(int []);

int main() {
	int randNum[kdatos],histograma[10],i;
	
	srand(time(NULL));						// Para que el número aleatorio sea diferente esta línea de código
	numRand(randNum);						// se pone antes del módulo de la lista y no justo antes de generarlos.
	recuentoNum(histograma,randNum);
	impHist(histograma);
	return 0;
}

void numRand(int d[]) {
	int i;
	
	for (i=0; i<kdatos; i++) {
		d[i]=1+rand()%(10+1-1);
	}
}

void recuentoNum(int h[],int r[]) {
	int i,num;
	
	for (i=1; i<=10; i++) {
		h[i]=0;
	}
	for (i=0; i<kdatos; i++) {
		num=r[i];
		h[num]=h[num]+1;
	}
}

int impHist(int h[]) {
	int i;
	
	for (i=1; i<=10; i++) {
		cout << i << ": ";
		cout << h[i] << endl;
	}
}