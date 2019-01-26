#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


int generar_combinacion_secreta() {
    int n1,n2,n3,n4,n;
    
    do {
    
    srand((unsigned)time(NULL));
    n=1000+rand()%(10000-1000);
    
    n4=n/1000;
    n1=n%10;
    n2=((n%100)-n1)/10;
    n3=(n/100)-(n4*10);
    
    } while (n1==n2 || n1==n3 || n1==n4 || n2==n3 || n2==n4 || n3==n4);
	
    return (n);
}

bool es_valida(int combinacion) {
    bool val;
    int num,n1,n2,n3,n4;
    
    n4=combinacion/1000;
    n1=combinacion%10;
    n2=((combinacion%100)-n1)/10;
    n3=(combinacion/100)-(n4*10);
    
    num=combinacion/10000;
    
    if (((n1/10)!=0) || ((n2/10)!=0) || ((n3/10)!=0) || ((n4/10)!=0)){
        val=false;
    }
        else if (n1==n2 || n1==n3 || n1==n4 || n2==n3 || n2==n4 || n3==n4){
            val=false;
		}
            else if(num==0){
                val=true;
			}
    else
        val=false;

    return (val);
    
}


void leer_combinacion(int &combinacion,int &intentos) {
		int n1,n2,n3,n4;
		bool verdad;
		
	do {
	
	intentos++;
	
    if (es_valida(combinacion)==true)
		verdad=true;
	
    if (es_valida(combinacion)==false){
		
        cout << "Recuerda que los números deben ser distintos y estar comprendidos entre 0 y 9." << endl;
		cout << endl;
		cout << "Introduce cuatro dígitos distintos separados por espacios: ";
		cin >> n1 >> n2 >> n3 >> n4;
		cout << endl;
		
		combinacion=n1*1000+n2*100+n3*10+n4;	
		verdad=false;
	}
	} while (verdad==false);
}

void calcular_acertados_casi(int comb_secreta,int comb_jugada,int &acierto,int &casi) {
	int n1,n2,n3,n4,x1,x2,x3,x4;
	
	n4=comb_secreta/1000;
    n1=comb_secreta%10;
    n2=((comb_secreta%100)-n1)/10;
    n3=(comb_secreta/100)-(n4*10);
	
	x4=comb_jugada/1000;
    x1=comb_jugada%10;
    x2=((comb_jugada%100)-x1)/10;
    x3=(comb_jugada/100)-(x4*10);
	
		if (n1==x1)
			acierto=acierto+1;
		
		if (n2==x2)
			acierto=acierto+1;
		
		if (n3==x3)
			acierto=acierto+1;
		
		if (n4==x4)
			acierto=acierto+1;

		if (n1==x2 || n1==x3 || n1==x4)
			casi=casi+1;
		
		if (n2==x1 || n2==x3 || n2==x4)
			casi=casi+1;
		
		if (n3==x1 || n3==x2 || n3==x4)
			casi=casi+1;
		
		if (n4==x1 || n4==x2 || n4==x3)
			casi=casi+1;
}


int main() {
    int combinacion,n1,n2,n3,n4,x;
	int comb_secreta,comb_jugada;
	int aciertos,casi,intentos;
	
	intentos=0;
	
	comb_secreta=generar_combinacion_secreta();
	
	do {
	
	aciertos=0;
	casi=0;
	
    cout << "Introduce cuatro dígitos distintos separados por espacios: ";
    cin >> n1 >> n2 >> n3 >> n4;
	cout << endl;
    
	if (n1==666){
		cout << "¡Te has rendido!" << endl;
		cout << "Intentos: " << intentos << endl;
		return (0);
	}
	
    combinacion=n1*1000+n2*100+n3*10+n4;
	
	leer_combinacion(combinacion,intentos);
	comb_jugada=combinacion;
	
	calcular_acertados_casi(comb_secreta,comb_jugada,aciertos,casi);
	
	if (aciertos<4){
	cout << "Aciertos: " << aciertos << endl;
	cout << "Casi aciertos: " << casi << endl;
	}
	
	if (aciertos<4) {
		cout << "Rendirse, 1er dígito: '666'" << endl;
		cout << endl;
	}
	
	} while (aciertos<4);
	
	cout << "Aciertos: " << aciertos << endl;
	cout << "Casi aciertos: " << casi << endl;
	cout << "Combinación secreta: " << comb_secreta << endl;
	cout << "Tus números: " << comb_jugada << endl;
	cout << "Intentos: " << intentos << endl;
}