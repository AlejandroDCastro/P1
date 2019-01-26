#include <iostream>
#include <cstring>

using namespace std;

const int TAM_CAD = 30;
const int MAX_JUGADORES = 200;

typedef struct {
  char nombre[TAM_CAD];
  char seleccion[TAM_CAD];
  int goles;
  char puesto;
} TJugador; 

int menu() {
    int opcion;
    
    cout << "Bienvenido al programa..." << endl;
    cout << "1. Leer nueva selección" << endl;
    cout << "2. Leer nuevo jugador" << endl;
    cout << "3. Listar selecciones " << endl;
    cout << "4. Listar jugadores de una selección " << endl;
    cout << "5. Mostrar pichichi " << endl;
    cout << "6. SALIR " << endl;
    cout << "Elige una opción: " << endl;
    do {
      cin >> opcion;
      if (opcion<1||opcion>6)
          cout << "opción incorrecta, escríbela otra vez" << endl;
    } while(opcion<1||opcion>6);
    return opcion;

}

TJugador leer_jugador() {
    TJugador nuevo;
    
    cout << "Introduce el nombre: ";
    cin.get();
    cin.getline(nuevo.nombre, TAM_CAD);
    cout << "Introduce la selección: ";
    cin.getline(nuevo.seleccion, TAM_CAD);
    cout << "Número de goles metidos: ";
    cin >> nuevo.goles;
    do {
      cout << "Puesto: (p-portero, d-defensa, m-medio, a-atacante) ";
      cin >> nuevo.puesto;
    } while (nuevo.puesto!='p' && nuevo.puesto != 'd' 
              && nuevo.puesto !='m' && nuevo.puesto != 'a');
    
    return nuevo;
}

void mostrar_jugador(TJugador jugador) {
    cout << "Nombre: ";
    cout << jugador.nombre << endl;
    cout << "Selección: ";
    cout << jugador.seleccion << endl;
    cout << "Goles: ";
    cout << jugador.goles << endl;
    cout << "Puesto: ";
    switch(jugador.puesto) {
        case 'p': cout << "portero";
                  break;
        case 'd': cout << "defensa";
                  break;
        case 'm': cout << "medio";
                  break;
        case 'a': cout << "atacante";
                  break;
    }
    cout << endl << "------------------" << endl;    
}


void mostrar_jugadores_seleccion(TJugador jugadores[], int num_j) {
    char buscada[TAM_CAD];
    int i;
    bool encontrada;
    
    
    cout << "¿Qué selección quieres ver? ";
    cin.get();
    cin.getline(buscada, TAM_CAD);
    encontrada = false;
    for(i=0;i<num_j;i++) {
       if (strcmp(jugadores[i].seleccion,buscada)==0) {
         mostrar_jugador(jugadores[i]);   
         encontrada = true;
       }
    }
    if (encontrada==false)
        cout << "No hay jugadores de esa selección" << endl;
    
}

int main() {
    int opc;
    TJugador jugadores[MAX_JUGADORES];
    int num_jugadores;
    
    num_jugadores = 0;
    do {
        opc = menu();
        switch(opc) {
            case 1: cout << "Todavía no implementado" << endl;
                    break;
            case 2: jugadores[num_jugadores] = leer_jugador();   
                    num_jugadores++;
                    break;
            case 4: mostrar_jugadores_seleccion(jugadores, num_jugadores);
                    break;
                    
            
        }
    } while(opc!=6);
}












