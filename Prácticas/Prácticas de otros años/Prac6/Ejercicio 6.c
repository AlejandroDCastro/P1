// 9. Ejercicio propuesto 4. Resuelve
#include <iostream>
using namespace std;

void sacarTriangulo(int );
void trianguloInvertido(int );

int main() {
	int num;
	
	cout << "¿De qué tamaño será el triángulo? ";
	cin >> num;
	
	sacarTriangulo(num);
	trianguloInvertido(num);
	return 0;
}

void sacarTriangulo(int n) {
	if(n==1) {
		cout << "*" << endl;
	}
	else {
		sacarTriangulo(n-1);
		for(int i=1; i<=n; i++)
			cout << "*";
		cout << endl;
	}
}

void trianguloInvertido(int n) {
	if(n==1) {
		cout << "*" << endl;
	}
	else {
		for(int i=1; i<=n; i++)
			cout << "*";
		cout << endl;
		trianguloInvertido(n-1);
	}
}