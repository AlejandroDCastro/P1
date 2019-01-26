#include <iostream>
using namespace std;

void mayorNum(int& ,int& ,int& );
void numCorrectos(int& ,int& ,int& );

int main() {
	int num1,num2,num3;
	
	do {
		num1=0;
		num2=0;
		num3=0;
		
		cout << "Introduce tres números enteros positivos aparte(para finalizar, primer número=-1): " << endl;
		cin >> num1;
		cin >> num2;
		cin >> num3;
		
		numCorrectos(num1,num2,num3);
		
		if (num1==-1)
			return (0);
		else{
	
		mayorNum(num1,num2,num3);
	
		cout << "El mayor número es " << num1 << endl;
		cout << endl;
		}
	} while (num1>=0);
}


void mayorNum(int &n1,int &n2,int &n3) {
	int aux;
	
	if (n1<n2) {
		aux=n1;
		n1=n2;
		n2=aux;
	}
	
	if (n1<n3) {
		aux=n1;
		n1=n3;
		n3=aux;
	}
	
	if (n2<n3) {
		aux=n3;
		n3=n2;
		n2=aux;
	}
}


void numCorrectos(int &n1,int &n2,int &n3) {
	
	while (n1<-1 || n2<0 || n3<0) {
	cout << "Introduce tres números ENTEROS POSITIVOS aparte: " << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	}
}