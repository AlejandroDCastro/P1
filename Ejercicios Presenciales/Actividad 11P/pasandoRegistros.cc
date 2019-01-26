
typedef char Tcadena [30];

typedef struct{
	char nVuelo[200];
	char linea[30];
	int datosViaje;
	int listaPas[50];
        Tcadena listaNombres[50];
	int totalPas;
}TVuelo;


void rellenarRegistro(TVuelo &);   /prototipo de la función


int main(){
   TVuelo vuelo;   // un único registro
   TVuelo vuelos[100];    // un vector de registros
   Tcadena nombre;
   int pos, reg;
   
   
   // pasar el registro para modificarlo
   rellenarRegistro(vuelo);    // paso la variable registro
   
   //rellenar el campo linea
   cin >> vuelo.linea;   // relleno cadena de caracteres sin espacios
   cin.getline(vuelo.linea, 30);     // relleno cadena de caracteres con espacios
   
   //rellenar el campo listaPas
   for (i=0, i<50; i++)
       cin >> vuelo.listaPas[i];
  
  // pasar la lista de pasajeros para modificarla
   rellenarLista(vuelo.listaPas);
   
  // buscar un nombre en la lista de nombres
    cout << "Nombre a buscar: ";
    cin >> nombre;
    pos = buscarNombre(vuelo.listaNombres, nombre);
    cout << << endl;
    
    // buscar un nombre en el vector de vuelos y devolver la posición del registro
    cout << "Nombre a buscar: ";
    cin >> nombre;
    reg = buscarNombreVuelo(vuelos, nombre);

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
    

void rellenarRegistro(TVuelo &vuelo){    // definición de la función
    int a;
    fr
}

void rellenarLista(int lista[]) {
    dfdfjdf
}

