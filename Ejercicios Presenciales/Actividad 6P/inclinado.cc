/* ejercicio que dibuja un cuadrado completo */

#include <iostream>
using namespace std;

// prototipos de las funciones utilizadas
int leerNum();
void dibujar(int);
void dibujar2(int);

int main(){
    int n;

    n = leerNum();
    dibujar(n);
    dibujar2(n);
}

int leerNum(){
    int num;
    do{
        cout<<"Introduzca un numero: ";
        cin >> num;
    }while (num<=0);
    return num;
}

void dibujar(int n){
    int filas, columnas;
    
    for(filas=1; filas<=n; filas++){
        for(columnas=1; columnas<=n-filas+1; columnas++){
            if (filas==1 || filas==n || columnas==1 || columnas==n)
              cout << "*"; 
            else
              cout << "o";
        }
        cout<< endl;
    }
}

void dibujar2(int n){
    int filas, columnas, esp;
    
    for (filas=1; filas<=n; filas++){
        for (esp=1; esp<filas ; esp++)
            cout << " ";
        for (columnas=filas; columnas<=n; columnas++){
            if (filas==1 || filas==n || columnas==1 || columnas==n)
              cout << "*"; 
            else
              cout << "o";
        }
        cout<< endl;
    }
}

