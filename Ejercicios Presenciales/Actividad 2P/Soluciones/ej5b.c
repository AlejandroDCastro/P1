// Dibuja:
//    00*
//    0**
//    ***  

#include <iostream>
using namespace std;

int main(){
  int numero, i, j, l;
  
  cout << "Introduce la altura del rectángulo: ",
  cin >> numero;
  for (i = 1; i <= numero; i++){
    for (l = numero-1; l>=i; l--)
				cout << " ";
		for (j = 1; j <= i ; j++)
       cout << "*";
    cout << endl;
  }  
  return 0;
}