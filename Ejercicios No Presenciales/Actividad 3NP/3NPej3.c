#include <iostream>
using namespace std;

int condicion(int);

int main() {
    int num;

    cout << "Introduce un número entero mayor 0 y menor que 100: ";
    cin >> num;

    condicion(num);

    cout << "Correcto. Este número cumple las condiciones." << endl;
}

int condicion(int n) {
    while (n<=0 || n>=100) {
    cout << "Valor incorrecto. Vuelve a introducir un número entero mayor que 0 y menor que 100: ";
    cin >> n;
    }
    return(n);
    
}