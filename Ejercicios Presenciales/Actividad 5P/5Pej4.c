#include <iostream>
using namespace std;

int nImpares(int );

int main() {
    int num;
    
    cout << "Introduce un número natural: ";
    cin >> num;
    
    cout << "Los números impares de " << num << " son " << nImpares(num) << endl;
}

int nImpares(int n) {
    int imp,cif;
    
    if(n==0){
        imp=0;
    }
    else {
        if(n%2==0)
            imp=nImpares(n/10);   // Cuando hay que devolver una variable, es más cómodo/conveniente igualarlo.
        else
            imp=1+nImpares(n/10);
    }
}