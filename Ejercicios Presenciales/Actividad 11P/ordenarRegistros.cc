// ejemplo de ordenación de un vector de registros por el campo nombre 
#include <iostream>
#include <string.h>

using namespace std;

const int kmax=20;
const int ktope=5;

typedef char Tcadena [kmax];

typedef struct{
    Tcadena nombre;
    int edad;
    char sexo;   // M masculino   F femenino
    float altura;
    char color;   // B blanco   N negro   ....
    char ojos;   // A azules  V verdes   M marrones   P pardos ....
    Tcadena nacionalidad;
}Tpersona;    
    
typedef Tpersona Tpersonas [ktope];    // Tpersonas   <=>     Tpersona   [ktope]  



void rellenar(Tpersonas ); 
void mostrar(Tpersonas );
void ordenar(Tpersonas);

int main( ) {
  Tpersonas personas;   // vector de 100 registros de Tpersona  
  int i;

  rellenar(personas);
  cout << "Antes de la ordenación : ";
  mostrar(personas);
  ordenar(personas);
  cout << "Después de la ordenación : ";
  mostrar(personas);
}

void rellenar (Tpersonas v) {
    int i;
     
    for (i=0; i<ktope; i++) {
      cout << "Escribe un nombre: ";
      cin>>v[i].nombre;
    }
}

void mostrar (Tpersonas v) {
    int i;
     
    for (i=0; i<ktope; i++) {
      cout << v[i].nombre << " ";
   }
   cout << endl;
}

void ordenar (Tpersonas v){
  int i, j, k;
  Tpersona aux;
  
  k=0;
  while (k<ktope-1) {
     i=k;
     j=k+1;
     while (j<ktope) {
       if (strcmp(v[j].nombre,v[i].nombre) < 0)
	  i=j;
       j=j+1;
     }
     aux = v[k];
     v[k] = v[i];
     v[i] = aux;
     k=k+1;
  }
}
       
