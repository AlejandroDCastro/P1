#include <iostream>
using namespace std;

char menu();
int leerValor();
void trian1(int);
void trian2(int);
void trian3(int);

int main(){
	char opcion, tam;
	
	do{
		opcion=menu();
		if (opcion >='1' && opcion <='3')
    		tam=leerValor();
		
		switch(opcion) {
			case '1': trian1(tam);
								break;
			case '2': trian2(tam);
								break;
			case '3': trian3(tam);
								break;
			case '4': cout << "Adiós" << endl;
								break;
			default: cout << "Error. Opción incorrecta" << endl;
		}	
			
	}while (opcion!='4');	
}

int leerValor(){
  int t;
	
	do {
	  cout << "Tamaño del triángulo: " ;
		cin >> t;
	} while (t<1);
  return(t);
}	
char menu(){
  char res;
	
	cout << "1.- Triángulo 1 " << endl;
	cout << "2.- Triángulo 2 " << endl;
	cout << "3.- Triángulo 3 " << endl;
	cout << "4.- Salir " << endl;
	cout << "Opción: ";
	cin >> res;
	return(res);
}	
void trian1(int n){
	int i, j;
	
        cout << "Triángulo 1 " << endl;
	/*for (i=1; i<=n; i++) {
		for (j=1; j<=n-i+1; j++) 
			if (i==1 || i==n || j==1 || j==n-i+1) 
		    cout << "*";
			else
				cout << "O";
		cout << endl;
	}*/
}

void trian2(int n){
	int i, j, esp;
	
        cout << "Triángulo 2 " << endl;
	/*for (i=1; i<= n; i++) {
	  for (esp=1; esp < i ; esp++)
			cout << " ";
		for (j=1; j<=; j++) 
			if (i>1 && i<n && j>1 && j<i) 
		    cout << "O";
			else
				cout << "*";
		cout << endl;
	}*/
}

void trian3(int n){
     cout << "Triángulo 3 " << endl;
}
	