// Dibuja:
//    00*
//    0**
//    ***  

#include <iostream>
using namespace std;

int main(){
  int altura, fila, columna, espacios;
  
  cout << "Introduce la altura del rectángulo: ",
  cin >> altura;
  for (fila = 1; fila <= altura; fila++){
	  for (espacios = 1; espacios <= altura-fila; espacios++)
		   cout << "0";
    for (columna = 1; columna <= fila ; columna++)
       cout << "*";
    cout << endl;
  }  
  return 0;
}
