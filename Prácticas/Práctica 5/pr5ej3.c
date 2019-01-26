#include <iostream>
using namespace std;



bool esBisiesto(int anyo) {
    bool bis;
    
    if(((anyo%400)==0) || (anyo%4==0 && anyo%100!=0))
        bis=true;
    else
        bis=false;
    
    return (bis);
}


int dia_mes(int mes,int anyo) {
    int dias;
    
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8: 
        case 10:
        case 12:
            dias=31;
            
            break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            dias=30;
            
            break;
        
        case 2:
            if (esBisiesto(anyo)==true)
                dias=29;
            else
                dias=28;
            
            break;
    }
    
    return (dias);
}


bool fecha_valida(int dia,int mes,int anyo) {
    bool fecha;
    
    if (mes<=12 && mes>0) {
        if (dia>0 && dia<=dia_mes(mes,anyo))
            fecha=true;
        else
            fecha=false;
    }
    else
        fecha=false;
    
    return (fecha);
}


void leer_fecha_valida(int &dia,int &mes,int &anyo) {
    
	while ((fecha_valida(dia,mes,anyo))==false) {
    cout << "Vuelve a introducir una fecha, PERO QUE SEA VÁLIDA (dia, mes y año aparte)" << endl;
	cin >> dia;
	cin >> mes;
	cin >> anyo;
	
	fecha_valida(dia,mes,anyo);
		
	}	
}


void fecha_siguiente(int &dia,int &mes,int &anyo) {

	if (dia<(dia_mes(mes,anyo)))
		dia=dia+1;
		else if (dia==(dia_mes(mes,anyo))){
			mes=mes+1;
			dia=1;
		}
	if(mes>12) {
		mes=1;
		anyo=anyo+1;
	}

}


void mostrar_fecha(int &dia, int &mes, int &anyo){
	
	fecha_siguiente(dia,mes,anyo);
	
	switch (mes) {
        case 1:
			cout << "Fecha siguiente: " << dia << " de enero de " << anyo << endl;
				break;
        case 2:
			cout << "Fecha siguiente: " << dia << " de febrero de " << anyo << endl;
				break;
        case 3:
			cout << "Fecha siguiente: " << dia << " de marzo de " << anyo << endl;
				break;
        case 4:
			cout << "Fecha siguiente: " << dia << " de abril de " << anyo << endl;
				break;
        case 5: 
			cout << "Fecha siguiente: " << dia << " de mayo de " << anyo << endl;
				break;
        case 6:
			cout << "Fecha siguiente: " << dia << " de junio de " << anyo << endl;
				break;
        case 7:
			cout << "Fecha siguiente: " << dia << " de julio de " << anyo << endl;
				break;
        case 8:
			cout << "Fecha siguiente: " << dia << " de agosto de " << anyo << endl;
				break;
        case 9:
			cout << "Fecha siguiente: " << dia << " de septiembre de " << anyo << endl;
				break;
        case 10:
			cout << "Fecha siguiente: " << dia << " de octubre de " << anyo << endl;
				break;
        case 11:
			cout << "Fecha siguiente: " << dia << " de noviembre de " << anyo << endl;
				break;
		case 12:
			cout << "Fecha siguiente: " << dia << " de diciembre de " << anyo << endl;
				break;
	}
}

int main() {
    int dia,mes,anyo;
	bool w;
	
    cout << "Introduce una fecha(día, mes y año aparte):" << endl;
    cin >> dia;
    cin >> mes;
    cin >> anyo;
	
	leer_fecha_valida(dia,mes,anyo);
	
	do {
	
	mostrar_fecha(dia,mes,anyo);
	
	cout << "Fecha siguiente(1) o salir(0): " << endl;
	cin >> w;
	
	} while(w==1);
}