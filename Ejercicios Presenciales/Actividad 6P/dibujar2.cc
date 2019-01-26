/*       *
        *o*
       *o*o*
      *o*o*o*
     *o*o*o*o*
    *o*o*o*o*o*      */

#include <iostream>
using namespace std;

// prototipos de las funciones utilizadas
int leerNum();
void arbol(int);

int main(){
    int n;

    n = leerNum();
    arbol(n);
}

int leerNum(){
    int num;

    do{
        cout << "Tamaño del dibujo: ";
        cin >> num;
    }while (num < 1);
    return(num);
}

void arbol(int tam){
    int f, c, esp;
 
     for (f=1; f<=tam; f++) {
        for (esp=1; esp<=tam-f; esp++)
            cout << " ";
        for (c=1; c<=2*f-1; c++)
            if (c%2!=0)
              cout << "*";
            else
              cout << "o";
        cout << endl;
    }    
}
