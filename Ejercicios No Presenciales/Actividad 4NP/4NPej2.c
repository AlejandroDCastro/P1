#include <iostream>
using namespace std;


int representaMayus(char car, int num){
    int x;
    
    car=car-32;
    for (x=1; x<=num; x++){
        cout << car;
    }
    cout << endl;
}


int representaMinus(char car, int num){
    int x;
    
    car=car+32;
    for (x=1; x<=num; x++){
        cout << car;
    }
    cout << endl;
}


int minusOmayus(char car, int num){
    if (car>=65 && car<=90)   // Entonces la letra es mayúscula, y hay que representar en minúscula.
        representaMinus(car,num);

    if (car>=97 && car<=122)  // Entonces la letra es minúscula, y hay que representar en mayúscula.
        representaMayus(car,num);
}

int determinarCaracter(char car,int num){
    
    if ((car>=65 && car<=90) || (car>=97 && car<=122)) {
        minusOmayus(car,num);
    }
    else 
        cout << "SI HUBIESES INTRODUCIDO UNA LETRA MUCHO MEJOR AMIG@." << endl;
    
}


void determinarNumero(int &num) {
    
    while(num<=10 || num>=100) {
        cout << "Vuelve a introducir un número (¡entre 10 y 100!): ";
        cin >> num;
    }
}

int main() {
    int num;
    char car;
    
    cout << "Introduce un número entre 10 y 100: ";
    cin >> num;
    cout << "Introduce un carácter: ";
    cin >> car;
    
    determinarNumero(num);
    determinarCaracter(car,num);
}
    
    
