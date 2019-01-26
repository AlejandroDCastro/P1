#include <iostream>
using namespace std;

const int kMAXTAL=5;
const int kMAXPRO=100;

typedef struct {
	int cod;
	char tipo;
	char talla;
	int desc[kMAXTAL];
	float precio;
} TDatosProducto;

typedef TDatosProducto TProductos[kMAXPRO];

int menu();
void introducirDatos(TDatosProducto &);
void calcularPrecio(TDatosProducto &);
int calcularDescuento(int []);
void mostrarProducto(TDatosProducto &);

int main() {
	int op, numProductos=0, codigo;
	TProductos productos;
	bool salir=false;
	
	do {
		op=menu();
		switch(op) {
			case 1: if(numProductos<kMAXPRO) {
						introducirDatos(productos[numProductos]);
						numProductos++;
					}
					else cout << "No es posible introducir m�s productos." << endl;
			break;
			
			case 2: if(numProductos>0) {
						int cant=0;
						cout << "Introduce el c�digo del producto: ";
						cin >> codigo;
						for(int i=0; i<numProductos; i++) {
							if(productos[i].cod==codigo) {
								calcularPrecio(productos[i]);
								i=numProductos;
							}
							else cant++;
						}
						if(cant==numProductos)
							cout << "No existe dicho producto en el almac�n." << endl;
					}
					else cout << "No hay productos en el almac�n." << endl;
					cout << endl;
			break;
			
			case 3: if(numProductos>0) {
						int cant=0;
						cout << "Introduce el c�digo del producto: ";
						cin >> codigo;
						for(int i=0; i<numProductos; i++) {
							if(productos[i].cod==codigo) {
								mostrarProducto(productos[i]);
								i=numProductos;
							}
							else cant++;
						}
						if(cant==numProductos)
							cout << "No existe dicho producto en el almac�n." << endl;
					}
					else cout << "No hay productos en el almac�n." << endl;
					cout << endl;
			break;
			
			case 4: salir=true;
		}
	}while(!salir);
	return 0;
}

int menu() {
	int a;
	
	cout << "**********MENU**********" << endl;
	cout << "1. Introducir datos de producto." << endl;
	cout << "2. Calcular precio de un producto." << endl;
	cout << "3. Mostrar datos de un producto." << endl;
	cout << "4. Salir." << endl;
	cout << "Elige opci�n: ";
	cin >> a;
	cout << endl;
	return a;
}

// OPCI�N 1 //////////////////////////////////////////////////////////////////////
void introducirDatos(TDatosProducto &producto) {
	int numDesc;
	
	for(int j=0; j<kMAXTAL; j++)
		producto.desc[j]=0;
	cout << "Introduce el c�digo: ";
	cin >> producto.cod;
	do{
		cout << "Introduce el tipo(c,r,e): ";
		cin >> producto.tipo;
	}while(producto.tipo!='c' && producto.tipo!='r' && producto.tipo!='e');
	do{
		cout << "Introduce la talla(i,j,a): ";
		cin >> producto.talla;
	}while(producto.talla!='i' && producto.talla!='j' && producto.talla!='a');
	do{
		cout << "Introduce el n� de descuentos: ";
		cin >> numDesc;
	}while(numDesc<0 || numDesc>5);
	for(int i=0; i<numDesc; i++) {
		do {
			cout << "Descuento " << i+1 << ": ";
			cin >> producto.desc[i];
		}while(producto.desc[i]<5 || producto.desc[i]>70);
	}
	cout << endl;
}
// OPCI�N 1 //////////////////////////////////////////////////////////////////////


// OPCI�N 2 //////////////////////////////////////////////////////////////////////
void calcularPrecio(TDatosProducto &producto) {
	int precioInicial, precioUnico;
	int descuento;
	
	if(producto.talla=='i') {
		if(producto.tipo=='c') precioInicial=40;
		if(producto.tipo=='r') precioInicial=65;
		if(producto.tipo=='e') precioInicial=30;
	}
	if(producto.talla=='j') {
		if(producto.tipo=='c') precioInicial=50;
		if(producto.tipo=='r') precioInicial=85;
		if(producto.tipo=='e') precioInicial=40;
	}
	if(producto.talla=='a') {
		if(producto.tipo=='c') precioInicial=60;
		if(producto.tipo=='r') precioInicial=105;
		if(producto.tipo=='e') precioInicial=50;
	}
	descuento=calcularDescuento(producto.desc);
	precioUnico=descuento*precioInicial;
	producto.precio=precioUnico;
	cout << "El precio del producto " << producto.cod << " es " << precioUnico << "�." << endl;
}

int calcularDescuento(int descuentos[]) {
	int promedio=0, cant=0;
	
	for(int i=0; i<kMAXTAL; i++)
		if(descuentos[i]>0) {
			promedio=promedio+descuentos[i];
			cant++;
		}
	promedio=promedio/cant;
	promedio=promedio/10;
}
// OPCI�N 2 //////////////////////////////////////////////////////////////////////


// OPCI�N 3 //////////////////////////////////////////////////////////////////////
void mostrarProducto(TDatosProducto &producto) {
	cout << "C�digo: " << producto.cod << endl;
	cout << "Tipo: ";
	if(producto.tipo=='c') cout << "calzado" << endl;
	if(producto.tipo=='r') cout << "ropa" << endl;
	if(producto.tipo=='e') cout << "material espec�fico" << endl;
	cout << "Talla: ";
	if(producto.talla=='i') cout << "infantil" << endl;
	if(producto.talla=='j') cout << "junior" << endl;
	if(producto.talla=='a') cout << "adulto" << endl;
	cout << "Descuentos: " << endl;
	for(int i=0; i<kMAXTAL; i++) {
		if(producto.desc[i]>0)
			cout << "Descuento " << i+1 << ": " << producto.desc[i] << endl;
	}
	cout << "Precio: ";
	if(producto.precio==0) cout << "NULL" << endl;
	else cout << producto.precio << endl;
}
// OPCI�N 3 //////////////////////////////////////////////////////////////////////