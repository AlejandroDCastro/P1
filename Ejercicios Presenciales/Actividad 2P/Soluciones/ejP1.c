/* Implementa un programa que solicite al usuario dos números y calcule el cociente
 y el resto de la división entera sin utilizar los operadores / y %. */


#include <iostream>
using namespace std;
     
int main() {
    int disor, didendo, coc, resto;
            
    do {
      cout << "Introduce el dividendo y el divisor (positivos) separados por espacio: ";
      cin >> didendo >> disor;
      if (disor == 0)
	       cout << "El divisor no puede ser 0" << endl ;
    } while (disor == 0);
     
    coc=0;
    resto = didendo;
    while (resto >= disor) {   
       resto = resto - disor;
       coc++;
    }
    cout << didendo << " / " << disor << " = " << coc << endl;
    cout << didendo << " % " << disor << " = " << resto << endl;
     
    return 0;
}   


        
    
    
