#include <iostream>
using namespace std;
const int kTEMP=24;

void introTemp(int []);
float mediaTemp(int []);
void infYsup(int [],int& ,int& ,float );

int main() {
	int temper[kTEMP],superior,inferior;
	float media;
	
	introTemp(temper);
	media=mediaTemp(temper);
	infYsup(temper,superior,inferior,media);
	
	cout << "La media de las temperaturas introducidas es: " << media << "." << endl;
	cout << "Hay " << superior << " temperaturas superiores a la media." << endl;
	cout << "Hay " << inferior << " temperaturas inferiores a la media." << endl;
	return 0;
}


void introTemp(int v[]) {
	int i;
	
	for (i=0; i<kTEMP; i++) {
		cout << "Introduce la temperatura " << i+1 << ": ";
		cin >> v[i];
	}
}


float mediaTemp(int w[]) {
	int i;
	float media,suma;
	
	suma=0;
	
	for (i=0; i<kTEMP; i++) {
		suma=suma+w[i];
	}
	media=suma/kTEMP;
	return (media);
}


void infYsup(int x[],int &sup,int &inf,float media) {
	int i;
	
	sup=0;
	inf=0;
	
	for (i=0; i<kTEMP; i++) {
		if (x[i]<media)
			inf++;
		if (x[i]>media)
			sup++;
	}
	cout << endl;
}