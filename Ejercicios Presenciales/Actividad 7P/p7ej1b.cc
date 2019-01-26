#include <iostream>
using namespace std;

const int knumTemp=24;

typedef float Ttemperatura[knumTemp];

// prototipos de las funciones
void rellenar(Ttemperatura, int);
void mostrar(Ttemperatura, int);
float calcularMedia(Ttemperatura, int);
void cuantos(Ttemperatura, int , float , int &, int &);

int main() {

  Ttemperatura temperatura;   // equivalente a float temperatura[knumTemp]
	float media;
  int n, porarriba, porabajo;
  
  do { 
		cout << "¿Cuántas temperaturas? ";
		cin >> n;
	} while (n<1 || n>knumTemp);

  rellenar(temperatura, n);
	mostrar(temperatura, n);
	
	media = calcularMedia(temperatura, n);
	cuantos(temperatura, n, media, porarriba, porabajo);
	
	cout << "la media es " << media << endl;
  cout<< "num debajo de la media: "<< porabajo << endl;
  cout << "num encima de la media: " << porarriba << endl;
}

void rellenar(Ttemperatura t, int total) {
  int i;

	for (i=0; i<total; i++) {
    cout << "introduce la temperatura: " ;
    cin >> t[i];	
  }
}

void mostrar(Ttemperatura t, int total) {
  int i;

	for (i=0; i<total; i++) {
    cout << t[i] << " , ";	
  }
	cout << endl;
}

float calcularMedia(Ttemperatura t, int total){
	
  float media, suma;
  int i;

  suma=0.0;
	for (i=0; i<total; i++) 
    suma = suma + t[i];
		
  media= suma/total;
	
	return(media);
}

void cuantos(Ttemperatura t, int total, float m, int &arriba, int &abajo){
  int i;
  arriba = 0;
	abajo = 0;

	for (i=0; i<total; i++){
		if (t[i]>m)
			arriba++;
		else if(t[i]<m)
					 abajo++;
	}				 
}					 
		

