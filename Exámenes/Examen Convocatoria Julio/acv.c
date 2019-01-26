// ALEJANDRO CASTRO VALERO 20521823G
#include <iostream>
#include <cstring>
using namespace std;

const int kEST=300;
const int kNOM=45;

typedef struct {
    char cod[3];
    int conv;
    float nota;
}TDatosAsignatura;

typedef struct{
    TDatosAsignatura asigs[10];
    float notaMedia;
}TDatosCurso;

typedef struct {
    char nombre[kNOM];
    char apellidos[kNOM];
    char dni[9];
    char titulacion;
    TDatosCurso curso[4];
}TDatosEstudiante;

typedef TDatosEstudiante TEstudiantes[300];

int menu();
void altaEstudiante(TDatosEstudiante &);
void mostrarEstudiante(TDatosEstudiante &);
void mostrarNota(TEstudiantes ,char ,int );


int main() {
    int numEstudiantes=0, opc;
    TEstudiantes estudiantes;
    char tit;
    
    do{
        opc=menu();
        switch(opc) {
            case 1: if(numEstudiantes<300) {
                        altaEstudiante(estudiantes[numEstudiantes]);
                        numEstudiantes++;
                    }
                    else cout << "No se admiten más estudiantes en la base de datos." << endl;
                    cout << endl;
            break;
            
            case 2: if(numEstudiantes<300) {
                        int cant=0;
                        do {
                            cout << "Introduce la titulación(i/m/r): ";
                            cin >> tit;
                        }while(tit!='i' && tit!='m' && tit!='r');
                        for(int i=0; i<numEstudiantes; i++) 
                            if(estudiantes[i].titulacion==tit) {
                                mostrarEstudiante(estudiantes[i]);
                                cant++;
                            }
                        if(cant==0) cout << "No hay estudiantes de esa titulación." << endl;
                    }
                    else cout << "No existen estudiantes en la base de datos." << endl;
                    cout << endl;
            break;
            
            case 3: do {
                        cout << "Introduce la titulación: ";
                        cin >> tit;
                    }while(tit!='i' && tit!='m' && tit!='r');
                    mostrarNota(estudiantes,tit,numEstudiantes);
        }
    }while(opc!=5);
    return 0;
}


int menu() {
    int op;
    
    cout << "************ MENU *************" << endl;
    cout << "1. Dar de alta a un alumno." << endl;
    cout << "2. Mostrar estudiantes de una titulación." << endl;
    cout << "3. Mostrar nota media de cada curso de una titulación." << endl;
    cout << "4. Indicar cuántos estudiantes están por encima de la media en cada titulación." << endl;
    cout << "5. Salir." << endl;
    cout << "Elige una opción: ";
    cin >> op;
    return op;
}


void altaEstudiante(TDatosEstudiante &est) {
    cin.get();
    cout << "Introduce su nombre: ";
    cin.getline(est.nombre,kNOM);
    cout << "Introduce sus apellidos: ";
    cin.getline(est.apellidos,kNOM);
    cout << "Introduce su DNI: ";
    cin.getline(est.dni,kNOM);
    do{
        cout << "Introduce su titulación(i/m/r): ";
        cin >> est.titulacion;
    }while(est.titulacion!='i' && est.titulacion!='m' && est.titulacion!='r');
    cout << "Introduce la nota media del curso 1: ";
    cin >> est.curso[0].notaMedia;
    cout << "Introduce la nota media del curso 2: ";
    cin >> est.curso[1].notaMedia;
    cout << "Introduce la nota media del curso 3: ";
    cin >> est.curso[2].notaMedia;
    cout << "Introduce la nota media del curso 4: ";
    cin >> est.curso[3].notaMedia;
}


void mostrarEstudiante(TDatosEstudiante &est) {
    cout << "Nombre: " << est.nombre << " " << est.apellidos << endl;
}


void mostrarNota(TEstudiantes est,char titulo,int numEst) {
  /*  int not1
    for(int j=0; j<4; j++)
        for(int i=0; i<numEst; i++)
            if(numEst==est[i].titulacion)
                */
            
}