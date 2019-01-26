#include <iostream>
using namespace std;

int division(int ,int );

int main() {
    int num1,num2;

    cout << "Introduce un número natural como dividendo de la división: ";
    cin >> num1;
    cout << "Introduce un número natural como divisor de la división: ";
    cin >> num2;
    
    cout << "El resultado de dividir " << num1 << " entre " << num2 << " es " << division(num1,num2) << endl;
}

int division(int n1,int n2) {
    int op;
    
    if (n1<n2)
        op=0;             // Aquí se devulve el '0' al elemento recursivo del caso, no indica directamente el valor de 'op'. 
    
    else
        op=1+division(n1-n2,n2);
}