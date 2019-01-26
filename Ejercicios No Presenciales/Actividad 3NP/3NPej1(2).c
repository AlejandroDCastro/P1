#include <iostream>
using namespace std;

int ver(int);

int main() {
  int num;
  
  cout << "Introduce un número entero: ";
  cin >> num;
  
  ver(num);
  
  if (ver(num)) //llamada a la función
		cout << num << " es par" << endl;
  else
		cout << num << " es impar" << endl;
	return 0; 
}

int ver(int num) {
	bool verificar;
	
	if (num%2==0)
		verificar=true;
	else
		verificar=false;
	return (verificar);
}