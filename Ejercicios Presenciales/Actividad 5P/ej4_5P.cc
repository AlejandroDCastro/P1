#include <iostream>
using namespace std;

int impares(int);

int main(){
  int num;
	
	do {
		cout << "Introduce un número: ";
		cin >> num;
	}while (num<1);
	
	cout << "El número " << num << " tiene " << impares(num) << " números impares" << endl;
}

int impares(int n) {
  int suma;

  if (n==0)
	  suma = 0;
	else	
		if (n%2 == 0)
		   suma = impares(n/10);
		else
				suma = 1 + impares(n/10);
	return(suma);
}	
	