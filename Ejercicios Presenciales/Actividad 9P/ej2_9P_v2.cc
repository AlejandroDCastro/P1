#include <iostream>
#include <math.h>
using namespace std;

const int ktotal = 30;  // tamaño del vector de empleados
const int kmax = 20;    // tamaño de las cadenas
const int kmes = 12;    // tamaño del vector de ventas
const int kdni = 10;    // tamaño para dni y teléfono

typedef char Tcadena[kmax];
typedef char Tdni [kdni];

typedef struct{
    int dia;
    int mes;
    int anyo;
}Tfecha;

typedef float Tventas[kmes];

typedef struct{
  Tdni dni;
  Tcadena nombre;
  Tcadena direccion;
  Tdni telefono;
  Tfecha fecha;
  Tventas ventas;
}Templeado;

typedef Templeado Templeados[ktotal];

void rellenarFecha(Tfecha &fecha){
    cout << "Día: " ;
    cin >> fecha.dia;
    cout << "Mes: ";
    cin >> fecha.mes;
    cout << "Año: ";
    cin >> fecha.anyo;
}

void rellenarVentas(Tventas ventas){
    int i;
    
    for (i=0; i<kmes; i++) {
        cout << "Ventas del mes " << i+1 << ": ";
        cin >> ventas[i];
    }
}  

void rellenarEmpleado(Templeado &empleado){
    
    cout << "Nombre: " ;
    cin >> empleado.nombre;
    cout << "Número de DNI: " ;
    cin >> empleado.dni;
    cout << "Dirección: " ;
    cin >> empleado.direccion;
    cout << "Teléfono: " ;
    cin >> empleado.telefono;
    cout << "Fecha de nacimiento: " << endl;
    rellenarFecha(empleado.fecha);
    cout << "Ventas del año. " << endl;
    rellenarVentas(empleado.ventas);
}    
 
void mostrarVentas(Tventas ventas){
    int i;
    
    for (i=0; i<kmes; i++) {
        cout << "Ventas del mes " << i+1 << ": ";
        cout << ventas[i] << endl;
    }
}  

void mostrarEmpleado(Templeado empleado){
    
    cout << "Nombre: " ;
    cout << empleado.nombre << endl;
    cout << "Número de DNI: " ;
    cout << empleado.dni << endl;
    cout << "Dirección: " ;
    cout << empleado.direccion << endl;
    cout << "Teléfono: " ;
    cout << empleado.telefono << endl;
    cout << "Fecha de nacimiento: " << endl;
    
    cout << empleado.fecha.dia << " / " << empleado.fecha.mes << " / " <<  empleado.fecha.anyo << endl;
    cout << "Ventas del año. " << endl;
    mostrarVentas(empleado.ventas);
} 

void buscarEmpleado(Templeados emp, int total, int &pos, float &ventas){
    int i, j;
    float suma;
    
    ventas = 0;
    for (i=0; i<total; i++) {
        suma = 0;
        for (j=0; j<kmes; j++)
            suma = suma + emp[i].ventas[j];
        if (suma > ventas) {
            ventas = suma;
            pos = i;
        }    
    }
}    
  
int buscarJoven(Templeados emp, int total){
    int i, j, pos;
    int anyo;
    
    anyo=emp[0].fecha.anyo;  // tomo como año inicial el del primer empleado
    pos=0;
    for (i=1; i<total; i++) {
        if (anyo > emp[i].fecha.anyo) {
            anyo = emp[i].fecha.anyo;
            pos = i;
        } else if (anyo == emp[i].fecha.anyo && emp[pos].fecha.mes > emp[i].fecha.mes) {
                     anyo=emp[i].fecha.anyo;
                     pos = i;
               } else if (anyo == emp[i].fecha.anyo && emp[pos].fecha.mes == emp[i].fecha.mes && emp[pos].fecha.dia > emp[i].fecha.dia) {
                          anyo=emp[i].fecha.anyo;
                          pos = i;
                      }    
    }
    return(pos);
} 

int main(){
  Templeados empleados;   // vector de 30 empleados
  char seguir;
  int i, tot, pos, joven;
  float ventas;
  
  tot=0;
  do {
    rellenarEmpleado(empleados[tot]); 
    
    tot++;
    cout << "¿Rellenar datos de otro empleado? ";  
    cin >> seguir;
  } while (seguir=='s' || seguir=='S');  
  
  cout << "----MOSTRAMOS LOS EMPLEADOS QUE TENEMOS ----" << endl;
  for (i=0; i<tot; i++)  {
    mostrarEmpleado(empleados[i]);
    cout << " --------- " << endl;
  }  
  
  // buscamos el empleado con más ventas anuales
  buscarEmpleado(empleados, tot, pos, ventas);
  cout << "El empleado del año es " << empleados[pos].nombre << endl;
  cout << "Ha tenido un total de ventas anual de " << ventas << endl;
  
  // buscamos el empleado mas joven
  joven = buscarJoven(empleados, tot);
  cout << "El empleado más joves es " << empleados[joven].nombre << endl;
  
}

    
    
