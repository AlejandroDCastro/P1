#include <iostream> 
#include <cstdlib>
using namespace std;

const int kmax = 20;
const int kfabric = 10;
const int kmedicam = 500;
const int klaborat = 50;

typedef char Tcadena[kmax];
typedef int Tfabricante[kfabric];

typedef struct{
	int codigo;
	Tcadena nombre;
	Tcadena descripcion;
	float precioCompra;
	float precioVenta;
	Tcadena componente;
	int totalFabric;
	Tfabricante fabricante;
}Tmedicamento;

typedef struct {
    int codigo;
	Tcadena nombre;
	Tcadena domicilio;
} Tlaboratorio;

void limpiabuffer() {
  while (cin.get() != '\n');
}
	
void rellenarMedicamento(Tmedicamento &medicamento, int tm){
	int i;
	
	medicamento.codigo = tm + 1;  // rellenamos código de medicamento automáticamente
	cout << "Nombre: " << endl;
	cin>> medicamento.nombre;
	cout << "Descripción: " << endl;
	cin >> medicamento.descripcion;
	cout << "Precio de compra: " << endl;
	cin >> medicamento.precioCompra;
	cout << "Precio de venta: " << endl;
	cin >> medicamento.precioVenta;
	cout << "Componente: " << endl;
	cin >> medicamento.componente;
	cout << "Cuántos laboratorios fabrican este medicamento?: ";
	cin >> medicamento.totalFabric;
	for (i=0; i < medicamento.totalFabric; i++) {
		cout << "Código de laboratorio fabricante: ";
		cin >> medicamento.fabricante[i];
	}	
}

void mostrarMedicamento(Tmedicamento med){	
	int i;
	
	cout <<"Código: " << med.codigo << endl;
	cout <<"Nombre: " << med.nombre << endl;
	cout <<"Descripción: " << med.descripcion << endl;
	cout << "Precio de compra: " << med.precioCompra << endl;
	cout << "Precio de venta: " << med.precioVenta << endl;
	cout << "Componente: " << med.componente << endl;
	cout << "Laboratorios que lo fabrican: ";
	for (i=0; i < med.totalFabric; i++)
		cout << med.fabricante[i] << " ";
	cout << endl;	
}

void mostrarTodosMedic(Tmedicamento med[], int cont){
  int i;
	
	for (i=0; i<cont; i++) {
	  mostrarMedicamento(med[i]);
	  cout << "---------" << endl;
	}	
}

	
void rellenarLaboratorio(Tlaboratorio &laboratorio, int tl){
	int i;
	
	laboratorio.codigo = tl + 1;  // rellenamos código laboratorios automáticamente 
	cout << "Nombre: " << endl;
	cin >> laboratorio.nombre;
	cout << "Domicilio: " << endl;
	cin >> laboratorio.domicilio;	
}

void mostrarLaboratorio(Tlaboratorio lab){	
	cout <<"Código: " << lab.codigo << endl;
	cout <<"Nombre: " << lab.nombre << endl;
	cout <<"Domicilio: " << lab.domicilio << endl;
}

void mostrarTodosLaborat(Tlaboratorio lab[], int cont){
  int i;
	
	for (i=0; i<cont; i++) {
	  mostrarLaboratorio(lab[i]);
	  cout << "--------" << endl;
	}	  	
}

void mostrarMedicBeneficio(Tmedicamento med[], int tm){
  float beneficio;
  int i, pos;
  
  beneficio = med[0].precioVenta - med[0].precioCompra;
  pos = 0;
  for (i=0; i < tm; i++) {
		if (beneficio < med[i].precioVenta - med[i].precioCompra) {
			beneficio = med[i].precioVenta - med[i].precioCompra;
			pos = i;
		}
  }	
  cout << "Medicamento con mayor beneficio: " << endl;
  mostrarMedicamento(med[pos]);			
}


char menu() {
	char op;
	
	cout << endl;
	cout << "1. Introducir un medicamento." << endl;
	cout << "2. Mostrar un medicamento." << endl;
	cout << "3. Mostrar todos los medicamentos." << endl;
	cout << "4. Introducir un laboratorio." << endl;
	cout << "5. Mostrar un laboratorio." << endl;
	cout << "6. Mostrar todos los laboratorios. " << endl;
	cout << "7. Mostrar medicamento con mayor beneficio " << endl;
	cout << "8. Salir." << endl;
	cin >> op;
	return(op);
}
	
int main(){
	
	Tmedicamento medicamentos[kmedicam];  // variable medicamentos es un vector de 500 Tmedicamento
	Tlaboratorio laboratorios[klaborat];
	int codigo, totalMed, totalLab;
	char opcion;
	totalMed = 0;
	totalLab = 0;
	
	do{
		opcion = menu(); 
		limpiabuffer();
	
		switch(opcion){
			case '1':
				cout << "Rellenando medicamento " << totalMed+1 << endl;
				rellenarMedicamento(medicamentos[totalMed], totalMed);
				totalMed++;
				break;
			case '2':
				if (totalMed>0) {
					do {
						cout << "Qué medicamento quieres mostrar? " ;
						cin >> codigo;
						if (codigo < 1 || codigo > totalMed)
							cout << "Ese medicamento no existe" << endl; 
					}while(codigo<1 || codigo>totalMed);
					mostrarMedicamento(medicamentos[codigo-1]);
				} else
					cout << "Todavía no hay medicamentos" << endl;	
				break;
			case '3':
            	mostrarTodosMedic(medicamentos, totalMed);	
				break;
			case '4':
				cout << "Rellenando laboratorio " << totalLab+1 << endl;
				rellenarLaboratorio(laboratorios[totalLab], totalLab);
				totalLab++;
				break;
			case '5':
				if (totalLab > 0) {
					do {
						cout << "Qué laboratorio quieres mostrar? " ;
						cin >> codigo;
						if (codigo < 1 || codigo > totalLab+1)
							cout << "Ese laboratorio no existe" << endl; 
					}while(codigo<1 || codigo>totalLab+1);
					mostrarLaboratorio(laboratorios[codigo-1]);
				} else
					cout << "Todavía no hay laboratorios" << endl;
				break;
			case '6':
            	mostrarTodosLaborat(laboratorios, totalLab);	
				break;
			case '7':
            	if (totalMed>0)
            		mostrarMedicBeneficio(medicamentos, totalMed);	
            	else
            		cout << "Todavía no hay medicamentos";
				break;
			case '8':
		  		cout << "Chao " << endl;
				break;
			default:
				cout << "Opción incorrecta" << endl;
		
		}
  	}while (opcion != '8');	
	
}
