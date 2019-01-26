#include <iostream>
using namespace std;


int dobleMitad(int num1,int num2);


int main() {
    int num1,num2;
    
    cout << "Introduce dos números aparte: " << endl;
    cin >> num1;
    cin >> num2;
	cout << endl;
	
    cout << "El resultado de multiplicar " << num1 << " por " << num2 << " es " << dobleMitad(num1,num2) << endl;
}

int dobleMitad(int n1,int n2) {
    int suma;
    
    if (n2==1){
		cout << n1 << " " << n2 << endl;
        suma==0;
	}
    else{
        if(n2%2==0){
			cout << n1 << " " << n2 << endl;
            suma=dobleMitad(n1*2,n2/2);
		}
        else {
			cout << n1 << " " << n2 << endl;
            suma=dobleMitad(n1*2,n2/2)+n1;		// No poner 'return' en este tipo de módulos recursivos.
		}
   }
}
