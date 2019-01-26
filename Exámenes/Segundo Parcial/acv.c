#include <iostream>
using namespace std;



int menu() {
    int op;

    cout << "Gestión del Zoo de Frikiville" << endl;
        cout << "--------------------------------------------------------------" << endl;
        cout << "1. Introducir nuevo animal" << endl;  
        cout << "2. Editar las observaciones de un animal." << endl;
        cout << "3. Listar los animales que comen a una hora determinada." << endl;
        cout << "4. Salir." << endl;
    cout << endl;
    cout << "Elige opción: ";
    cin >> op;
    
    return (op);
}

void datos(char n, float p, int &h1, int &h2) {
    char obs;
    
    cout << "Nombre: ";
    cin >> n;
    cout << "Peso (Kg): ";
    cin >> p;
    cout << "Observaciones: ";
    cin >> obs;
    
    do {
    cout << "¿A qué horas?" << endl;
    cout << "Comida 1: ";
    cin >> h1;
    cout << "Comida 2: ";
    cin >> h2;
    
    } while (h1<1 || h1>23 ||  h2<1 || h2>23);
}
    
    
void mostrar(char n, int h1, int h2) {
    int hora;    
    
    cout << "Introduce una hora: ";
    cin >> hora;

    if (hora==h1 || hora==h2)
        cout << n << endl;

    else
        cout << "No hay animales que comen a esa hora" << endl;

}

int main() {
    int i,h1,h2,horas,comidas;
    float p;
    char n;
    
    do {
    
    i=menu();
    
    
    switch (i) {
        case 1:
        case 2: 
            datos(n,p,h1,h2);
            break;
        
        case 3: 
            mostrar(n,h1,h2);
            break;
    }
    }while (i!=4);
}
