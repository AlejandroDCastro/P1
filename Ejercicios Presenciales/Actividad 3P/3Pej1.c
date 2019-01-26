#include <iostream>
using namespace std;

int absoluto (int num) {
    int result;

    if (num<0) {
        result=(-1)*num;
    }
    else
        result=num;
    
    return(result);
}

bool conflicto (int x0, int y0, int x1, int y1) {
    int result;

    if (x0==x1 || y0==y1 || absoluto(x1-x0)==absoluto(y1-y0))
        result=true;               // Aquí calcula el valor absoluto de esa recta.                      
    else                           // El movimiento de la reina es horizontal Y DIAGONAL, de ahí la ultima condición. Con esta condición la distancia es exacta.
        result=false;

    return(result);
}


int main() {
    int x0,y0,x1,y1;
    
    cout << "Introduce las coordenadas (x y) de una reina del tablero: " << endl;
    cin >> x0 >> y0;
    cout << "Introduce las coordenadas (x y) de la otra reina del tablero: " << endl;
    cin >> x1 >> y1;

    if(conflicto(x0,y0,x1,y1))  // Puesto así, la condición recoge el valor 'true' de el módulo 'conflicto'.
        cout << "Las reinas se atacan." << endl;
    else
        cout << "Las reinas no se atacan." << endl;
}

    