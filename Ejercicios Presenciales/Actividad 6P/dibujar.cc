/*   o****o
      *****
       ****
        ***
         **
          o    */

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

int leerNum(){
    int num;

    do{
        cout << "Tamaño del dibujo: ";
        cin >> num;
    }while (num < 1);
    return(num);
}

void dibujar(int tam){
    int f, c, esp;
 
     for (f=1; f<=tam; f++) {
        for (esp=1; esp<f; esp++)
            cout << " ";
        for (c=esp; c<=tam; c++)
            if (f==1 && (c==1 || c==tam) || f==tam)
                cout << "o";
            else
                cout << "*";
        cout << endl;
    }    
    
    
    
    
    
    
    
}
