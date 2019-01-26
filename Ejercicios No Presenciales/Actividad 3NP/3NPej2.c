#include <iostream>
using namespace std;

void intercambiar(int &, int &);

int main () {
    int num1,num2;

    cout << "Introduce dos números: " << endl;
    cin >> num1 >> num2;

    intercambiar(num1,num2);

    cout << "Ahora, el primer número toma el valor " << num1 << " y el segundo " << num2 << "." << endl;
}

void intercambiar(int &n1, int &n2) {
    int aux;
    
    aux=n1;
    n1=n2;
    n2=aux;
}