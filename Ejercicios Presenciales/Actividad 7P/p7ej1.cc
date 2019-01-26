#include <iostream>
using namespace std;

const int knumTemp=24;

// prototipos de las funciones
void rellenar(float [], int);
void mostrar(float [], int);
float calcularMedia(float [], int);
void cuantos(float [], int , float , int &, int &);

int main() {

  float temperatura[knumTemp];
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

void rellenar(float t[], int total) {
  int i;

	for (i=0; i<total; i++) {
    cout << "introduce la temperatura: " ;
    cin >> t[i];	
  }
}

void mostrar(float t[], int total) {
  int i;

	for (i=0; i<total; i++) {
    cout << t[i] << " , ";	
  }
	cout << endl;
}

float calcularMedia(float t[], int total){
	
  float media, suma;
  int i;

  suma=0.0;
	for (i=0; i<total; i++) 
    suma = suma + t[i];
		
  media= suma/total;
	
	return(media);
}

void cuantos(float t[], int total, float m, int &arriba, int &abajo){
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
		

