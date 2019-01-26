#include <iostream>
#include <cstdlib>
using namespace std;

const int ktam = 20;
const int kcont = 10;

typedef int Tvector[ktam];
typedef int Tcont[kcont];

// prototipos de las funciones
void inicializarVector(Tcont );
void rellenarVector(Tvector );
void mostrarVectores(Tvector , Tvector );
void mostrarVector1(Tcont );
void mostrarVector2(Tcont );
int contarCoincidencias1(Tvector , Tvector , Tcont );
void contarCoincidencias2(Tvector , Tvector , Tcont );


int main(){
	Tvector v1, v2;
	Tcont vcont;
	int coincid;
	
	srand(time(NULL));
	
	rellenarVector(v1);
	rellenarVector(v2);
	
	mostrarVectores(v1, v2);
	
	// Versión 1
	inicializarVector(vcont);
	coincid = contarCoincidencias1(v1, v2, vcont);
	if (coincid > 0) {
		cout << "Hay " << coincid << " coincidencias: " << endl;
		mostrarVector1(vcont);
	}	
	
	// Versión 2
	inicializarVector(vcont);
	contarCoincidencias2(v1, v2, vcont);
	mostrarVector2(vcont);
	
}

void inicializarVector(Tcont v){
	int i;
  	
  	for (i=0; i<kcont; i++)
  		v[i] = 0;
}  		
 
void rellenarVector(Tvector v){
	int i;
  	
  	for (i=0; i<ktam; i++)
  		v[i] = rand()%kcont+ 1;
} 
   
void mostrarVectores(Tvector v1, Tvector v2){
	int i;
  	
  	for (i=0; i<ktam; i++)
		cout << v1[i] << "       " << v2[i] << endl; 
}

void mostrarVector1(Tcont v){
	int i;
  	
  	for (i=0; i<kcont; i++)
  	    if (v[i] != 0)
  			cout << i+1 << " coincide en posición y contenido " << v[i] << " veces" << endl; 
}  

void mostrarVector2(Tcont v){
	int i;
  	
  	for (i=0; i<kcont; i++)
  	    if (v[i] != 0)
  			cout << i+1 << " aparece " << v[i] << " veces. " << endl; 
}  	
	
int contarCoincidencias1(Tvector v1, Tvector v2, Tcont v){
   int coin, i;
   
   coin = 0;
   for (i=0; i<ktam; i++)
   		if (v1[i] == v2[i]){
   			v[v1[i]-1]++;
   			coin++;
   		}	
   	return(coin);	
}

	
void contarCoincidencias2(Tvector v1, Tvector v2, Tcont v){
	int i, j;   
   

   for (i=0; i<ktam; i++)
   		if (v[v1[i]-1]==0)
   			for (j=0; j<ktam; j++)
   				if (v1[i] == v2[j])
   					v[v1[i]-1]++;
   	   	   			
}

