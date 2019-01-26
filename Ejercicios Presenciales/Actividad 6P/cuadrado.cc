#include <iostream>
using namespace std;

// prototipos de las funciones utilizadas
int leerNum();
void dibujar(int);

int main(){
    int n;

    n = leerNum();
    dibujar(n);
}

int leerNum()
{
    int num;
    do{
        cout<<"Introduzca un numero: ";
        cin >> num;
    }while (num<=0);
    return num;
}

void dibujar(int n)
{
    int filas, columnas;
    for(filas=0; filas!=n; filas++)
    {
        for(columnas=0; columnas!=n; columnas++)
        {
            cout << "*"; 
        }
        cout<< endl;
    }
}

