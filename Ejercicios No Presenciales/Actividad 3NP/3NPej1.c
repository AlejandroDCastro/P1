#include <iostream>
using namespace std;

int ver(int);

int main() {
  int num;
  bool res;
  
  cout << "Introduce un número entero: ";
  cin >> num;
  
  res=ver(num);
  
  if (ver(num))
	  cout << num << " es par." << endl;
	else
	  cout << num << " es impar." << endl;
}

int ver(int num) {
	bool resto;
	
	if (num%2==0)
		resto=true;
	else
		resto=false;
	return (resto);
}