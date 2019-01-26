#include <iostream>
using namespace std;

int cifraIesima(int , int );


int main() {
	int num,i;
	
	cout << "Introduce un número entero: ";
	cin >> num;
	cout << "Introduce la cifra de dicho número a calcular: ";
	cin >> i;
	
	cout << cifraIesima(num,i) << endl;
	
	return 0;
}


int cifraIesima(int num,int i)  {
	int cifra;
	
	if (i==1){
		cifra=num%10;
		return (cifra);
	}
	else{
		cifraIesima(num/10,i-1);
	}
}