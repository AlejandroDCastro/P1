#include <iostream>
#include <math.h>
using namespace std;

const int ktotal = 30;
const int kmax = 20;
const int kmes = 12;
const int kdni = 10;

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
            

int main(){
  Templeados empleados;
  char seguir;
  int i, tot, pos;
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
  
}

    
    
