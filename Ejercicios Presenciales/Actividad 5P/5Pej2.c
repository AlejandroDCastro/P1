#include <iostream>
using namespace std;

int cBinario(int );

int main() {
    int num;
    
    cout << "Introduce un número: ";
    cin >> num;
    
    cBinario(num);
    cout << endl;
}

int cBinario(int n) {
    int kodigo;
    
    if (n<2)
        cout << n;
    
    else {   
        kodigo=n%2;
        cBinario(n/2);
        cout << kodigo;
    }
}