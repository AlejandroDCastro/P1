#include <iostream>
using namespace std;

// año bisiesto (o año intercalar) Año que tiene 366 días en lugar de 365, en el que febrero tiene 29 días en lugar de 28; se repite cada cuatro años, excepto cuando el año acaba en dos ceros. 

int main() {
    int dia,mes,anyo;
	bool fecha;
	
	fecha=false;
	
	do {
		
	cout << "Introduce una fecha(día, mes y año aparte): " << endl;
	cin >> dia;
	cin >> mes;
	cin >> anyo;
	
	if (mes>0 && mes<=12) {

	switch (mes) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: if (dia>0 && dia<=31)
						fecha=true;
				   else
						cout << "La fecha es inválida." << endl;
		
				break;	
		case 4:
		case 6:
		case 9:
		case 11: if (dia>0 && dia<=30) 
						fecha=true;
				   else
						cout << "La fecha es inválida." << endl;
				break;		
		case 2: if (anyo%400==0 || (anyo%4==0 && anyo%100!=0)) {
						if (dia>0 && dia<=29) 
							fecha=true;
						else
							cout << "La fecha es inválida." << endl;
				}
				  else 
						if (dia>0 && dia<=28)
							fecha=true;
						else
							cout << "La fecha es inválida." << endl;
	}
        }
	else
		cout << "La fecha es inválida." << endl;
	
	} while (fecha==false);

        
        
        switch (mes) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: dia=dia+1;
                            if (dia>31) {
                                dia=1;
                                mes=mes+1;
                            }
                            if (mes>12) {
                                dia=1;
                                mes=1;
                                anyo=anyo+1;
                            }
                            cout << dia << "/" << mes << "/" << anyo << endl;
                break;
                        
                case 4:
		case 6:
		case 9:
		case 11: dia=dia+1;
                            if (dia>30) {
                                dia=1;
                                mes=mes+1;
                            }
                            if (mes>12) {
                                dia=1;
                                mes=1;
                                anyo=anyo+1;
                            }
                            cout << dia << "/" << mes << "/" << anyo << endl;
                break;
                            
                case 2: if (anyo%400==0 || (anyo%4==0 && anyo%100!=0)) {
                            dia=dia+1;
                            if (dia>29) {
                                dia=1;
                                mes=mes+1;
                            }
                            if (mes>12) {
                                dia=1;
                                mes=1;
                                anyo=anyo+1;
                            }
                            cout << dia << "/" << mes << "/" << anyo << endl;
                        }
                        else {
                            dia=dia+1;
                            if (dia>28) {
                                dia=1;
                                mes=mes+1;
                            }
                            if (mes>12) {
                                dia=1;
                                mes=1;
                                anyo=anyo+1;
                            }
                            cout << dia << "/" << mes << "/" << anyo << endl;
                        }
                break;
        }
}