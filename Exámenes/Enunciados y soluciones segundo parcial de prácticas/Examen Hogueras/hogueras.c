#include <iostream>
using namespace std;

const int kTAMNOM = 30;
const int kNUMVOTOS = 10;
const int kNUMHOGUERAS = 200;
const int OPCION_SALIR = 4;

// Estructura Fecha de Fundación
typedef struct {
	int mes, anyo;
} TFechaFundacion;

// Estructura Ficha Hoguera
typedef struct {
    char nombre[kTAMNOM];
	int presupuesto;
    char categoria; // S=sin establecer; C=cutre; P=primera; E=especial
	TFechaFundacion fecha_fundacion;
    int num_votos;
    int votos[kNUMVOTOS]; // Cada voto tiene un valor entre 0 y 10
} TFichaHoguera;

// Declaración del tipo THogueras como array de TFichaHoguera
typedef TFichaHoguera THogueras[kNUMHOGUERAS];

// Cabecera de las funciones
int menu();
void darDeAltaHoguera(THogueras, int &);
void establecerCategorias(THogueras, int);
void mostrarGanadora(THogueras, int, char);

// Programa principal
main() {
    THogueras hogueras;
    int numHogueras=0, opcion;
    char categoria;
	bool establecidas=false;
    
    do {
        opcion = menu();
        switch(opcion) {
            case 1: darDeAltaHoguera(hogueras, numHogueras);
                    break;
            case 2: if (numHogueras>0)
			        {
				        establecerCategorias(hogueras, numHogueras);
						establecidas=true;
					}
		            else cout << "\n* ERROR: Todavía NO se ha dado de alta ninguna hoguera\n";
				    break;
			case 3: if (numHogueras>0)
	                { 
						if (establecidas)
						{
					        cout << "\n***** HOGUERA GANADORA DE UNA CATEGORÍA *****" << endl;
		                    do {
							       cout << "Introduce la categoría (E/P/C): ";
                                   cin >> categoria;
						    } while ((categoria!='E') && (categoria!='P') && (categoria!='C'));
                            mostrarGanadora(hogueras, numHogueras, categoria);
						}
						else cout << "\n* ERROR: Todavía NO se ha establecido la categoría de las hogueras\n";
		            }
		            else cout << "\n* ERROR: Todavía NO se ha dado de alta ninguna hoguera\n"; 
                    break;
            case 4: break;
        }
    } while (opcion!=OPCION_SALIR);
    cout << endl << "FIN DEL PROGRAMA" << endl << endl;
}

// Función para mostrar el menu de opciones en pantalla
int menu()
{
    int elec;
    do {
           cout << "\n********** GESTIÓN CONCURSO FOGUERES DE FRIKIVILLE **********\n";
           cout << "Seleccione una opción del menú:\n";
           cout << "1.- Dar de alta una nueva hoguera\n";
           cout << "2.- Establecer la categoría de las hogueras\n";
           cout << "3.- Mostrar la hoguera ganadora de una categoría\n";
           cout << "4.- Salir\n";
           cout << "Opción: ";
           cin >> elec;
		   cin.get();
    } while ((elec<1) || (elec>OPCION_SALIR));

   return(elec);
}

// Módulo para dar de alta los datos de una hoguera
void darDeAltaHoguera(THogueras hogueras, int &numHogueras)
{
    TFichaHoguera fichaHoguera;
    int i;
   
    cout << "\n***** ALTA DE HOGUERA *****" << endl;
    cout << "Nombre: ";
    cin.getline(fichaHoguera.nombre, kTAMNOM);
    cout << "Presupuesto: ";
	cin >> fichaHoguera.presupuesto;
	cout << "Fecha de fundación (MM AAAA): ";
    cin >> fichaHoguera.fecha_fundacion.mes >> fichaHoguera.fecha_fundacion.anyo;
    do {
           cout << "Número de votos a introducir (1..10): ";
           cin >> fichaHoguera.num_votos;
	} while ((fichaHoguera.num_votos<1) || (fichaHoguera.num_votos>10));
    for (i=0; i<fichaHoguera.num_votos; i++)
        do {
              cout << "Voto " << i+1 << " (0..10): ";
              cin >> fichaHoguera.votos[i];
        } while ((fichaHoguera.votos[i]<0) || (fichaHoguera.votos[i]>10));
    fichaHoguera.categoria='S'; // se inicializa a sin establecer
       
    hogueras[numHogueras]=fichaHoguera;
    numHogueras+=1;
    cout << "\nALTA DE HOGUERA CORRECTA" << endl;
}

void establecerCategorias(THogueras hogueras, int numHogueras)
{
    int i;
   
    for (i=0; i<numHogueras; i++)
    {
   
		if (hogueras[i].presupuesto<25000) hogueras[i].categoria='C';
		else if (hogueras[i].presupuesto<100000) hogueras[i].categoria='P';
		     else hogueras[i].categoria='E';
	}
	cout << "\n***** CATEGORÍAS DE LAS HOGUERAS *****" << endl;
	for (i=0; i<numHogueras; i++)
	{
		cout << "* Hoguera " << hogueras[i].nombre << " - Categoría ";
	    switch(hogueras[i].categoria)
        {
            case 'E': cout << "Especial" << endl;
		              break;
	        case 'P': cout << "Primera" << endl;
		              break;
	        case 'C': cout << "Cutre" << endl;
		              break;
	   }
    }
    cout << endl << endl;
	cout << "CATEGORÍAS ESTABLECIDAS CORRECTAMENTE" << endl; 
}

void mostrarGanadora(THogueras hogueras, int numHogueras, char categoria)
{
   int i, j, suma, vez=1, pos_mayor, mayor=0;
   
   cout << endl;
   for (i=0; i<numHogueras; i++)
   {
       if (hogueras[i].categoria==categoria)
       {
		   if (vez==1)
		   {
			   cout << "* La Hoguera ganadora de la categoría ";
			   switch(categoria)
			   {
				   case 'E': cout << "Especial es ";
					   break;
				   case 'P': cout << "Primera es ";
					   break;
				   case 'C': cout << "Cutre es ";
					   break;
			   }
			   vez=0;
		   }
		   suma=0;
		   for (j=0; j<hogueras[i].num_votos; j++)
			   suma=suma+hogueras[i].votos[j];
		   if (suma>mayor)
		   {
			   mayor=suma;
			   pos_mayor=i;
		   }
       }
    }
	if (vez==1) cout << "* ERROR: No se ha dado de alta ninguna hoguera de esa categoría";
    else cout << hogueras[pos_mayor].nombre;
	cout << endl << endl;
}
