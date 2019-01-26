#include <iostream>
using namespace std;

int main() {
    int num,cif;
    
    cout << "Introduce un número entero: ";
    cin >> num;

    cif=0;

    while (num>0) {
       cif=num%10;
       num=num/10;
       
       cout << cif;
    }
    cout << endl;
}