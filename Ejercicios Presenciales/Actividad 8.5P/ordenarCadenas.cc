#include <iostream>
#include <string.h>
using namespace std;

const int kmax=20;
const int ktope=7;

typedef char Tcadena [kmax];

void rellenar(Tcadena []); 
void mostrar(Tcadena []);
void ordenar(Tcadena []);

int main( ) {
  Tcadena vector[ktope];  
  int i;

  rellenar(vector);
  cout << "Antes de la ordenación : ";
  mostrar(vector);
  ordenar(vector);
  cout << "Después de la ordenación : ";
  mostrar(vector);
}

void rellenar (Tcadena v[]) {
    int i;
     
    for (i=0; i<ktope; i++) {
      cout << "Escribe una palabra: ";
      cin>>v[i];
    }
}

void mostrar (Tcadena v[]) {
    int i;
     
    for (i=0; i<ktope; i++) {
      cout << v[i] << " ";
   }
   cout << endl;
}

void ordenar (Tcadena v[]){
  int i, j, k;
  Tcadena aux;
  
  k=0;
  while (k<ktope-1) {
     i=k;
     j=k+1;
     while (j<ktope) {
       if (strcmp(v[j],v[i]) < 0)
	  i=j;
       j=j+1;
     }
     strcpy(aux, v[k]);
     strcpy(v[k],v[i]);
     strcpy(v[i],aux);
     k=k+1;
  }
}
       
