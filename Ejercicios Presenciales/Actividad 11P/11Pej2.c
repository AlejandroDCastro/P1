// Ejercicio 2

#include <iostream>
#include <cstring>
using namespace std;



const int kVID=500, kCLI=100;
int countvid=0, countcli=0;

typedef char TCadena[30];

typedef struct {
	int codigo;
	TCadena nombre, tipo;
	float precio;
	int anyo;
} TVideojuego;

typedef struct {
	int codigo;
	TCadena nombre, direccion;
	TVideojuego comprados[10];
} TCliente;

typedef TVideojuego TVideojuegos[kVID];
typedef TCliente TClientes[kCLI];



int menu() {
	int op;

	cout << endl;
	cout << "TIENDA DE VIDEOJUEGOS" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "OPCION 1. Introducir un videojuego" << endl;
	cout << "OPCION 2. Introducir un cliente" << endl;
	cout << "OPCION 3. Mostrar un videojuego" << endl;
	cout << "OPCION 4. Mostrar un cliente" << endl;
	cout << "OPCION 5. Mostrar todos los videojuegos" << endl;
	cout << "OPCION 6. Mostrar todos los clientes" << endl;
	cout << "OPCION 7. Mostrar videojuegos de un tipo especifico" << endl;
	cout << "OPCION 8. Adquirir un videojuego para un cliente" << endl;
	cout << "OPCION 9. Salir" << endl;
	cout << "-----------------------------------------------------" << endl;
	do {
		cout << "Elige una opcion disponible: ";
		cin >> op;
	} while(op > 9  ||  op < 1);

	return op;
}


void introducirVj(TVideojuego &v) {
	cout << "Introducir codigo: ";
	cin >> v.codigo;
	cout << "Introducir nombre: ";
	cin >> v.nombre;
	do {
		cout << "Introducir tipo (aventuras/deporte/infantil/educativo): ";
		cin >> v.tipo;
	} while(strcmp(v.tipo,"aventuras")!=0  &&  strcmp(v.tipo,"deporte")!=0  &&  strcmp(v.tipo,"infantil")!=0  &&  strcmp(v.tipo,"educativo")!=0);
	cout << "Introducir precio: ";
	cin >> v.precio;
	if(v.precio < 0.0) v.precio = 0.0;
	cout << "Introducir anyo de lanzamiento: ";
	cin >> v.anyo;
	if(v.anyo < 0) v.anyo *= (-1);
}


void introducirCt(TCliente &c) {
	cout << "Introducir codigo: ";
	cin >> c.codigo;
	cout << "Introducir nombre: ";
	cin >> c.nombre;
	cout << "Introducir direccion: ";
	cin >> c.direccion;
}


void mostrarVj(TVideojuego &v) {
	cout << "Codigo: " << v.codigo << endl;
	cout << "Nombre: " << v.nombre << endl;
	cout << "Tipo: " << v.tipo << endl;
	cout << "Precio: " << v.precio << endl;
	cout << "Anyo de lanzamiento: " << v.anyo << endl;
}


void buscarVj(TVideojuegos v, int cod) {
	bool esta = false;

	for(int i=0; i<countvid; i++) {
		if(v[i].codigo == cod) {
			esta = true;
			cout << "VIDEOJUEGO" << endl;
			mostrarVj(v[i]);
			break;
		}
	}
	if(!esta)
		cout << "No hay registro de este videojuego." << endl;
}


void mostrarCt(TCliente &c) {

	cout << "Codigo: " << c.codigo << endl;
	cout << "Nombre: " << c.nombre << endl;
	cout << "Direccion: " << c.direccion << endl;
	for(int i=0; i<10; i++)
		if(c.comprados[i].codigo) {
			cout << "Videojuego comprado " << i+1 << endl;
			mostrarVj(c.comprados[i]);
		}
}


void buscarCt(TClientes c, int cod) {
	bool esta = false;

	for(int i=0; i<countcli; i++)
		if(c[i].codigo == cod) {
			esta = true;
			cout << "CLIENTE" << endl;
			mostrarCt(c[i]);
			break;
		}
	if(!esta)
		cout << "No hay registro de este cliente." << endl;
}


TVideojuego obtenerVj(TVideojuegos v, int &cod) {
	TVideojuego video;

	for(int i=0; i<countvid; i++) {
		if(v[i].codigo == cod) {
			video = v[i];
			break;
		}
	}

	return video;
}


TCliente obtenerCt(TClientes c, int &cod) {
	TCliente cliente;

	for(int i=0; i<countcli; i++) {
		if(c[i].codigo == cod) {
			cliente = c[i];
			break;
		}
	}

	return cliente;
}


int buscaViejo(TCliente &c) {
	int cod = -1;

	for(int i=0; i<10; i++) {
		if(c.comprados[i].codigo) {
			if(cod == -1) {
				cod = c.comprados[i].codigo;
			} else if(cod > c.comprados[i].codigo) {
				cod = c.comprados[i].codigo;
			}
		}
	}

	return cod;
}


void compra(TCliente &c, TVideojuego &v) {
	bool completo = true;
	int viejo;

	for(int i=0; i<10; i++) {
		if(!c.comprados[i].codigo) {
			completo = false;
			c.comprados[i] = v;
			break;
		}
	}
	if(completo) {
		viejo = buscaViejo(c);
		for(int i=0; i<10; i++) {
			if(viejo == c.comprados[i].codigo) {
				c.comprados[i] = v;
			}
		}
	}
}


int main() {
	TVideojuegos videojuegos;
	TClientes clientes;
	int op, cod, codc, codv, j=0;
	TCadena tipo;
	TVideojuego v;
	TCliente c;

	do {
		op = menu();
		switch(op) {
			case 1:
			introducirVj(videojuegos[countvid]);
			countvid++;
			break;
			
			case 2:
			introducirCt(clientes[countcli]);
			countcli++;
			break;

			case 3:
			cout << "Introduce el codigo del videojuego: ";
			cin >> cod;
			buscarVj(videojuegos,cod);
			break;

			case 4:
			cout << "Introduce el codigo del cliente: ";
			cin >> cod;
			buscarCt(clientes,cod);
			break;

			case 5:
			for(int i=0; i<countvid; i++) {
				cout << "VIDEOJUEGO" << endl;
				mostrarVj(videojuegos[i]);
			}
			break;

			case 6:
			for(int i=0; i<countcli; i++) {
				cout << "CLIENTE" << endl;
				mostrarCt(clientes[i]);
			}
			break;

			case 7:
			do {
				cout << "Introduce el tipo (aventuras/deporte/infantil/educativo): ";
				cin >> tipo;
			} while(strcmp(tipo,"aventuras")!=0  &&  strcmp(tipo,"deporte")!=0  &&  strcmp(tipo,"infantil")!=0  &&  strcmp(tipo,"educativo")!=0);
			for(int i=0; i<countvid; i++) {
				if(strcmp(videojuegos[i].tipo,tipo)==0) {
					j++;
					cout << "VIDEOJUEGO" << endl;
					cout << "Nombre: " << videojuegos[i].nombre << endl;
					cout << "Precio: " << videojuegos[i].precio << endl;
				}
			}
			if(j == 0) cout << "No videojuegos de este tipo." << endl;
			break;

			case 8:
			cout << "Introduce el codigo del cliente: ";
			cin >> codc;
			cout << "Introduce el codigo del videojuego a comprar: ";
			cin >> codv;
			v = obtenerVj(videojuegos,codv);
			c = obtenerCt(clientes,codc);
			break;
		}
		j = 0;
	} while(op != 9);
	cout << "¡ADIOS!" << endl;

	return 0;
}