#include <iostream>
using namespace std;

void mayores(int &num1, int &num2, int &num3) {
	int aux;
	
	if (num1<num2) {
	aux=num2;
	num2=num1;
	num1=aux;
	}
	
	if (num1<num3) {
	aux=num1;
	num1=num3;
	num3=aux;
	}
	
	if (num2<num3) {
	aux=num2;
	num2=num3;
	num3=aux;
	}
}

int main() {
	int n1,n2,n3;
	
	cout << "Introduce tres números:" << endl;
	cin >> n1 >> n2 >> n3;
	
	mayores(n1,n2,n3);
	
	cout << "El número mayor es " << n1 << ", el más pequeño " << n3 << ", y el del medio " << n2 << "." << endl;
}