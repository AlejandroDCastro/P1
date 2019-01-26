#include <iostream>
using namespace std;

int main() {
    int x,y,num1,num2,aux;
	char car;
	
	cout << "Introduce una carácter: ";
	cin >> car;
	
	cout << "Introduce dos números aparte:" << endl;
	cin >> num1;
	cin >> num2;
	
	if (num2>num1) {
	    aux=num2;
		num2=num1;
		num1=aux;
	}
	
	for(x=1; x<=num2; x++) {
	    for(y=1; y<num1; y++)
		  cout << car;
		cout << endl;
	}
}