#include <iostream>
using namespace std;

void operaciones(int, int, int &, int &);

int main() {
    int num1,num2,cuenta,suma;

    cuenta=0;
    suma=0;

    cout << "Introduce dos números:" << endl;
    cin >> num1;
    cin >> num2;

    operaciones(num1,num2,cuenta,suma);

    cout << "La suma de los números comprendidos entre " << num1 << " y " << num2 << " es " << suma << endl;
    cout << "Cantidad de números = " << cuenta << endl;
}

void operaciones(int n1, int n2, int &cuent, int &res) {
    int a;  //'a' almacenará los valores conprendidos entre los números pedidos al usuario.

    for (a=n1+1; a<n2; a++) {
        cuent=cuent+1;
        res=res+a;
    }
}