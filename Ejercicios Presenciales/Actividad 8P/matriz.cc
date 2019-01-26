#include <iostream>
using namespace std;

const int kf=5;
const int kc=5;


// prototipos funciones
void rellenar(int [][kc]);
void mostrar(int [][kc]);
void modificar(int [][kc]);
void cambio(int &);

int main(){
    int matriz[kf][kc];
    int f, c;
    
    rellenar(matriz);
    modificar(matriz);
    mostrar(matriz);
}   
 
void cambio(int &num){
    num = num * -1 - 10; 
}

void modificar(int m[][kc]){
  int f,c;
  
  do {
      cout << "Indica fila y columna a modificar:";
      cin >> f >> c;
  }while (f<0 || c<0 || f>=kf || c>=kc);
  
  cambio(m[f][c]); //paso sólo el elemento a modificar    
}

void rellenar(int m[][kc]){
  int f, c;
  
  for (f=0; f<kf; f++)
      for (c=0; c<kc; c++)
          if (c==f)
              m[f][c]=1;
          else
              if (c>f)
                  m[f][c]=2;
              else
                  m[f][c]=0;
}

void mostrar(int m[][kc]){
    int f, c;
    
    for (f=0; f<kf; f++) {
        for (c=0; c<kc; c++)
            cout << m[f][c] << " " ;
        cout << endl;
    }
}    