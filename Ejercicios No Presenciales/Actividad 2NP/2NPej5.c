#include <iostream>

using namespace std;


int main() {

    int num,x,y;

    
    cout << "Introduce un número entero para la alura del rectángulo: ";

    cin >> num;


    
    for(x=1; x<=num; x++) {

         for(y=1; y<=x; y++)

            cout << "*";

        cout << endl;
    }

}