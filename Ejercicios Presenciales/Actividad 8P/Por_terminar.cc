/* Realiza un programa que lea por teclado una palabra
   y a continuación sustituya cada letra 'a' por 'A'.
   Deberá contener los módulos:
   - leer palabra
   - mostrar palabra (la mostrará antes y después del cambio
   - modificar palabra
*/

#include <iostream>
using namespace std;

const int ktam=25;

typedef char Tcadena [ktam];

void mostrarPalabra(Tcadena );
void leerPalabra(Tcadena );

int main(){
    Tcadena cadena;
    

    leerPalabra(cadena);
    cout << "La palabra antes del cambio es ";
    mostrarPalabra(cadena);
    modificarPalabra(cadena);
    cout << "La palabra después del cambio es ";
    mostrarPalabra(cadena);
}  

void leerPalabra(Tcadena cad) {
    int i;
    
    i=0;
    cout << "Introduce una palabra terminada en .: ";
    do{
       cin >> cad[i];
       i++;
    }while(cad[i-1]!='.' && i<ktam);
    cad[i-1]='\0';
} 

void mostrarPalabra(Tcadena cad) {
    int i;
    
    i=0;
    while(cad[i]!='\0') {
        cout << cad[i];
        i++;
    } 
    cout << endl;
}    

void modificarPalabra(Tcadena cad){
    
    
}    