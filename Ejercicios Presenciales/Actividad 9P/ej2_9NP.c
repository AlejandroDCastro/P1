#include <iostream>
using namespace std;

typedef char TCadena[15];

typedef struct{
  int dia;
  int mes;
  int anyo;
}TFecha;

typedef struct{
  TCadena nombre;
  TCadena ape1lido1;
  TCadena apellido2;
}TIdentidad;

typedef struct{
  TCadena ciuRes;
  TCadena provRes;
}TLugar;

typedef struct{
  int num[8];
  char letra;
}TDNI;

typedef struct{
  TCadena nombre;
  TFecha nac;
  TLugar lugarNac;
}THijo;

typedef struct{
  TIdentidad ident;
  TDNI dni;
  TFecha expDNI;
  TFecha valDNI;
  TIdentidad padre;
  TIdentidad madre;
  TLugar lugarNac;
  TLugar lugarRes;
  THijo hijos[5];
  int numHijos;
  TFecha nac;
}TPersona;
  
typedef TPersona TDatos[90];

main(){
}
  