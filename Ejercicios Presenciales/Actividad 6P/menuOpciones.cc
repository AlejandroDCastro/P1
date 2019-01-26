/* Realiza un programa que muestre un men� con las siguientes opciones:
-	Indicar si un n�mero es par
-	Indicar si la suma de los divisores de un n�mero es par
-	Devolver el total de cifras y la suma de sus cifras de un n�mero dado.
-	Salir
Deber� repetirse hasta que el usuario elija Salir.  */


#include <iostream>
using namespace std;

char menu();
int leerValor();
bool esPar(int);
bool divesPar(int);
void cifras(int, int &, int &);

int main(){
	char opcion;
	int num, total, sum;
	
	do{
		opcion=menu();
		if (opcion >='1' && opcion <='3')
    		num=leerValor();
		
		switch(opcion) {
			case '1': if (esPar(num)==true)
									cout << "El n�mero " << num << " es par" << endl;
								else
									cout << "El n�mero " << num << " NO es par" << endl;
								break;
			case '2': if (divesPar(num)==true)
									cout << "La suma de sus divisores es par" << endl;
								else
									cout << "La suma de sus divisores NO es par" << endl;
								break;
			case '3': cifras(num, total, sum);
			          cout << "El " << num << " tiene " << total << " cifras" << endl;
								cout << "Las cifras de  " << num << " suman " << sum << endl;
								break;
			case '4': cout << "Adi�s" << endl;
								break;
			default: cout << "Error. Opci�n incorrecta" << endl;
		}	
			
	}while (opcion!='4');	
}

int leerValor(){
  int n;
	
	do {
	  cout << "Introduce un n�mero: " ;
		cin >> n;
	} while (n<1);
  return(n);
}	
char menu(){
  char res;
	
	cout << "***************************************************" << endl;
	cout << "1.- Ver si es par " << endl;
	cout << "2.- Ver si la suma de sus divisores es par " << endl;
	cout << "3.- Indicar n�mero de cifras y suma de sus cifras " << endl;
	cout << "4.- Salir " << endl;
	cout << "Opci�n: ";
	cin >> res;
	return(res);
}	
bool esPar(int n){
	bool es;
	es = false;
	if (n%2 == 0)
		es = true;
	return(es);
}

bool divesPar(int n){

}	

void cifras(int n, int &total, int &suma){
     
}
	