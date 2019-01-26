// Ejercicio 2

#include <iostream>
#include <cstring>
using namespace std;


const int kPEL=50, kOPI=15;
int countpel=0;

typedef char TCadena[30];
typedef int TOpiniones[kOPI];

typedef struct {
	int codigo, views;
	TCadena nombre, genero;
	TOpiniones opiniones;
} TPelicula;

typedef TPelicula TPeliculas[kPEL];



void mostrarPelicula(TPelicula &pel) {
	cout << "PELICULA" << endl;
	cout << "Codigo: " << pel.codigo << endl;
	cout << "Nombre: " << pel.nombre << endl;
	cout << "Genero: " << pel.genero << endl;
	cout << "Espectadores: " << pel.views << endl;
	for(int i=0; i<kOPI; i++)
		if(pel.opiniones[i])
			cout << "Opinion critica " << i+1 << ": " << pel.opiniones[i] << endl;
}


void mostrarPeliculas(TPeliculas p) {
	for(int i=0; i<countpel; i++)
		mostrarPelicula(p[i]);
}


void buscarPelicula(TPeliculas p, int cod) {
	bool esta = false;

	for(int i=0; i<countpel; i++) {
		if(p[i].codigo == cod) {
			esta = true;
			mostrarPelicula(p[i]);
			break;
		}
	}
	if(!esta)
		cout << "Dicha pelicula no esta registrada." << endl;
}


void introducirPelicula(TPelicula &p) {
	int neg;

	cout << "Introduce su codigo: ";
	cin >> p.codigo;
	cout << "Introduce su nombre: ";
	cin >> p.nombre;
	do {
		cout << "Introduce su genero (terror/accion/comedia/animacion): ";
		cin >> p.genero;
	} while(strcmp(p.genero,"terror")!=0  &&  strcmp(p.genero,"accion")!=0  &&  strcmp(p.genero,"comedia")!=0  &&  strcmp(p.genero,"animacion")!=0);
	cout << "Numero de espectadores: ";
	cin >> p.views;
	if(p.views < 0) p.views = 0;
	for(int i=0; i<kOPI; i++) {
		do {
			cout << "Opinion critica (0-10)(Salir<0) " << i+1 << ": ";
			cin >> neg;
		} while(neg > 10);
		if(neg < 0) break;
		else p.opiniones[i] = neg;
	}
}

int menu() {
	int op;

	cout << endl;
	cout << "BASE DE DATOS DEL CINE" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "OPCION 1. Introducir una nueva pelicula" << endl;
	cout << "OPCION 2. Muestra una pelicula" << endl;
	cout << "OPCION 3. Muestra todas las peliculas" << endl;
	cout << "OPCION 4. Peliculas de terror famosas" << endl;
	cout << "OPCION 5. ¿La pelicula mas vista es la mejor valorada?" << endl;
	cout << "OPCION 6. Salir" << endl;
	cout << "------------------------------------------------------" << endl;
	do {
		cout << "Elige una opcion disponible: ";
		cin >> op;
	} while(op > 6  ||  op < 1);

	return op;
}


void terrorFamosas(TPeliculas p) {
	int j=0;

	for(int i=0; i<countpel; i++)
		if(strcmp(p[i].genero,"terror")==0  &&  p[i].views > 500) {
			cout << "Pelicula " << ++j << ": " << p[i].nombre << endl;
			cout << "Nº de espectadores: " << p[i].views << endl;
		}
}


TPelicula peliculon(TPeliculas p) {
	TPelicula peli;

	for(int i=0; i<countpel; i++) {
		if(i == 0) peli = p[i];
		else if(i > 0  &&  p[i].views > peli.views)
			peli = p[i];
	}

	return peli;
}


TPelicula valoracionAlta(TPeliculas p) {
	TPelicula peli;
	float media = 0.0, aux = 0.0;
	int cont = 0;

	for(int i=0; i<countpel; i++) {
		for(int j=0; j<kOPI; j++) {
			if(p[i].opiniones[j]) {
				aux += p[i].opiniones[j];
				cont++;
			}
		}
		aux /= cont;
		if(aux > media) {
			peli = p[i];
			media = aux;
		}
		cont = 0;
		aux = 0.0;
	}

	return peli;
}


int main() {
	TPeliculas peliculas;
	int opcion, cod;
	TPelicula vista, valorada;

	do{
		opcion = menu();
		switch(opcion) {
			case 1:
			introducirPelicula(peliculas[countpel]);
			countpel++;
			break;

			case 2:
			cout << "Introduce el codigo de la pelicula: ";
			cin >> cod;
			buscarPelicula(peliculas,cod);
			break;

			case 3:
			mostrarPeliculas(peliculas);
			break;

			case 4:
			terrorFamosas(peliculas);
			break;

			case 5:
			vista = peliculon(peliculas);
			valorada = valoracionAlta(peliculas);
			if(vista.codigo == valorada.codigo)
				cout << "La película mas vista es, en este caso, la mejor valorada." << endl;
			else
				cout << "La película mas vista no es la mejor valorada." << endl;
			mostrarPelicula(vista);
			break;
		}
	} while(opcion != 6);
	cout << "¡ADIOS CINEFILO!" << endl;

	return 0;
}