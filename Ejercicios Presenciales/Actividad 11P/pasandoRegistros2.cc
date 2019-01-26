
typedef char Tcadena [30];

typedef struct{
	char nVuelo[30];
	char linea[30];
	int datosViaje;
	int listaPas[50];
        Tcadena listaNombres[50];
	int totalPas;
}TVuelo;

void modificarRegistro(TVuelo &v){
    ......
}

void modificarLinea(char lin[]){
    ....
}   

void rellenarListaPasajeros(int lista[]){
    .....
}    
  
void rellenarListaNombres(Tcadena listaNombres[]) {
    ....
}

int main(){
   TVuelo vuelo;   // un único registro
   Tcadena nombre;
   int pos, reg;
   
   
    //rellenar el campo linea en el main
   cin >> vuelo.linea;   // relleno cadena de caracteres sin espacios
   cin.getline(vuelo.linea, 30);     // relleno cadena de caracteres con espacios
   
   //rellenar el campo listaPas en el main
   for (i=0, i<50; i++)
       cin >> vuelo.listaPas[i];
 
   
   // pasar el registro para modificarlo
   modificarRegistro(vuelo);
   
   //rellenar el campo linea
   modificarLinea(vuelo.linea);
   
   //rellenar el campo listaPas
   rellenarListaPasajeros(vuelo.listaPas);
   
  // pasar la lista de nombres para modificarla
   rellenarListaNombres(vuelo.listaNombres);
   
   
  // buscar un nombre en la lista de nombres
    cout << "Nombre a buscar: ";
    cin >> nombre;
    pos = buscarNombre(vuelo.listaNombres,nombre);
    if (pos==-1)
        cout << "Ese pasajero no existe" << endl;
    else
        cout << "El pasajero " << nombre << " está en el asiento " << pos << endl;
    
    -----------------------------------------------
    
    Tvuelos vuelos[100];   // vector de 100 registros    
    
    // buscar un nombre en el vector de vuelos y devolver la posición del registro
    cout << "Nombre a buscar: ";
    cin >> nombre;
    reg = buscarNombreVuelo(vuelos ,nombre);
       if (reg==-1)
        cout << "Ese pasajero no existe" << endl;
    else
        cout << "El pasajero " << nombre << " está en el vuelo " << vuelos[reg].nVuelo << endl;
}
 
int buscarNombreVuelo(Tvuelo vuelos[], Tcadena nombre)
{
    int a, i, pos;
    bool encontrado;
    
    pos = -1;
    encontrado=false;
    for(i=0; i<100 && !encontrado ; i++)
    {
        a=0;
        while(a<50 && strcmp(vuelos[i].listaNombres[a], nombre)!=0)
            a++;
        if (strcmp(vuelos[i].listaNombres[a], nombre)==0){
            encontrado=true;
            pos = i;
        }    
    }
    return pos;
}


int buscarNombre(Tcadena listaN[], Tcadena nom){
    int i, pos;
    
    i = 0;
    while(strcmp(listaN[i],nom)!=0 && i < 50) {
        i++;
    }
    if (strcmp(listaN[i],nom)==0)
        pos = i;
    else
        pos = -1;
    return(pos);
}    
    
